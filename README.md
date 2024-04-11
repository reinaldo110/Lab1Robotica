# Nombres:
- Fernando Arancibia
- Reinaldo Foitzick
- Felipe Zepeda
- Elías Bernales

# Pregunta 2
## a)
### SG-90
- Peso: 9g
- Dimensiones: 22,2x11,8x31mm aprox.
- Velocidad de operación: 0.1s/60°
- Rango de Temperatura: 0°C – 55°C
- Par Máximo: 1.8 Kgf*cm
- Banda Ancha Muerta: 10μs
- Voltaje de Operación: 4.8V (-5V)
- Costo: 1990 – 2990 CLP

### SR-04
- Peso: 10g aprox.
- Dimensiones: 45x20x15mm
- Velocidad de operación: 40Hz
- Voltaje de Operación: 5V (DC)
- Precisión: 0.3cm
- Ángulo de Medida: 30°
- Rango de Medición: 2cm – 400cm

### LDR
- Voltaje (máx. absoluto): 100V
- Corriente (máx. absoluto): 5mA
- Rango de temperatura operacional: -25°C – 75°C
- Resistencia de celdas: 20 KΩ – 100 KΩ
## b)
### Arduino UNO
- Microcontrolador: ATMega 16U2 (8-bit AVR basado en RISC)
- Memoria: 16KB ISP Flash, EEPROM 512B, SRAM 512B, Interfaz debug WIRE para depuración y programación en chip
- Puertos: 6 analógicos, 14 digitales
## c)
Produce que la salida de voltaje producida por el fotoreactor sea más proporcional a la cantidad de luz percibida
## d)
- Pull Down: Resistor entre la entrada del pin y tierra para que la entrada del pin esté en estado bajo cuando esté activo.
- Pull Up: Resistor entre entrada del pin y 5V y produce un estado alto cuando no está activo.

Se hacen para que no fluctue cuando no esté en uso y poder reconocer su estado.
# Pregunta 4
## a)
Se cambia la distancia que se quiere medir.
## b)
El rango varía entre 0 a 1023 en proporción al nivel de la señal de entrada.
## c)
Si el valor aumenta, el sensor se vuelve menos sensible a la luz y si disminuye, se vuelve más sensible. Utilizamos el valor 3KΩ para nuestra resistencia.
