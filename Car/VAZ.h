//
// Created by Kostantin Alaev on 08.11.2020.
//

#ifndef OOP_LAB2_1_VAZ_H
#define OOP_LAB2_1_VAZ_H

#include <iostream>
#include "Car.h"

class VAZ : public Car {
public:
    explicit VAZ(std::string model)
    : Car(model) {

    }

    ~VAZ() {
        std::cout << getStringStream().rdbuf() << std::endl;
    }
};


#endif //OOP_LAB2_1_VAZ_H
