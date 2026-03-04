#pragma once
#include <vector>

enum class OpCode {
    PUSH,
    ADD,
    MUL,
    PRINT,
    HALT
};

struct Instruction {
    OpCode op;
    int operand;
};