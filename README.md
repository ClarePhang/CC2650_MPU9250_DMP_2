# CC2650_MPU9250_DMP_2

Hi. I've adapted the eMPL library for the MPU9250 from invensense. To be used with the CC2650 in the sensor Tag.
The TI thread  is: https://e2e.ti.com/support/wireless_connectivity/bluetooth_low_energy/f/538/t/519008

The only thing the CC2650 does is process the MPU information, there's no BLE stack, nor other sensors. I mean, I've ported the eMPL lib from ARM4 to the ARM3 CC2650.

Everything compiles without error and loads the same way. It responds to MPU interrupts and uart rx to change the DMP modes.

I haven't removed the code defines for other sensors like the MPU9150 nor other uC like the MSP430.

At this moment the code requieres 110K of Flash = 84% and 12.7k of Sram = 62%.

I understand that invensense has created all functions that the user could need, we can remove all of those that we don't need. For example I'll work only with quaternions, so I can put aside the Tap orientation, pedometer...

You can find my code here in github. I'll appreciate any contribution or fix that you can 
write here or push to my repository.

https://github.com/EinSoldiatGott/CC2650_MPU9250_DMP_2
https://github.com/EinSoldiatGott/eMPL-python-CC2650

Recomendations:
To be honest, until now I haven't liked the dmp performance.

Also I don't like the lack of information and support from invensense, they don't explain what and why are we writting to the registers, I wrote them here without answer. Here  and by email.

I hope you can find my lib useful and maybe bring some contribution.

https://www.youtube.com/watch?v=xbpfuHIj8J4
https://www.youtube.com/watch?v=zdHmyTGSAjI

My best regards
