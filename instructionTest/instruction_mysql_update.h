﻿#ifndef INSTRUCTION_MYSQL_UPDATE_H
#define INSTRUCTION_MYSQL_UPDATE_H

#include "instruction_base.h"
#include "ins_register.h"
class instruction_MYSQL_UPDATE:public instruction_base
{
    Q_OBJECT


public:
    instruction_MYSQL_UPDATE();

    void soluteInstruction(ins_context);

signals:
    void work(QString,QString);

};
REGISTER_INSTRUCTION(instruction_MYSQL_UPDATE);
#endif // INSTRUCTION_MYSQL_UPDATE_H
