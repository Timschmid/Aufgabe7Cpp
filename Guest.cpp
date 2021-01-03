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

Guest::Guest(int id, std::string lastName, std::string firstname, int days, int roomRate) : Person(id,lastName,firstname), days(days), roomRate(roomRate){}

int Guest::check() {
    return days * roomRate;
}



