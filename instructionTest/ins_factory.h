#ifndef INS_FACTORY_H
#define INS_FACTORY_H
#pragma once

#include <QString>
#include <QMap>
#include <map>

#include "instruction_base.h"
#include "singleton.h"


//typedef  instruction_base* (*create_instruction_base)(void);
class ins_factory
{
    friend class Singleton<ins_factory>;

public:

    // void register_instruction(const QString & ins_Name,create_instruction_base ins_class);
    void register_instruction(const QString & ins_Name,instruction_base* ins_class);      //这里的method实际上是构造函数
    instruction_base* create_instruction(const QString &ins_Name);

private:
    ins_factory();
    ~ins_factory();
    //QMap<QString,create_instruction_base> insMap;           //用于查询这个类是否注册（即是否有它的构造函数）
    //std::map<QString,create_instruction_base> insMap;
    QMap <QString,instruction_base*>insMap;
};

#endif // INS_FACTORY_H
