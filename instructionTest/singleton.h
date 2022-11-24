#ifndef SINGLETON_H
#define SINGLETON_H
#pragma once
template <typename T>
class Singleton
{
public:

    static T* instance()
    {
        if(myInstance==nullptr)
            myInstance=new T();
        return myInstance;
    }

private:
    Singleton();
    Singleton(const Singleton<T> &);
    Singleton<T>& operator =(const Singleton<T>&);
    ~Singleton();

    static T* myInstance;

};

template <typename T>
T* Singleton<T>::myInstance=nullptr;

#endif // SINGLETON_H
