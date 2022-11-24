#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#pragma once

#include <QString>

#pragma execution_character_set("utf-8")
class instruction
{
public:
    instruction();
    QString ATK();
    QString DEF();
    QString REC();
    QString SendTalk();

    QString OPHP();
    QString MEHP();
    QString Winner();
    QString NextTurn();
    QString initBattle();
    QString match();
    QString stopMatch();
    QString matchSuccess();
    QString setIdx();
    QString inst(QString);


    QString style="##";
    QString stEnd="|";
    QString stSenderEnd=":";

};

#endif // INSTRUCTION_H
