//
// Created by olehk on 25.09.2026.
//

#ifndef UNTITLED_CHILD_H
#define UNTITLED_CHILD_H

#include "Person.h"
#include <vector>
#include <memory>
#include <string>
#include <iostream>

using namespace std;

class Parent;

class Child : public Person {

    weak_ptr<Parent> parent;
    Status status = Status::Happy;
public:


    Child(string n, string g, int a); // konstruktor


    void setParent(shared_ptr<Parent> rodzic_);
    void greetParent();
    shared_ptr<Parent> getParent();
};


#endif //UNTITLED_CHILD_H
