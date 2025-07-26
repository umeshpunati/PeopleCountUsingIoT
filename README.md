
# 👥 IoT-Based People Counting System with Google Sheets Integration

## 📘 Overview

This project is an IoT-based real-time people counting system using IR sensors and an ESP8266 (NodeMCU). It counts the number of people entering and exiting a room and logs the data to **Google Sheets** using a **Google Apps Script webhook**. This system is ideal for monitoring occupancy in classrooms, labs, offices, and event spaces.

---

## 🔧 Components Used

| Component               | Quantity |
|------------------------|----------|
| ESP8266 NodeMCU        | 1        |
| IR Sensor Modules      | 2        |
| Wi-Fi Network          | 1        |
| Google Sheets Account  | 1        |
| Jumper Wires           | Several  |
| Breadboard (Optional)  | 1        |
| 5V Power Supply        | 1        |

---

## ⚙️ Working Principle

- **IR Sensors** detect the direction of movement (entry or exit).
- **ESP8266** processes the logic and updates the **people count**.
- The current count is sent via **HTTP POST** to a **Google Sheets Web App**.
- **Google Apps Script** logs the timestamp and count to the sheet.

---

## 🌐 Google Sheets Integration

### Step 1: Set Up Google Sheet
- Create a new Google Sheet with headers:  
  `Timestamp | Count`

### Step 2: Add Apps Script
- Go to **Extensions > Apps Script**

### Step 3: Deploy Web App
Click Deploy > Manage deployments > New deployment
Select "Web App"
Set access to: Anyone
Copy the Web App URL

---
### 📲 ESP8266 Firmware Behavior
### The ESP8266:

Reads IR sensor input

Maintains people count based on entry/exit sequence

Sends count to Google Sheets every time it changes

---
### 📈 Use Cases
Occupancy tracking in classrooms and labs

Monitoring small event spaces or shops

Real-time remote people counting dashboard

---
### ⚠️ Notes
The Apps Script Web App must remain deployed and accessible.

Internet access is required for the ESP8266 to communicate with Google Sheets.

Sensor alignment must be precise for reliable entry/exit direction detection.

---
### 👨‍💻 Developed By
Umesh Chandra Punati
B.Tech IoT with AIML – KL University

