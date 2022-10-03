//
// Created by alexeylebed on 9/28/22.
//

#ifndef G1TANK_TIMESTAMP_HPP
#define G1TANK_TIMESTAMP_HPP
#include "iostream"
#include <chrono>

int ms_timestamp(){
    const auto p1 = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::milliseconds>(p1.time_since_epoch()).count();
}

#endif //G1TANK_TIMESTAMP_HPP
