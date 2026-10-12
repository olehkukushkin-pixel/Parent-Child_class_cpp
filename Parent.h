//
// Created by olehk on 25.09.2026.
//

#ifndef UNTITLED_PARENT_H
#define UNTITLED_PARENT_H

#include "Person.h"
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Child;

class Parent : public Person {

   Parent(string n, string g, int a);//tylko deklaracja konstruktora



   vector<shared_ptr<Child>> child;
   Status status = Status::Normal;

   public:



   void addChild(shared_ptr<Child> dziecko); //tylko deklaracja metody
   //tu nigdy nie opisujemy wszydtko dokładnie, w tych plikach .h tylko deklarujemy co on wgl zawiera

};



#endif //UNTITLED_PARENT_H
