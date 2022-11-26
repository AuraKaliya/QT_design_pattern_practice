#ifndef INSTRUCTION_MYSQL_H
#define INSTRUCTION_MYSQL_H

#include "instruction_base.h"
#include "ins_register.h"

class instruction_MYSQL:public instruction_base
{
    Q_OBJECT
public:
    instruction_MYSQL();
    void soluteInstruction(ins_context);
};

#endif // INSTRUCTION_MYSQL_H
