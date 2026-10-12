//
// Created by olehk on 25.09.2026.
//

#include "Child.h"
#include "Person.h"

Child::Child(string n, string g, int a = 1) : Person(n , g, a) {
    stats.money = 0;
    
}

void Child::setParent(shared_ptr<Parent> rodzic_) {
    parent = rodzic_;
}

void Child::greetParent() {
    shared_ptr<Parent> rodzic_ = parent.lock();
    if (rodzic_) {
        cout << name << " ma rodzica.\n";
    } else {
        cout << name << " został sierotą - rodzic już nie istnieje. \n";
    }
}

shared_ptr<Parent> Child::getParent() {
   auto r = parent.lock();
        return parent.lock();
}

