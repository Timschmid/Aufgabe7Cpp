//
// Created by timsc on 03.01.2021.
//

#ifndef AUFGABE6_PERSON_H
#define AUFGABE6_PERSON_H


#include <string>

class Person {
private:
    int id;
    std::string lastName, firstName;
public:
    Person(int id, std::string lastName, std::string firstname);
    int getId() const;
    const std::string &getLastName() const;
    const std::string &getFirstName() const;

};


#endif //AUFGABE6_PERSON_H
