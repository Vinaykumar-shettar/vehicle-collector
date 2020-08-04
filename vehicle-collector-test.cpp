#include "vehicle_collector.h"
#include <gtest/gtest.h>

TEST(COLLECT, motor_temp_telematics_is_converted_into_one_inventory) {
    Telematics t = {10, MOTOR_TEMP, 30.5};
    Vehicle v = telemetrics_to_inventory(t);
    ASSERT_EQ(v.motor_temp, 30.5);
}

TEST(COLLECT, battery_soc__telematics_is_converted_into_one_inventory) {
    Telematics t = {10, BATTERY_SOC, 50.5};
    Vehicle v = telemetrics_to_inventory(t);
    ASSERT_EQ(v.battery_pc, 50.5);
}

TEST(COLLECT, battery_temp_telematics_is_converted_into_one_inventory) {
    Telematics t = {10, BATTERY_TEMP, 25.5};
    Vehicle v = telemetrics_to_inventory(t);
    ASSERT_EQ(v.battery_temp, 25.5);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
