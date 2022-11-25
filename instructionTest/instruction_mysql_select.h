#ifndef INSTRUCTION_MYSQL_SELECT_H
#define INSTRUCTION_MYSQL_SELECT_H

#include "instruction_base.h"
#include "ins_register.h"



class instruction_MySQL_SELECT:public instruction_base
{

    Q_OBJECT

public:

    instruction_MySQL_SELECT();
    void soluteInstruction(ins_context);
signals:
    //指令body携带--查询内容-目标表-条件--合并成一条语句
    void toSelect(QString);

};

#endif // INSTRUCTION_MYSQL_SELECT_H
