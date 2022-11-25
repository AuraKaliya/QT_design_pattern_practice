﻿#include "instruction_mysql_update.h"

instruction_MYSQL_UPDATE::instruction_MYSQL_UPDATE()
{

}

void instruction_MYSQL_UPDATE::soluteInstruction(ins_context con)
{
    QString tmp;
    QStringList tmpList = con.ins_body.split(QRegExp(QString("[ "+con.getIns().stEnd+" ]")));

    tmp+=" UPDATE ";
    tmp+=tmpList[0];
    tmp+=" SET ";
    tmp+=tmpList[1];
    tmp+=" WHERE ";
    tmp+=tmpList[2];
    tmp+=" ; ";
    emit toUpdate(tmp);





}
