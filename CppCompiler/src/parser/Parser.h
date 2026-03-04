#pragma once
#include "../lexer/Token.h"
#include "../ast/AST.h"
#include <vector>

class Parser {
public:
    Parser(const std::vector<Token>& tokens);
    std::unique_ptr<ASTNode> parseExpression();

private:
    std::vector<Token> tokens;
    size_t pos;

    Token peek();
    Token advance();
    std::unique_ptr<ASTNode> parsePrimary();
};