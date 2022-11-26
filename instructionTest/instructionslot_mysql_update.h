#ifndef INSTRUCTIONSLOT_MYSQL_UPDATE_H
#define INSTRUCTIONSLOT_MYSQL_UPDATE_H

#include "instructionslot_base.h"
#include "insslot_register.h"
class instructionSlot_MYSQL_UPDATE:public instructionSlot_base
{
    Q_OBJECT
public:
    instructionSlot_MYSQL_UPDATE();


public slots:

    void work(QString,QString);

};
REGISTER_INSTRUCTIONSLOT(instructionSlot_MYSQL_UPDATE);
#endif // INSTRUCTIONSLOT_MYSQL_UPDATE_H
