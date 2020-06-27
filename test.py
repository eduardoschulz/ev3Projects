#!/usr/bin/env python3
from ev3dev2.motor import LargeMotor, OUTPUT_A, OUTPUT_D, SpeedPercent, MoveTank


# TODO: Add code here
#m = LargeMotor(OUTPUT_A)  motores individuais
#m2 = LargeMotor(OUTPUT_D)
#m.on_for_rotations(SpeedPercent(75), 10)
#m2.on_for_rotations(SpeedPercent(75), 10)

tankMotors = MoveTank(OUTPUT_A, OUTPUT_D)

tankMotors.on_for_rotations(SpeedPercent(50), SpeedPercent(50),10) #motores A e D rodam a 50% de velocidade por 10 rotacoes

