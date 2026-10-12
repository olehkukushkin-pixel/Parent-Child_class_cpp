//
// Created by olehk on 25.09.2026.
//

#include "Parent.h"
#include "Person.h"
#include <iostream>

Parent::Parent(string n, string g, int a) : Person(n , g, a) {}

void Parent::addChild(shared_ptr<Child> dziecko) {
    child.push_back(dziecko);
}





