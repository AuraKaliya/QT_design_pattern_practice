#ifndef INS_REGISTER_H
#define INS_REGISTER_H
#pragma once

#include <QString>

#include "ins_factory.h"


class ins_register
{
public:

//    ins_register(const QString&insName,create_instruction_base method);
    ins_register(const QString&insName,instruction_base* ins_class);

    ins_register();
};

#define REGISTER_INSTRUCTION(insName)                       \
 static instruction_base * createInstruction##insName()     \
    {                                                       \
       instruction_base *obj=new insName();                 \
       return obj;                                          \
    }                                                       \
  static ins_register insRegister##insName(#insName,createInstruction##insName())

#endif // INS_REGISTER_H
