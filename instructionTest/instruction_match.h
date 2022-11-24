#ifndef INSTRUCTION_MATCH_H
#define INSTRUCTION_MATCH_H
#pragma once
#include "instruction_base.h"
#include "ins_register.h"
#include <QDebug>

class instruction_MATCH:public instruction_base
{
      Q_OBJECT
public:
    void soluteInstruction(ins_context);
    void testShow();
signals:
    void playerMatch(QString,QString);


};
REGISTER_INSTRUCTION(instruction_MATCH);
#endif // INSTRUCTION_MATCH_H
