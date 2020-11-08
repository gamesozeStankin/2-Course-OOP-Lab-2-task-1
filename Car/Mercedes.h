//
// Created by Kostantin Alaev on 08.11.2020.
//

#ifndef OOP_LAB2_1_Mercedes_H
#define OOP_LAB2_1_Mercedes_H

#include <iostream>
#include "Car.h"

class Mercedes : public Car {
public:
    explicit Mercedes(std::string model)
        : Car(model) {

    }

    ~Mercedes() {
        std::cout << getStringStream().rdbuf() << std::endl;
    }
};


#endif //OOP_LAB2_1_Mercedes_H
