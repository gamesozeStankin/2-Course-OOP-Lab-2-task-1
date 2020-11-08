#include <iostream>
#include <vector>
#include "Mercedes.h"
#include <fstream>
#include <VAZ.h>

int main() {
    std::vector<Car *> cars;
    std::ifstream fileIn(R"(..\resources\text\car.txt)");

    if (fileIn.is_open()) {
        std::string lineOfFile;
        while (std::getline(fileIn, lineOfFile)) {
            std::string brand = lineOfFile.substr(0, lineOfFile.find(" "));
            if (brand == "Mercedes") {
                cars.push_back(new Mercedes(lineOfFile.substr(lineOfFile.find(" ") + 1)));
            } else if (brand == "VAZ") {
                cars.push_back(new VAZ(lineOfFile.substr(lineOfFile.find(" ") + 1)));
            }
        }
    } else {
        std::cerr << "MAIN::FILE NOT OPEN";
    }

    for (auto car : cars) {
        delete car;
    }

    return 0;
}
