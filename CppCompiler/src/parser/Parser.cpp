#include "Parser.h"

Parser::Parser(const std::vector<Token>& tokens)
    : tokens(tokens), pos(0) {}

Token Parser::peek() {
    return tokens[pos];
}

Token Parser::advance() {
    return tokens[pos++];
}

std::unique_ptr<ASTNode> Parser::parsePrimary() {
    Token token = advance();

    if (token.type == TokenType::NUMBER)
        return std::make_unique<NumberNode>(std::stoi(token.value));

    if (token.type == TokenType::IDENTIFIER)
        return std::make_unique<VariableNode>(token.value);

    return nullptr;
}

std::unique_ptr<ASTNode> Parser::parseExpression() {
    auto left = parsePrimary();

    while (peek().type == TokenType::PLUS ||
           peek().type == TokenType::STAR) {

        Token op = advance();
        auto right = parsePrimary();

        left = std::make_unique<BinaryOpNode>(
            op.value, std::move(left), std::move(right));
    }

    return left;
}