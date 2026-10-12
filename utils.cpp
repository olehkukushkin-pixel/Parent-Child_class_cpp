//
// Created by olehk on 26.09.2026.
//

#include "utils.h"
#include "Parent.h"
#include "Person.h"
//
// Created by olehk on 26.09.2026.
//

#include <iostream>
#include <random>
#include <string>
#include <thread>
#include <chrono>
#include <memory>

using namespace std;

string rollGender(mt19937& generator) {
    uniform_int_distribution<int> zakres(0, 1);
    return zakres(generator) == 0 ? "chłopiec" : "dziewczynka";
}
void shortLoading() {
    for (int i = 0; i < 3; i++) {
        this_thread::sleep_for(chrono::milliseconds(500)); // pół sekundy

    }
}
void longLoading() {
    cout << "Ladowanie";
    for (int i = 0; i < 3; i++) {
        this_thread::sleep_for(chrono::seconds(1)); // 1 sekunda między kropkami
        cout << "." << flush; // flush - WYMUSZA natychmiastowe wypisanie na ekran, bez czekania na endl
    }
}
void StartingCreatingChild(string yourName) {
    random_device rd;
    mt19937 generator(rd());
    string gender = rollGender(generator);
    string name;
    cout << "Cześć " << yourName << "! Właśnie z żoną urodziliście dziecko! \n"
            "I na dodatek jest to" << gender << "! \n"
            "Pora żeby nadać mu imię: \n"
            "⚠️ Pamiętaj Imię możesz nadać tylko raz! ⚠️ \n";
    cin >> name;
    cout << name << " , Piękne imię dla przyszłej nadzei dla Ziemi. zaraz wprowadzimy twoje dane i kontynujemy ";

    longLoading();

    int age;
    auto child = make_shared<Child>(name, gender, age = 1);
    cout << "Super! wprowadziliśmy wszystki potrzebne dane! Zaczynamy!\n";
}

void startAsParent() {
    string tempYourName;
    string tempYourGender;
    int age = 40;
    cout << "Cześć przyszły rodzicu! zanim zaczniemy  symulację podaj swoje imię(np \"Anna\") oraz płeć(male/female): \n";
    shortLoading();

    cout << "⚠️ Pamiętaj: Imię oraz płeć możesz wprowadzić tylko raz!⚠️ \n";
    cin >> tempYourName >> tempYourGender;
    cout << "Dziękujemy, zaraz wprowadzimy dane do serwera \n";
    longLoading();

    const string yourName = tempYourName;
    transform(tempYourGender.begin(), tempYourGender.end(), tempYourGender.begin(), ::tolower);
    const string yourGender = tempYourGender;
    //wprowadzenie do Parent
    auto parent = make_shared<Parent>(yourName, yourGender , age);

    cout << "twoje dane: \n" <<
        "płeć: " << tempYourGender <<
        "\nImię: " << tempYourName <<
        "\n zostały pomyslnie wprowadzone, jesteś rodzicem.";
}