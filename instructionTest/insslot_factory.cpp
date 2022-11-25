#include "insslot_factory.h"

void insSlot_factory::register_instructionSlot(const QString &insSlot_Name, instructionSlot_base *insSlot_class)
{


    insSlotMap[insSlot_Name]=insSlot_class;
}

instructionSlot_base *insSlot_factory::create_instructionSlot(const QString &ins_Name)
{

    auto it =insSlotMap.find(ins_Name);
    if(it !=insSlotMap.end()) return it.value();
    else return nullptr;

}

insSlot_factory::~insSlot_factory()
{

}

insSlot_factory::insSlot_factory()
{

}
