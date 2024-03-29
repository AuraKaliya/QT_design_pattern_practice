﻿#ifndef INS_CONTEXT_H
#define INS_CONTEXT_H
#pragma once

#include <QString>
#include <QStringList>
#include <QList>
#include <QDebug>

#include "instruction.h"

class ins_context
{
public:
    ins_context();
    ins_context(QString);
    ins_context(QString,QString,QString);

    QString ins_sender;
    QString ins_head;
    QString ins_body;
    //QList< QString> ins_body;
    instruction getIns() const;

private:
    instruction ins;


};

#endif // INS_CONTEXT_H
