#include <iostream>

#include "iceoryx/radar_object.hpp"

#include "iceoryx_posh/popo/publisher.hpp"
#include "iceoryx_posh/runtime/posh_runtime.hpp"

int main() {
    
    RadarObject radar_object { 1.0, 2.0, 3.0 };

    std::cout << "radar_object.x = " << radar_object.x << std::endl;
    std::cout << "radar_object.y = " << radar_object.y << std::endl;
    std::cout << "radar_object.z = " << radar_object.z << std::endl;

    return 0;
}
