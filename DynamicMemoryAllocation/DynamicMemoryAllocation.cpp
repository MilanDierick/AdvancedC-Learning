//
// Created by milan on 4/2/2019.
//

#include <iostream>
#include <memory>
#include "person.h"

int main() {

    std::unique_ptr pOne = std::make_unique<Person>("Tom", "Thumb", 25);

    std::cout << "First name of pOne = " << pOne->getFirstName() << std::endl;
    std::cout << "Memory address of pOne = " << &pOne << std::endl;

    return 0;
}

