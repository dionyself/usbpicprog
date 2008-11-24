EESchema Schematic File Version 2
LIBS:power,device,transistors,conn,linear,regul,74xx,cmos4000,adc-dac,memory,xilinx,special,microcontrollers,dsp,microchip,analog_switches,motorola,texas,intel,audio,interface,digital-audio,philips,display,cypress,siliconi,contrib,valves,.\zif_socket.cache
EELAYER 23  0
EELAYER END
$Descr A4 11700 8267
Sheet 1 1
Title "noname.sch"
Date "17 oct 2008"
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
Text Label 4900 4500 0    60   ~
PGDdsPIC18
Wire Wire Line
	4600 4500 4900 4500
Wire Wire Line
	7650 4450 8100 4450
Wire Wire Line
	7650 4250 8100 4250
Wire Wire Line
	7650 4050 8100 4050
Wire Wire Line
	4600 4800 4900 4800
Wire Wire Line
	4600 4600 4900 4600
Wire Wire Line
	4600 4300 4900 4300
Wire Wire Line
	4600 4100 4900 4100
Wire Wire Line
	4600 3900 4900 3900
Wire Wire Line
	3900 4600 3600 4600
Wire Wire Line
	3900 4100 3600 4100
Wire Wire Line
	3900 3800 3600 3800
Wire Wire Line
	3900 3900 3600 3900
Wire Wire Line
	3900 4200 3600 4200
Wire Wire Line
	3900 4500 3600 4500
Wire Wire Line
	4600 3800 4900 3800
Wire Wire Line
	4600 4000 4900 4000
Wire Wire Line
	4600 4200 4900 4200
Wire Wire Line
	4600 4400 4900 4400
Wire Wire Line
	4600 4700 4900 4700
Wire Wire Line
	4600 4900 4900 4900
Wire Wire Line
	7650 4150 8100 4150
Wire Wire Line
	7650 4350 8100 4350
Wire Wire Line
	7650 3800 8100 3800
Wire Wire Line
	7650 3600 8100 3600
Wire Wire Line
	7650 3400 8100 3400
Wire Wire Line
	7650 3500 8100 3500
Wire Wire Line
	7650 3700 8100 3700
Wire Wire Line
	7650 3150 8100 3150
Wire Wire Line
	7650 2950 8100 2950
Wire Wire Line
	7650 2750 8100 2750
Wire Wire Line
	7650 2850 8100 2850
Wire Wire Line
	7650 3050 8100 3050
Wire Wire Line
	7650 2500 8100 2500
Wire Wire Line
	7650 2300 8100 2300
Wire Wire Line
	7650 2100 8100 2100
Wire Wire Line
	7650 2200 8100 2200
Wire Wire Line
	7650 2400 8100 2400
Wire Wire Line
	7650 5750 8100 5750
Wire Wire Line
	7650 5550 8100 5550
Wire Wire Line
	7650 5350 8100 5350
Wire Wire Line
	7650 5450 8100 5450
Wire Wire Line
	7650 5650 8100 5650
Wire Wire Line
	7650 5100 8100 5100
Wire Wire Line
	7650 4900 8100 4900
Wire Wire Line
	7650 4700 8100 4700
Wire Wire Line
	7650 4800 8100 4800
Wire Wire Line
	7650 5000 8100 5000
Wire Wire Line
	7650 1850 8100 1850
Wire Wire Line
	7650 1650 8100 1650
Wire Wire Line
	7650 1450 8100 1450
Wire Wire Line
	7650 1550 8100 1550
Wire Wire Line
	7650 1750 8100 1750
