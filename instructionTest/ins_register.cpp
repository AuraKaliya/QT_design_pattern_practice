#include "ins_register.h"

//ins_register::ins_register(const QString &insName, create_instruction_base method)
//{
//    ins_factory * factory=Singleton<ins_factory>::instance();
//    factory->register_instruction(insName,method);


//}

ins_register::ins_register(const QString &insName, instruction_base *ins_class)
{

    ins_factory * factory=Singleton<ins_factory>::instance();
     factory->register_instruction(insName,ins_class);
}

ins_register::ins_register()
{

}
