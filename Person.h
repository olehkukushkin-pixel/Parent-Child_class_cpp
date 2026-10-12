//
// Created by olehk on 26.09.2026.
//

#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <vector>
#include <memory>
#include <string>
#include <iostream>

using namespace std;

struct Stats {
    int mood = 50;
    int satiety = 50;
    int energy = 100;
    int money = 0;
};

enum class Status {
    Normal,
    Happy,
    Ecstasy,
    Depresion,
    Prostration,
    Starvation,
    Death,
 };

class Person {
protected:
    const string name;
    const string gender;
    int age;
    Stats stats;
    Status currentStatus;
public:

    Person(string n, string g, int a);
    Status getStatus();
    string getName();
    void setStatus(Status newStatus);

};


#endif //UNTITLED_PERSON_H
