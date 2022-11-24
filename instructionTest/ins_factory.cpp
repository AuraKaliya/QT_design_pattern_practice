#include "ins_factory.h"

//void ins_factory::register_instruction(const QString &ins_Name, create_instruction_base method)
//{
//    //insMap.insert(ins_Name,method);
//    insMap[ins_Name]=method;
//}

void ins_factory::register_instruction(const QString &ins_Name, instruction_base *ins_class)
{
    insMap[ins_Name]=ins_class;
}

instruction_base *ins_factory::create_instruction(const QString &ins_Name)
{
//    auto it=insMap.find(ins_Name);
//    if(it==insMap.end())
//        return nullptr;
//    return it->second();

    auto it=insMap.find(ins_Name);
    if(it !=insMap.end()) return it.value();
    else return nullptr;
}

ins_factory::ins_factory()
{

}

ins_factory::~ins_factory()
{

}
