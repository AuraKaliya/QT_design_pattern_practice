#include "insslot_register.h"

insSlot_register::insSlot_register()
{

}

insSlot_register::insSlot_register(const QString &insSlot_Name, instructionSlot_base * insSlot_class)
{
    insSlot_factory * factory =Singleton<insSlot_factory>::instance();
    factory->register_instructionSlot(insSlot_Name,insSlot_class);

}
