#pragma once
#include <memory>
#include <string>
#include <vector>

class ASTNode {
public:
    virtual ~ASTNode() = default;
};

class NumberNode : public ASTNode {
public:
    int value;
    NumberNode(int v) : value(v) {}
};

class VariableNode : public ASTNode {
public:
    std::string name;
    VariableNode(const std::string& n) : name(n) {}
};

class BinaryOpNode : public ASTNode {
public:
    std::string op;
    std::unique_ptr<ASTNode> left, right;

    BinaryOpNode(std::string o,
        std::unique_ptr<ASTNode> l,
        std::unique_ptr<ASTNode> r)
        : op(o), left(std::move(l)), right(std::move(r)) {}
};