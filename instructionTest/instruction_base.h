#ifndef INSTRUCTION_BASE_H
#define INSTRUCTION_BASE_H
#pragma once
#include <QObject>

#include "ins_context.h"

class instruction_base : public QObject
{
    Q_OBJECT
public:
    explicit instruction_base(QObject *parent = nullptr);

    virtual void testShow();
    virtual void soluteInstruction(ins_context)=0;
    virtual ~instruction_base(){}


signals:

};




















#endif // INSTRUCTION_BASE_H
