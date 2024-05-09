#pragma once

#include <mp-units/systems/si.h>

using namespace mp_units;
using namespace mp_units::si::unit_symbols;

constexpr quantity kBatteryCapacity{6000, mA * h};
constexpr quantity kBatteryDischarge{80, percent};
constexpr quantity kMotorCurrent{32.9, A};

constexpr const std::array kEquipCurrArr = {
        quantity{300, mA},      // FC
        quantity{40, mA},       // GNSS_COMPASS
        quantity{166, mA},      // CAMERA
        quantity{55, mA},       // VTX  800mW / 14.5 V
        quantity{222, mA},      // RECEIVER 1000 mW / 4.5V
        quantity{120 * 5, mA}   // 5 servos, approximate average value, haven't checked yet
};
