//
// Created by timsc on 02.01.2021.
//

#ifndef AUFGABE6_INTERFACE_H
#define AUFGABE6_INTERFACE_H


class InterFace {
protected:
    InterFace() {}
public:
    virtual ~InterFace() {}
    virtual double getLength() = 0;
    virtual double getWidth() = 0;
};


#endif //AUFGABE6_INTERFACE_H
