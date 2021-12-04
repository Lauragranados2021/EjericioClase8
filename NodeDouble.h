//
// Created by lauri on 18/11/2021.
//

#ifndef EJERICIOCLASE8_NODEDOUBLE_H
#define EJERICIOCLASE8_NODEDOUBLE_H
#include<cstdlib>
template<class T>class LinkedDouble;
template<class T>
class NodeDouble {
    friend class LinkedDouble<T>;
public:
NodeDouble(T info):info(info){
    next=previous=NULL;
}
private:
    T info;
    NodeDouble<T>* next;
    NodeDouble<T>* previous;
};


#endif //EJERICIOCLASE8_NODEDOUBLE_H
