#include "instructionslot_mysql_update.h"

instructionSlot_MYSQL_UPDATE::instructionSlot_MYSQL_UPDATE()
{

}

void instructionSlot_MYSQL_UPDATE::work(QString s1 , QString s2)
{
    insFlag=qurey->exec(s1);
}
