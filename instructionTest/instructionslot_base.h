#ifndef INSTRUCTIONSLOT_BASE_H
#define INSTRUCTIONSLOT_BASE_H

#include <QObject>
#include <QString>

class instructionSlot_base : public QObject
{
    Q_OBJECT
public:
    explicit instructionSlot_base(QObject *parent = nullptr);
    virtual ~instructionSlot_base(){}

    virtual void slotFunctionMySQL(QString);


signals:

};

#endif // INSTRUCTIONSLOT_BASE_H
