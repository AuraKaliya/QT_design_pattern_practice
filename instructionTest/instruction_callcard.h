#ifndef INSTRUCTION_CALLCARD_H
#define INSTRUCTION_CALLCARD_H
#pragma once
#include "instruction_base.h"
#include "ins_register.h"
#include <QDebug>

class instruction_CALLCARD:public instruction_base
{
      Q_OBJECT
public:

    void soluteInstruction(ins_context);
    void testShow();
signals:
    void callCard(int poor);
    void callCardTen(int poor);

};

REGISTER_INSTRUCTION(instruction_CALLCARD);

#endif // INSTRUCTION_CALLCARD_H
