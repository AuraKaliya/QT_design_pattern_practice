#ifndef INSSLOT_REGISTER_H
#define INSSLOT_REGISTER_H

#include <QString>
#include "insslot_factory.h"


class insSlot_register
{
public:
    insSlot_register();
    insSlot_register(const QString &insSlot_Name,instructionSlot_base*);
};

#define REGISTER_INSTRUCTIONSLOT(insSlotName)                               \
    static instructionSlot_base * createInstructionSlot##insSlotName()      \
    {                                                                       \
           instructionSlot_base *obj=new insSlotName();                     \
               return obj ;                                                 \
    }                                                                       \
    static insSlot_register insSlotRegister##insSlotName(#insSlotName,createInstructionSlot##insSlotName())

#endif // INSSLOT_REGISTER_H
