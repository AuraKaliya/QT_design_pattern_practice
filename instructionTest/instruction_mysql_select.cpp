#include "instruction_mysql_select.h"

instruction_MySQL_SELECT::instruction_MySQL_SELECT()
{




}

void instruction_MySQL_SELECT::soluteInstruction(ins_context con)
{

    QString tmp;

    QStringList tmpList=con.ins_body.split(QRegExp(QString("["+con.getIns().stEnd+" ]")));
    tmp+=" SELECT ";
    if(tmpList[0]=="All") tmp+="*";
    else tmp+=tmpList[0];

    tmp+=" FROM ";

    tmp+=tmpList[1];

    if(tmpList.size()>2)
    {
       tmp+=" WHERE ";
       tmp+=tmpList[2];
    }

    tmp+=" ; ";
    emit toSelect(tmp);

}
