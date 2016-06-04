# CC2650_MPU9250_DMP_2

Hi. I've adapted the eMPL library for the MPU9250 from invensense. To be used with the CC2650 in the sensor Tag.
The TI thread  is: https://e2e.ti.com/support/wireless_connectivity/bluetooth_low_energy/f/538/t/519008

The only thing the CC2650 does is process the MPU information, there's no BLE stack, nor other sensors. I mean, I've ported the eMPL lib from ARM4 to the ARM3 CC2650.

Everything compiles without error and loads the same way. It responds to MPU interrupts and uart rx to change the DMP modes.

I haven't removed the code defines for other sensors like the MPU9150 nor other uC like the MSP430.

At this moment the code requieres 110K of Flash = 84% and 12.7k of Sram = 62%.

I understand that invensense has created all functions that the user could need, we can remove all of those that we don't need. For example I'll work only with quaternions, so I can put aside the Tap orientation, pedometer...

Problems:
Until now I'm running the code with the dev-pack 1.2 CC-DEVPACK-DEBUG, it print's the code log's to the CCS console, for sure this is making my code seems slower. The uart is the one created by the dev-pack.

I haven't tested directly with the battery, the reason is that my batt ran out and also, I'll have to wire a usb port to serial to the CC2650 uart pins. I reduced the uart speed to 9600, another speed bricks the execution, maybe the pack only supports this baud rate.

Somer uart calls, make the code to throw exceptions, for example calling the auto test.

The pedometer lags when measuring the steps.

The code almost always ends with this output

FSR = 0x0001
HFSR = 0x40000000
DFSR = 0x00000001
MMAR = 0xe000ed34
BFAR = 0xe000ed38
AFSR = 0x00000000

In a moment I'll upload a video, to show the angle offset.

You can find my code here in github. I'll appreciate any contribution or fix that you can 
write here or push to my repository.

https://github.com/EinSoldiatGott/CC2650_MPU9250_DMP_2

If you test directly with the battery please let me know how it works.

Once I upload the video I'll start a new repository fork that only throws the quaternions.

Recomendations:
To be honest, until now I haven't liked the dmp performance, it took me a lot of work to have it working and it gets stuck, has drifting, angle offset...

Also I don't like the lack of information and support from invensense, they don't explain what and why are we writting to the registers, I wrote them here without answer. Here  and by email.

At this moment I don't know if the angle offset is coming from the DMP (where I cannot do anything) or if it's a overflow in the MPL lib calculations, or wrong calculated offset...

I hope you can find my lib useful and maybe bring some contribution.

My best regards
