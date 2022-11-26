#include "instruction_mysql_insert.h"

instruction_MYSQL_INSERT::instruction_MYSQL_INSERT()
{

}

void instruction_MYSQL_INSERT::soluteInstruction(ins_context con)
{
    QString tmp;

    QStringList tmpList=con.ins_body.split(QRegExp(QString("[ "+con.getIns().stMYSQLEnd+" ]")));

    tmp+=" INSERT INTO ";

    tmp+=tmpList[0];
    tmp+=" ( ";
    tmp+=tmpList[1];
    tmp+=" ) Values (";
    tmp+=tmpList[2];
    tmp+=" ); ";

    emit work(tmp,tmp);


}
