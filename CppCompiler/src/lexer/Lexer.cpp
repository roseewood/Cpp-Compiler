#include "Lexer.h"
#include <cctype>

Lexer::Lexer(const std::string& input) : input(input), pos(0) {}

char Lexer::peek() {
    if (pos >= input.size()) return '\0';
    return input[pos];
}

char Lexer::advance() {
    return input[pos++];
}

void Lexer::skipWhitespace() {
    while (isspace(peek())) advance();
}

std::vector<Token> Lexer::tokenize() {
    std::vector<Token> tokens;

    while (pos < input.size()) {
        skipWhitespace();
        char c = peek();

        if (isdigit(c)) {
            std::string num;
            while (isdigit(peek()))
                num += advance();
            tokens.push_back({TokenType::NUMBER, num});
        }
        else if (isalpha(c)) {
            std::string id;
            while (isalnum(peek()))
                id += advance();

            if (id == "int")
                tokens.push_back({TokenType::INT, id});
            else if (id == "print")
                tokens.push_back({TokenType::PRINT, id});
            else
                tokens.push_back({TokenType::IDENTIFIER, id});
        }
        else {
            switch (advance()) {
                case '+': tokens.push_back({TokenType::PLUS, "+"}); break;
                case '-': tokens.push_back({TokenType::MINUS, "-"}); break;
                case '*': tokens.push_back({TokenType::STAR, "*"}); break;
                case '/': tokens.push_back({TokenType::SLASH, "/"}); break;
                case '=': tokens.push_back({TokenType::ASSIGN, "="}); break;
                case ';': tokens.push_back({TokenType::SEMICOLON, ";"}); break;
                case '(': tokens.push_back({TokenType::LPAREN, "("}); break;
                case ')': tokens.push_back({TokenType::RPAREN, ")"}); break;
            }
        }
    }

    tokens.push_back({TokenType::END_OF_FILE, ""});
    return tokens;
}