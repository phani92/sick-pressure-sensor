#Sick Pressure Sensor

**Introduction:

Pressure sensors - commonly referred to as pressure transducers, pressure transmitters, pressure indicators or pressure switches - are used to measure the pressure of gases and liquids (fluids).

Pressure is an expression of the force and is normally stated in terms of force per unit area. A pressure sensor will generate an electrical signal relating to the pressure imposed. This signal is either analogue or digital in more modern designs, although optical, visual and auditory signals are also common.

Pressure is measured against a reference, which greatly depends on the application and installation of the sensor. Depending on the relevant pressure, the term 'absolute' is used when the reference is vacuum; 'gauge' is used where the reference is atmospheric pressure; and 'differential' is used where the sensor has two ports for the measurement of two different pressures.

Pressure sensors are used in a wide variety of applications for control and monitoring purposes. Pressure sensors can also be used to indirectly measure other variables such as liquid or gas flow (in conjunction with an orifice plate), speed, fluid level and altitude.

Due to the wide range of technologies available, pressure sensors vary considerably in their design, performance, application and cost. Every technology has its own benefits and reasons for selection within an application.

When used directly to measure pressure, applications include meteorology instrumentation, aerospace and defence, research and development, automotive and other machinery or equipment that has pressure functionality implemented. Other applications for pressure sensors include hydraulic and pneumatic systems, water depth, offshore & marine, waste water & sewage, oil & gas exploration, nuclear, medical, food and beverage processing, tank level/contents, HVAC systems, agricultural equipment, environmental monitoring and chemical & processing plants.

![](images/MSR-Pressure_Sensor-WS_2017.004.png)

Some specific advantages can be gained from using pressure transducers that operate on the Linear Variable Differential Transformer (LVDT) principle. Here, a pressure responsive element is directly coupled to the core of a linear LVDT.

An LVDT is an electro-mechanical device that produces an electrical output that is linearly proportional to the displacement of a moveable core. It consists of a primary coil with two secondary coils placed on either side of the primary coil. A rod-shaped soft magnetic core inside the coil assembly provides a path for the magnetic flux linking the coils.

When the primary coil is energised by an alternating current, source voltages are induced in the two secondary coils. The secondary coils are connected in series with the start of each winding being connected. This arrangement produces a net zero signal output from the secondary’s when the induced voltages are equal in each coil. This condition occurs when the core is centrally disposed between the two secondaries’. A movement of the core leads to an increase in magnetic coupling to the coil in the direction of movement and a reduction in of magnetic coupling to the other coil producing a net output signal from the connected secondary’s. Movement in the opposite direction produces an identical signal output but of opposite phase. To form a pressure transducer, the core displacement of the LVDT is produced by the movement of a metallic pressure responsive diaphragm.

![](images/MSR-Pressure_Sensor-WS_2017.007.png)

Some LVDT pressure transducers are fitted with a single, precision metallic diaphragm with over range pressure protection stops as the pressure-responsive element. This arrangement allows the manufacture of differential, gauge and absolute transducers, which all employ a common design philosophy.

![](images/MSR-Pressure_Sensor-WS_2017.009.png)

The distinct advantage of using an LVDT transducer is that the moving core does not contact other electrical components of the assembly, as is the case with other types.
This means an LVDT transducer offers high reliability and long life.

![](images/MSR-Pressure_Sensor-WS_2017.011.png)

The LVDT design also lends itself very well to easy modification to fulfil a whole range of different applications in both research and process engineering. [1]

![](images/MSR-Pressure_Sensor-WS_2017.012.png)

Fig 6 Differential Transducer/2

**DPC (Differential Pressure Calibrator):**

The DPC measures and generates pressure and can therefore be used as a pressure measurement device or as a test and calibration device for pressure sensors and pressure switches. Programmable pressure profiles enable the automation of individual calibration processes. By selecting between four measurement ranges, the calibrator can be perfectly adapted to the device being tested. In addition to offering maximum convenience, the DPC also has an extremely low measurement uncertainty and great long-term stability.

![](images/MSR-Pressure_Sensor-WS_2017.016.png)

