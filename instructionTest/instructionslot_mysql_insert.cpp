#include "instructionslot_mysql_insert.h"

instructionSlot_MYSQL_INSERT::instructionSlot_MYSQL_INSERT()
{

}

void instructionSlot_MYSQL_INSERT::work(QString s1, QString s2)
{
    insFlag=qurey->exec(s1);
}