Text Label 8100 2850 0    60   ~
VDD18
Text Label 8100 2950 0    60   ~
PGDdsPIC18
Text Label 8100 3050 0    60   ~
PGC18
Text Label 8100 1450 0    60   ~
MCLR40
Text Label 8100 1550 0    60   ~
VDD40
Text Label 8100 1650 0    60   ~
PGDdsPIC40
Text Label 8100 1750 0    60   ~
PGCdsPIC40
Text Label 8100 1850 0    60   ~
GND40
Text Label 8100 2100 0    60   ~
MCLR40
Text Label 8100 2200 0    60   ~
VDD40
Text Label 8100 2300 0    60   ~
PGDdsPIC28
Text Label 8100 2400 0    60   ~
PGCdsPIC28
Text Label 8100 2500 0    60   ~
GND40
Text Label 8100 2750 0    60   ~
MCLR40
Text Label 8100 3150 0    60   ~
PGD18
Text Label 8100 3400 0    60   ~
MCLR40
Text Label 8100 3500 0    60   ~
VDD40
Text Label 8100 3600 0    60   ~
PGD40
Text Label 8100 3700 0    60   ~
PGD12F
Text Label 8100 3800 0    60   ~
GND40
Text Label 8100 4050 0    60   ~
MCLR12F
Text Label 8100 4150 0    60   ~
VDD18
Text Label 8100 4250 0    60   ~
PGD18
Text Label 8100 4350 0    60   ~
PGC18
Text Label 8100 4450 0    60   ~
GND18
Text Label 8100 4700 0    60   ~
MCLR12F
Text Label 8100 4800 0    60   ~
MCLR40
Text Label 8100 4900 0    60   ~
PGD12F
Text Label 8100 5000 0    60   ~
PGC12F
Text Label 8100 5100 0    60   ~
PGD40
Text Label 8100 5350 0    60   ~
PGD40
Text Label 8100 5450 0    60   ~
PGD12F
Text Label 8100 5550 0    60   ~
PGD10F
Text Label 8100 5650 0    60   ~
MCLR12F
Text Label 8100 5750 0    60   ~
GND10F
$Comp
L CONN_5 P2
U 1 1 48F89F9B
P 7250 1650
F 0 "P2" V 7200 1650 50  0000 C C
F 1 "dsPIC40P" V 7300 1650 50  0000 C C
	1    7250 1650
	-1   0    0    1   
$EndComp
$Comp
L CONN_5 P7
U 1 1 48F89F49
P 7250 4900
F 0 "P7" V 7200 4900 50  0000 C C
F 1 "PIC12F_8-14P" V 7300 4900 50  0000 C C
	1    7250 4900
	-1   0    0    1   
$EndComp
$Comp
L CONN_5 P8
U 1 1 48F89F48
P 7250 5550
F 0 "P8" V 7200 5550 50  0000 C C
F 1 "PIC10F_8P" V 7300 5550 50  0000 C C
	1    7250 5550
	-1   0    0    1   
$EndComp
$Comp
L CONN_5 P3
U 1 1 48F89F42
P 7250 2300
F 0 "P3" V 7200 2300 50  0000 C C
F 1 "dsPIC28P" V 7300 2300 50  0000 C C
	1    7250 2300
	-1   0    0    1   
$EndComp
$Comp
L CONN_5 P4
U 1 1 48F89F41
P 7250 2950
F 0 "P4" V 7200 2950 50  0000 C C
F 1 "dsPIC18P" V 7300 2950 50  0000 C C
	1    7250 2950
	-1   0    0    1   
$EndComp
$Comp
L CONN_5 P5
U 1 1 48F89F3B
P 7250 3600
F 0 "P5" V 7200 3600 50  0000 C C
F 1 "PIC28-40P" V 7300 3600 50  0000 C C
	1    7250 3600
	-1   0    0    1   
$EndComp
Text Label 4900 3800 0    60   ~
PGD40
Text Label 4900 3900 0    60   ~
PGD12F
Text Label 4900 4000 0    60   ~
PGC12F
Text Label 4900 4100 0    60   ~
PGD10F
Text Label 4900 4200 0    60   ~
VDD18
Text Label 4900 4300 0    60   ~
PGD18
Text Label 4900 4400 0    60   ~
PGC18
Text Label 4900 4600 0    60   ~
VDD40
Text Label 4900 4700 0    60   ~
GND40
Text Label 4900 4800 0    60   ~
PGCdsPIC28
Text Label 4900 4900 0    60   ~
PGDdsPIC28
Text Label 3600 4600 0    60   ~
PGDdsPIC40
Text Label 3600 4500 0    60   ~
PGCdsPIC40
Text Label 3600 4200 0    60   ~
GND18
Text Label 3600 4100 0    60   ~
MCLR12F
Text Label 3600 3900 0    60   ~
GND10F
Text Label 3600 3800 0    60   ~
MCLR40
$Comp
L DIL40 P1
U 1 1 48F84F4A
P 4250 4750
F 0 "P1" H 4250 5800 70  0000 C C
F 1 "DIL40" V 4250 4750 60  0000 C C
	1    4250 4750
	1    0    0    -1  
$EndComp
$Comp
L CONN_5 P6
U 1 1 475BDEC0
P 7250 4250
F 0 "P6" V 7200 4250 50  0000 C C
F 1 "PIC18P" V 7300 4250 50  0000 C C
	1    7250 4250
	-1   0    0    1   
$EndComp
$EndSCHEMATC