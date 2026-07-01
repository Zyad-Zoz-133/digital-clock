# Digital Clock with Date & Leap Year Checker

A C++ console-based digital clock application that displays real-time updating time and date. It supports a 12-hour format (AM/PM), handles month-end transitions dynamically, and includes a built-in leap year calculation.

---

## **🛠️ Development Tools**

This project was built and managed using the following industry-standard tools:
* **VS Code:** The primary text editor used for writing, formatting, and debugging the C++ code.
* **Git:** Used for local version control to track changes and manage code history.
* **GitHub:** Used for hosting the repository online, managing backup history, and deploying the live site via GitHub Pages.

---


## Features

* **Flicker-Free Display:** Uses ANSI escape codes to reset the cursor position instead of clearing the screen, ensuring a smooth visual experience.
* **Smart Calendar:** Dynamically tracks days, months, and years using a monthly day-count array.
* **Leap Year Checker:** Automatically detects leap years and adjusts February to 29 days when applicable.
* **Minimalist UI:** Clean and straight-to-the-point console output matching the exact original layout.

---

## Getting Started

### Prerequisites
* **Windows OS** (Required for the `<windows.h>` library's `Sleep` function).
* A C++ compiler (such as GCC/MinGW or Visual Studio).

### Compilation and Execution
1. Save the code in a file named `main.cpp`.
2. Open your terminal or command prompt and compile the code:
   ```bash
   g++ main.cpp -o clock
**Technical Details**
<br/>
Input Phase: The program prompts for the initial time (hours, minutes, seconds, AM/PM) and date (day, month, year).

Cursor Positioning (\033[H): Instead of executing system("cls") repeatedly, the program utilizes the \033[H escape sequence to move the cursor back to the top-left corner, overwriting the previous frame efficiently.

Time & Date Logic: Increments time step-by-step. When reaching 12:00:00 AM, the calendar day advances. Month lengths are validated through an array pre-checked against leap year conditions.

**License**
<br/>
This project is open-source and available under the MIT License.
