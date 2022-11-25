#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#pragma once

#include <QString>
#include <QMap>
#include <QList>

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







    QList<QString> getInstructionMysql() const;


private:
    QMap<QString,QString> instructionInformation;
    QList<QString> instructionMysql;





};

#endif // INSTRUCTION_H
