#include <iostream>
#include "math.h"
#include "Utils/math.h"

int main() {

    for (int i = 0; i < 21; ++i)
    {
        std::cout << i << " " << Math::ipow(2, static_cast<uint8_t>(i)) << std::endl;
    }

    return 0;
}