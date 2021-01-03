//
// Created by timsc on 03.01.2021.
//

#include "Guest.h"

int Guest::getDays() const {
    return days;
}

int Guest::getRoomRate() const {
    return roomRate;
}

Guest::Guest(int days, int roomRate) : Person(getId(),getLastName(),getFirstName()), days(days), roomRate(roomRate){}

int Guest::check() {
    return days * roomRate;
}



