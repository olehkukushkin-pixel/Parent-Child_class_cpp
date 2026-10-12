//
// Created by olehk on 26.09.2026.
//

#include "Person.h"


Person::Person(string n, string g, int a) : name(n), gender(g), age(a) , currentStatus(Status::Normal) {} // tu akurat zapisujemy wykonanie i skład konstruktora ale musimy podać od czego on musi wziąć konstruktor

string Person::getName() {
    return name;
}

Status Person::getStatus() {
    if (stats.mood < 65 && stats.mood >= 45) return Status::Normal;
    if (stats.mood == 100 && stats.energy > 95 && stats.satiety > 90) return Status::Ecstasy;
    if (stats.satiety == 0 && stats.mood == 0 && stats.energy == 0) return Status::Death;
    if (stats.mood >= 65 && stats.mood < 100) return Status::Happy;
    if (stats.satiety == 0) return Status::Starvation;
    if (stats.mood == 0) return Status::Depresion;
    if (stats.energy == 0) return Status::Prostration;

}

void Person::setStatus(Status newStatus) {
    currentStatus = newStatus;
}