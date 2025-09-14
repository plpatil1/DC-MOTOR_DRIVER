# 🚀 Four Quadrant DC Motor Driver using Microcontroller

This project implements a **Four Quadrant DC Motor Driver** using an 8051 Microcontroller, programmed in **C language**, and simulated in **Proteus**.  

It demonstrates **forward motoring, forward braking, reverse motoring, and reverse braking** of a DC motor.

---

## 📌 Features
- Control DC Motor in **all four quadrants**
- Implemented using **8051 Microcontroller + L293D Motor Driver IC**
- Simulated in **Proteus 8 Professional**
- C Program compiled using **Keil µVision**
- Demonstrates Embedded C programming and Hardware-Software Co-Simulation

---

## 🛠 Tools & Technologies
- **Keil µVision** → Compiling Embedded C Code  
- **Proteus 8 Professional** → Circuit Simulation  
- **L293D Motor Driver IC** → Interface between Microcontroller & DC Motor  
- **8051 Microcontroller (AT89C51)**  

---

## ⚡ Working Principle
1. **Start Switch** → Motor starts running  
2. **Forward Switch** → Motor rotates clockwise  
3. **Forward Brake** → Braking applied in forward direction  
4. **Reverse Switch** → Motor rotates anti-clockwise  
5. **Reverse Brake** → Braking applied in reverse direction  
6. **Stop Switch** → Motor stops  

---

## 📂 Project Structure
Four-Quadrant-DC-Motor-Driver/
                   │── README.md
                   │
                   ├── src/                  # source code
                   │   └── main.c
                   │
                   ├── docs/                 # documentation, reports, circuit diagrams
                   │   ├── Project_Report.pdf
                   │   ├── Circuit_Diagram.png
                   │   └── Flowchart.png
                   │
                   └── simulation/           # Proteus files
                   ├── MotorDriver.pdsprj
                   └── screenshots/
                   └── simulation_output.png






---

## ▶️ How to Run
1. Open `main.c` in **Keil µVision**, compile to generate HEX file.  
2. Load HEX file into the **8051 microcontroller** inside Proteus simulation.  
3. Run the simulation and test motor responses with switches.  

---

## 📷 Circuit & Simulation
![Proteus Circuit](../DC-MOTOR_DRIVER/simulation/ProteusSoftwareCicuitDigram.png)

---

 

---

👨‍💻 Developed by **Pawan Lekurwale & Team**
