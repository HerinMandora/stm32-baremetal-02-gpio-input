# STM32 Bare-Metal 02 – GPIO Input

> GPIO Input using Direct Register Programming on the STM32F446RE (No HAL)

## 📖 Overview

This project demonstrates how to configure and read a GPIO input on the STM32F446RE using direct register programming (Bare-Metal Embedded C).

The onboard USER push button (PC13) is configured as a digital input, while the onboard green LED (PA5) is configured as a digital output. The button state is continuously monitored through the Input Data Register (IDR), and the LED is controlled accordingly.

This project builds upon the previous LED Blink project by introducing GPIO input handling, polling, and bit masking techniques.

---

## 🎯 Objectives

- Configure GPIO pins using registers
- Understand GPIO Input Mode
- Read digital inputs using the IDR register
- Control outputs using the ODR register
- Learn polling-based input handling
- Practice bit masking for individual GPIO pins

---

## 🛠 Hardware Used

- STM32 Nucleo-F446RE
- Onboard USER Push Button (PC13)
- Onboard Green LED (PA5)

---

## 💻 Software Used

- STM32CubeIDE
- Embedded C
- STM32F446 Reference Manual
- Bare-Metal Programming

---

## 📚 Concepts Covered

- RCC Clock Configuration
- GPIO Clock Enable
- GPIO Input Mode
- GPIO Output Mode
- MODER Register
- Input Data Register (IDR)
- Output Data Register (ODR)
- Polling
- Bit Manipulation
- Bit Masking

---

## 📂 Project Structure

```
stm32-baremetal-02-gpio-input
│
├── Inc/
│   └── stm32f446xx.h
│
├── Src/
│   └── main.c
│
├── LICENSE
├── README.md
└── project-demo.mp4
```

---

## ⚙️ Working Principle

1. Enable the clocks for GPIOA and GPIOC.
2. Configure PA5 as an output pin.
3. Configure PC13 as an input pin.
4. Continuously monitor the button state using the IDR register.
5. Turn the LED ON when the button is pressed.
6. Turn the LED OFF when the button is released.

---

## 🧠 What I Learned

- Configuring GPIO pins without using HAL
- Reading GPIO inputs through the IDR register
- Difference between input and output modes
- Using polling for digital input detection
- Controlling GPIO outputs using ODR
- Applying bit masking for register operations

---

## 🚀 Output

- Press USER Button → LED ON
- Release USER Button → LED OFF

---

## 🔜 Next Project

**STM32 Bare-Metal 03 – GPIO Driver**

In the next project, direct register manipulation will be abstracted into reusable GPIO driver APIs such as:

```c
GPIO_Init();
GPIO_WritePin();
GPIO_ReadPin();
GPIO_TogglePin();
```

making future embedded applications cleaner and easier to maintain.

---

## 📄 License

This project is licensed under the MIT License.
