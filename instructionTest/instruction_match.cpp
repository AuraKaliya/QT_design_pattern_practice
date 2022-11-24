#include "instruction_match.h"


void instruction_MATCH::soluteInstruction(ins_context con)
{
    emit playerMatch(con.ins_sender,con.ins_body);
}

void instruction_MATCH::testShow()
{
    qDebug()<<"MATCH!";
}
