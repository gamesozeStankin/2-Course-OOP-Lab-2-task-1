//
// Created by gamesoze on 08.11.2020.
//

#include <string>
#include <utility>
#include "Car.h"

void Car::setModel(std::string model) {
    m_model = std::move(model);
}

std::stringstream Car::getStringStream() const {
    std::stringstream ss;
    std::string brand = typeid(*this).name();
    ss << "Brand: " << brand.substr(brand.find(" ") + 1) <<
        "\tmodel: " << m_model;
    return ss;
}


