//
// Created by Kostantin Alaev on 08.11.2020.
//

#ifndef OOP_LAB2_1_MERSEDES_H
#define OOP_LAB2_1_MERSEDES_H

#include <iostream>
#include "Car.h"

class Mersedes : public Car {
public:
    explicit Mersedes(std::string model)
        : Car(model) {

    }

    ~Mersedes() {
        std::cout << getStringStream().rdbuf() << std::endl;
    }
};


#endif //OOP_LAB2_1_MERSEDES_H
