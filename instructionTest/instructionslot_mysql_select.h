#ifndef INSTRUCTIONSLOT_MYSQL_SELECT_H
#define INSTRUCTIONSLOT_MYSQL_SELECT_H

#include "instructionslot_base.h"
#include "insslot_register.h"

#include <QDebug>
class instructionSlot_MYSQL_SELECT:public instructionSlot_base
{
    Q_OBJECT

public:

    instructionSlot_MYSQL_SELECT();

   QList <QList<QString> > getResult();

public slots:
    void work(QString,QString);

private:
    QList <QList <QString> > result;

};

REGISTER_INSTRUCTIONSLOT(instructionSlot_MYSQL_SELECT);

#endif // INSTRUCTIONSLOT_MYSQL_SELECT_H
