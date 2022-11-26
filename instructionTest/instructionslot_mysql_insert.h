#ifndef INSTRUCTIONSLOT_MYSQL_INSERT_H
#define INSTRUCTIONSLOT_MYSQL_INSERT_H

#include "instructionslot_base.h"
#include "insslot_register.h"

class instructionSlot_MYSQL_INSERT:public instructionSlot_base
{
    Q_OBJECT
public:
    instructionSlot_MYSQL_INSERT();


public slots:
    void work(QString,QString);
};

REGISTER_INSTRUCTIONSLOT(instructionSlot_MYSQL_INSERT);
#endif // INSTRUCTIONSLOT_MYSQL_INSERT_H
