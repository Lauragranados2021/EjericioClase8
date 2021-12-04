//
// Created by lauri on 18/11/2021.
//

#ifndef EJERICIOCLASE8_LINKEDDOUBLE_H
#define EJERICIOCLASE8_LINKEDDOUBLE_H
#include <vector>
#include <string>
#include "NodeDouble.h"
template <class T>
class LinkedDouble {

public:
    virtual ~LinkedDouble();

    LinkedDouble();
bool isEmpty();
void addNodeFirst(T);
void addNodeLast(T);
void addNodeSorted(T);
NodeDouble<T>* findNode(std::string);
T* findInfo(std::string);
void addNodeBefore(NodeDouble<T>*,T);
void addNodeAfter(NodeDouble<T>*,T);
std::vector<T> getList(bool);
int getSize();
T* getObject(int);
private:
    NodeDouble<T>* head;
NodeDouble<T>* last;
};



#endif //EJERICIOCLASE8_LINKEDDOUBLE_H
