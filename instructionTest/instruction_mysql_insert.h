﻿#ifndef INSTRUCTION_MYSQL_INSERT_H
#define INSTRUCTION_MYSQL_INSERT_H

#include "instruction_base.h"
#include "ins_register.h"

class instruction_MYSQL_INSERT:public instruction_base
{
    Q_OBJECT
public:
    instruction_MYSQL_INSERT();

    void soluteInstruction(ins_context);
signals:
    void toInsert(QString);
};

#endif // INSTRUCTION_MYSQL_INSERT_H