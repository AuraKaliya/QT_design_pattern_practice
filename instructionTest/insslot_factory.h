#ifndef INSSLOT_FACTORY_H
#define INSSLOT_FACTORY_H

#include <QMap>
#include <QString>
#include "instructionslot_base.h"
#include "singleton.h"

class insSlot_factory
{

    friend class Singleton<insSlot_factory>;
public:
    void register_instructionSlot(const QString & insSlot_Name,instructionSlot_base* insSlot_class);
    instructionSlot_base* create_instructionSlot(const QString &ins_Name);




private:
    ~insSlot_factory();
    insSlot_factory();
    QMap <QString,instructionSlot_base*>insSlotMap;
};

#endif // INSSLOT_FACTORY_H