**Procedure:**

Calibration of Pressure Sensor:

![](images/MSR-Pressure_Sensor-WS_2017.018.png)

Fig 9: Inductance readings

We have used an inductance meter as shown above to take the readings of the inductance in the differential pressure sensor at different pressure readings.

Pressure across Green Terminal:

|Pressure (mbar) |Differential Pressure across Green |Differential Pressure across Red |
| - | :-: | :-: |
|0 |9.04056 |8.84133 |
|10 |8.92086 |9.00026 |
|20 |8.80975 |9.1812 |
|30 |8.708 |9.38762 |
|40 |8.618 |9.62364 |
|50 |8.535 |9.89489 |
|60 |8.4615 |10.2122 |
|70 |8.3942 |10.5854 |
|80 |8.33093 |11.0293 |
|90 |8.27598 |11.5645 |
|100 |8.2243 |12.2218 |

Pressure across Red Terminal:

|Pressure (mbar) |Differential Pressure across Green |Differential Pressure across Red |
| - | :-: | :-: |
|0 |9.04775 |8.84298 |
|10 |9.19558 |8.69858 |
|20 |9.35106 |8.57107 |
|30 |9.5267 |8.45 |
|40 |9.7262 |8.3547 |
|50 |9.95418 |8.2621 |
| - | - | - |
|60 |10.2168 |8.1785 |
|70 |10.5213 |8.1025 |
|80 |10.8779 |8.0335 |
|90 |11.3006 |7.9715 |
|100 |11.8064 |7.9425 |

Circuit Design:

The below circuit was designed using LTSPICE tool. Initially we have designed a voltage divider circuit with the inductors. These inductors represent the differential pressure sensor.

There is a differentiator, inverter and comparator used along with a RC filter to provide DC output in the end.

![](images/MSR-Pressure_Sensor-WS_2017.020.png)

- There are two combinations of the differential pressure sensor and as the diaphragm moves towards one of the metal bodies the inductance of that port increases and the other decreases.
- We have also observed the output of the system in these two cases by using a differential pressure and interconnecting the inductors to different environments.

Scenario 1:

Output graph when the pressure is applied in the lower chamber and the top inductance increases.

![](images/MSR-Pressure_Sensor-WS_2017.022.png)

Fig 11: Simulation Output for positive pressure

Scenario 2:

Output graph when the pressure is applied in the upper chamber and the below inductance increases.

![](images/MSR-Pressure_Sensor-WS_2017.023.png)

Fig 12: Simulation Output for Negative pressure

- From the above graphs, the output is an incremental DC signal in the first scenario and a decreasing DC signal in the second scenario.

Practical Circuit Design:

We have used LM324 and CD4007 IC that have inbuilt inverters and amplifiers as shown in the below diagram.

![](images/MSR-Pressure_Sensor-WS_2017.025.png)

Soldered Circuit Design:

![](images/MSR-Pressure_Sensor-WS_2017.026.png)

Fig 14: Soldered Circuit

Output Voltage Readings:

The final dc voltage readings that we have got at different pressure conditions is given below.

Pressure across Green Terminal:

|Pressure (mbar) |DC voltage (mV) |
| - | - |
|0 |-222 |
|10 |-173 |
|20 |-128 |
|30 |-83 |
|40 |-42 |
|50 |-23 |
|60 |30 |
|70 |81 |
|80 |128 |
|90 |185 |
|100 |252 |

Pressure across Red Terminal:

|Pressure (mbar) |DC voltage (mV) |
| - | - |
|0 |-222 |
|10 |-273 |
|20 |-325 |
|30 |-377 |
|40 |-431 |
|50 |-487 |
|60 |-547 |
|70 |-612 |
|80 |-684 |
|90 |-763 |
|100 |-852 |

The corresponding graph has been plotted and the results of linear growth and declination, can be seen as we apply varied pressure.

Negative pressure means that we applied pressure across the opposite terminal that to our reference terminal.

![](images/MSR-Pressure_Sensor-WS_2017.027.png)

**Final Case:

![](images/MSR-Pressure_Sensor-WS_2017.035.png)
