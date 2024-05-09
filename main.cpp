#include <iostream>

#include <mp-units/ostream.h>

#include "constants.h"

namespace {
    constexpr auto sumOnboardCurr() {
        quantity  onboardEquipCurr{0, mA};
        for (auto i: kEquipCurrArr) {
            onboardEquipCurr += i;
        }
        return onboardEquipCurr;
    }
}

int main() {
    constexpr quantity<A>   onboardEquipCurr = sumOnboardCurr();
    constexpr quantity<A>   avgCurrDraw      = kMotorCurrent + onboardEquipCurr;
    constexpr quantity<min> time             = kBatteryCapacity * kBatteryDischarge / avgCurrDraw;
    std::cout << time << '\n';
}
