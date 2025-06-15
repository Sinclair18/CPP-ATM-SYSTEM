💳 C++ ATM Simulation System

This is a simple, console-based ATM system built in C++ using Object-Oriented Programming (OOP). It allows a user to securely interact with an account: check their balance, deposit money, withdraw funds, and manage their login and withdrawal PINs — all with validation and retry logic.

---

🎯 Features

- 🔐 **PIN-protected login** (with 3 attempt limit)
- 💸 **Deposit and Withdraw money** with input validation
- 🧾 **Check account balance** in Naira format
- 🔁 **Change login PIN and withdrawal PIN**
- 🛡️ Secure retry limits to prevent brute-force entry
- 📟 Clean console-based menu interface

---

🧱 Project Structure

 
```CPP-ATM-SYSTEM/
├── src/
│ ├── main.cpp → Entry point of the program
│ ├── Account.h/.cpp → Handles all account logic
│ ├── Atm.h/.cpp → Manages login and menu interaction
├── README.md → Project overview and instructions```


🛠️ How to Compile & Run:
    On Windows (using g++ as compiler):
   bash
        g++ src\main.cpp src\Account.cpp src\Atm.cpp -o atm.exe
        atm.exe

    On Linux / macOS:
        g++ src/main.cpp src/Account.cpp src/Atm.cpp -o atm
        ./atm

    Contains no external dependencies — just C++ standard libraries.



   🚀 Potential Improvements:
- Add file I/O to save account data between sessions

- Support for multiple user accounts

- Add unit tests

- Build a GUI using C++ frameworks like Qt or SFML

- Add admin mode for managing users


👨‍💻 Author
Amaechina Sinclair

Passionate about building low-level, efficient systems in C++.
Focused on mastering system-level concepts like memory management, object-oriented design, and modular C++ projects.