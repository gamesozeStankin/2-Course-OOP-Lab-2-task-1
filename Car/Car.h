//
// Created by gamesoze on 08.11.2020.
//

#ifndef OOP_LAB2_1_CAR_H
#define OOP_LAB2_1_CAR_H

#include <sstream>

class Car {
public:
    // constr Car
    Car() = default;

    // constr Car
    explicit Car(std::string model)
        : m_model(std::move(model)) {

    }
    // destr
    virtual ~Car() = default;

public:
    // print about model and brand
    virtual std::stringstream getStringStream() const;

    // set m_model
    virtual void setModel(std::string model);
protected:
    std::string m_model = "";
};


#endif //OOP_LAB2_1_CAR_H
