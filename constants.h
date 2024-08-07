#pragma once

#include <mp-units/systems/si.h>

using namespace mp_units;
using namespace mp_units::si::unit_symbols;

constexpr quantity kBatteryCapacity{6000, mA * h};
constexpr quantity kBatteryDischarge{80, percent};
constexpr quantity kMotorCurrent{107.3 / 14, A};

// mA constants
constexpr const std::array kEquipCurrArrM = {
        quantity{300, mA},      // FC
        quantity{40, mA},       // GNSS_COMPASS
        quantity{166, mA},      // CAMERA
        quantity{55, mA},       // VTX  800mW / 14.5 V
        quantity{222, mA},      // RECEIVER 1000 mW / 4.5V
        quantity{120 * 5, mA},  // 5 servos, approximate average value, haven't checked yet
        quantity{2 * 24, mA},   // 2 LQ8FP32
        quantity{2, mA}         // SX1278
};

// uA constants
constexpr const std::array kEquipCurrArrU = {
        quantity{3.2 * 2, uA}   // 2 baros
};
