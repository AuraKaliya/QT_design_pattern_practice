#ifndef INSTRUCTION_MYSQL_SELECT_H
#define INSTRUCTION_MYSQL_SELECT_H

#include "instruction_base.h"
#include "ins_register.h"



class instruction_MYSQL_SELECT:public instruction_base
{

    Q_OBJECT

public:

    instruction_MYSQL_SELECT();
    void soluteInstruction(ins_context);
signals:
    //指令body携带--查询内容-目标表-条件--合并成一条语句
    void work(QString,QString);

};
REGISTER_INSTRUCTION(instruction_MYSQL_SELECT);
#endif // INSTRUCTION_MYSQL_SELECT_H
