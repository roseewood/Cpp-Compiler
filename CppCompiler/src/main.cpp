#include <iostream>
#include "lexer/Lexer.h"
#include "parser/Parser.h"

int main() {
    std::string source = "10 + 20 * 2";

    Lexer lexer(source);
    auto tokens = lexer.tokenize();

    Parser parser(tokens);
    auto ast = parser.parseExpression();

    std::cout << "Compilation successful.\n";
}