#include "instruction_mysql_select.h"

instruction_MYSQL_SELECT::instruction_MYSQL_SELECT()
{




}

void instruction_MYSQL_SELECT::soluteInstruction(ins_context con)
{

    QString tmp;

    QStringList tmpList=con.ins_body.split(QRegExp(QString("["+con.getIns().stMYSQLEnd+" ]")));
    tmp+=" SELECT ";
    //if(tmpList[0]=="All")
        tmp+="*";
    //else tmp+=tmpList[0];

    tmp+=" FROM ";

    tmp+=tmpList[1];

    if(tmpList.size()>2)
    {
       tmp+=" WHERE ";
       tmp+=tmpList[2];
    }

    tmp+=" ; ";
    qDebug()<<con.ins_body;
    qDebug()<<tmp;
    qDebug()<<tmpList[0];
    emit work(tmpList[0],tmp);

}
