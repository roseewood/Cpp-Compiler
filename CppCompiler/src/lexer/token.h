#pragma once
#include <string>

enum class TokenType {
    INT, PRINT,
    IDENTIFIER, NUMBER,
    PLUS, MINUS, STAR, SLASH,
    ASSIGN,
    SEMICOLON,
    LPAREN, RPAREN,
    END_OF_FILE
};

struct Token {
    TokenType type;
    std::string value;
};