#!/usr/bin/env python3
from ev3dev2.motor import LargeMotor, OUTPUT_A, OUTPUT_B, SpeedPercent, MoveTank
from ev3dev2.sensor import INPUT_1
from ev3dev2.sensor.lego import TouchSensor
from ev3dev2.led import Leds

# TODO: Add code here
m = LargeMotor(OUTPUT_A)
m.on_for_rotations(SpeedPercent(75), 10)
m2 = LargeMotor(OUTPUT_D)
m2.on_for_rotations(SpeedPercent(75), 10)