//
// Created by timsc on 03.01.2021.
//

#ifndef AUFGABE6_GUEST_H
#define AUFGABE6_GUEST_H


#include "Person.h"

class Guest : public Person {
private:
    int days, roomRate;
public:
    int getDays() const;

    int getRoomRate() const;

public:
    Guest(int days, int roomRate);
    int check();
};


#endif //AUFGABE6_GUEST_H
