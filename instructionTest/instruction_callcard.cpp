#include "instruction_callcard.h"

void instruction_CALLCARD::soluteInstruction(ins_context con)
{

    if(con.ins_head.contains("Ten"))
    {
        emit callCardTen(con.ins_body.toInt());
    }
    else
    {
        emit callCard(con.ins_body.toInt());
    }
}

void instruction_CALLCARD::testShow()
{
    qDebug()<<"callCard!";
}
