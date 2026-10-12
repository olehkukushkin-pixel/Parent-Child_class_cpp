//
// Created by olehk on 26.09.2026.
//

#ifndef UNTITLED_UTILS_H
#define UNTITLED_UTILS_H

#include <random>
#include <vector>
#include <algorithm>
#include <memory>
#include "Child.h"

using namespace std;

string rollGender(mt19937& generator);
void StartCreatingChild();

void isSibling(shared_ptr<Child> dziecko1, shared_ptr<Child> dziecko2);

void longLoading();
void shortLoading();
void startAsParent();


#endif //UNTITLED_UTILS_H
