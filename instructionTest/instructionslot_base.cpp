#include "instructionslot_base.h"

instructionSlot_base::instructionSlot_base(QObject *parent) : QObject(parent)
{
    qurey=new QSqlQuery;
}

void instructionSlot_base::setAdress(QString s)
{
    databaseAdress=s;
}

QList<QList<QString> > instructionSlot_base::getResult()
{
    return result;
}


void instructionSlot_base::setQurey(QSqlQuery *q)
{
    qurey=q;
}

bool instructionSlot_base::returnFlag()
{
    return  insFlag;
}

//QString instructionSlot_base::getError()
//{
//    return errorStr;
//}


