#include <iostream>
#include <memory>
#include <algorithm>
#include <vector>
#include <thread>
#include <chrono>

#include "Parent.h"
#include "Child.h"
#include "utils.h"


using namespace std;


int main() {
    system("chcp 65001 > nul");


startAsParent();

}


/* auto RodzicAnna = make_shared<Parent>("Anna"); // shared_ptr - jeden twórca, ale może być dzielony
    auto DzieckoPiotr = make_shared<Child>("Piotr"); // unique_ptr byłby tu ZA MAŁO - dziecko musi być
    auto DzieckoKasia = make_shared<Child>("Kasia"); // dostępne i dla Rodzica (w vectorze), i lokalnie w main

    RodzicAnna->addChild(DzieckoPiotr);
    RodzicAnna->addChild(DzieckoKasia);

    DzieckoPiotr->setParent(RodzicAnna);
    DzieckoKasia->setParent(RodzicAnna);

    DzieckoPiotr->greetParent(); // "Piotr ma rodzica."
    //RodzicAnna.reset();  odcina wszystkie więzi bo chlała i odebrali jej obecnych dzieci ale nadal może urodzić nowych lub zabrać starych dzeci spowrotem.

    DzieckoPiotr->greetParent();

    isSibling(DzieckoPiotr, DzieckoKasia);


}





void isSibling(shared_ptr<Child> dziecko1, shared_ptr<Child> dziecko2) {
     wyciąga RAZ imiona rodziców

     string rodzic1 = dziecko1->getRodzic(); //policz RAZ
     string rodzic2 = dziecko2->getRodzic();

         ale jeżeli dwa inni rodzice mają
         te same imiona to będzie problem bo będą rodzeństwem
         a zatem uzyjemy wskaźników i porównamy same wskazniki

    auto rodzic1 = dziecko1->getParent();
    auto rodzic2 = dziecko2->getParent();
    if (rodzic1 && rodzic1 == rodzic2) {
        cout << dziecko1->getName() << " jest rodzeństwem " << dziecko2->getName() << endl;
    }
    else {
        cout << dziecko1->getName() << " nie jest rodzeństwem " << dziecko2->getName() << endl;
    }*/