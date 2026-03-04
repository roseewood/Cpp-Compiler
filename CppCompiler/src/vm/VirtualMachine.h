#pragma once
#include "../codegen/Bytecode.h"
#include <vector>

class VirtualMachine {
public:
    void execute(const std::vector<Instruction>& instructions);
};