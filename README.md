# Second Stage – Second Semester Midterm Exam C++ Solutions

C++ solutions for **Second Stage – Second Semester Midterm Exam** questions.

This repository contains solved C++ Object-Oriented Programming examples focused on university exam-style questions. The solutions demonstrate important OOP concepts such as classes, constructors, destructors, object relationships, references, and composition.

---

## Project Overview

This project was created to help students understand and review C++ OOP exam questions through practical solved examples.

The code examples are written in a simple and educational style, making them suitable for students who are learning Object-Oriented Programming in C++.

---

## Covered Concepts

The solutions in this repository cover:

* Classes and objects
* Constructors
* Destructors
* Encapsulation
* Member functions
* Object composition
* Reference members
* Object lifetime
* Calling methods between related objects
* Basic performance calculation using object data
* University exam-style C++ practice

---

## Included Examples

### 1. Computer Composition Example

This example models a computer system using three classes:

* `Cpu`
* `Ram`
* `Computer`

The `Computer` class contains references to `Cpu` and `Ram` objects, showing how objects can be connected together using composition-style relationships.

Main ideas shown:

* Creating objects
* Constructor execution order
* Destructor execution order
* Passing objects by reference
* Displaying object information
* Calculating a simple performance score

---

### 2. Smartphone Composition Example

This example models a smartphone system using:

* `Screen`
* `Battery`
* `Camera`
* `Smartphone`

The `Smartphone` class uses `Screen` and `Battery` objects to demonstrate object relationships and method calls between classes.

Main ideas shown:

* Multiple related classes
* Constructors and destructors
* Reference members
* Displaying screen information
* Accessing battery data
* Basic smartphone behavior simulation

---

## Code Example – Computer

```cpp
#include <iostream>
using namespace std;

class Cpu {
    string brand;
    int cores;
    double speed;

public:
    Cpu(string b, int c, double s) : brand(b), cores(c), speed(s) {
        cout << "Cpu created " << brand << endl;
    }

    double getSpeed() {
        return speed;
    }

    void displayInfo() {
        cout << "Cpu brand: " << brand
             << " Cpu cores: " << cores
             << " Cpu speed: " << speed << endl;
    }

    ~Cpu() {
        cout << "Cpu destroyed: " << brand << endl;
    }
};

class Ram {
    int size;
    string type;

public:
    Ram(int s, string t) : size(s), type(t) {
        cout << "Ram created " << size << endl;
    }

    void displayInfo() {
        cout << "Ram size: " << size
             << " Ram type: " << type << endl;
    }

    int getSize() {
        return size;
    }

    ~Ram() {
        cout << "RAM destroyed: " << size << " GB " << type << endl;
    }
};

class Computer {
    string brand;
    Cpu& cpu;
    Ram& ram;

public:
    Computer(string b, Cpu& c, Ram& r) : brand(b), cpu(c), ram(r) {
        cout << "Computer assembled: " << brand << endl;
    }

    void displayInfo() {
        cout << "Computer brand: " << brand << endl;
        cpu.displayInfo();
        ram.displayInfo();
    }

    void performanceScore() {
        cout << "Computer Score: "
             << cpu.getSpeed() * ram.getSize() * 10 << endl;
    }

    ~Computer() {
        cout << "Computer disassembled: " << brand << endl;
    }
};

int main() {
    cout << "--- Creating Computer ---" << endl;

    Cpu cpu("Intel i9", 8, 3.6);
    Ram ram(32, "DDR5");
    Computer pc("Dell XPS", cpu, ram);

    pc.displayInfo();
    pc.performanceScore();

    cout << "\n--- Exiting main ---" << endl;

    return 0;
}
```

---

## Code Example – Smartphone

```cpp
#include <iostream>
using namespace std;

class Screen {
    string resolution;
    int refreshRate;

public:
    Screen(string rn, int re) : resolution(rn), refreshRate(re) {
        cout << "Screen created" << endl;
    }

    ~Screen() {
        cout << "Screen destroyed" << endl;
    }

    void displayInfo() {
        cout << "Resolution: " << resolution
             << "\tRefresh Rate: " << refreshRate << endl;
    }
};

class Battery {
    int capacity;

public:
    Battery(int c) : capacity(c) {
        cout << "Battery created" << endl;
    }

    ~Battery() {
        cout << "Battery destroyed" << endl;
    }

    void charge() {
        cout << "Battery is charging..." << endl;
    }

    int getCapacity() {
        return capacity;
    }
};

class Camera {
    int megapixels;
    string type;

public:
    Camera(int m, string t) : megapixels(m), type(t) {
        cout << "Camera created" << endl;
    }

    Camera() : megapixels(0), type("") {}

    ~Camera() {
        cout << "Camera destroyed" << endl;
    }

    void takePhoto() {
        cout << "Click! Photo taken with [" << type << "] camera" << endl;
    }
};

class Smartphone {
    string brand;
    string model;
    Screen& screen;
    Battery& battery;

public:
    Smartphone(string b, string m, Screen& s, Battery& by)
        : brand(b), model(m), screen(s), battery(by) {
        cout << "Smartphone " << brand << " assembled" << endl;
    }

    ~Smartphone() {
        cout << "Smartphone " << brand << " destroyed" << endl;
    }

    void turnOn() {
        cout << "Hi " << model << endl;
        screen.displayInfo();
        cout << "Battery Capacity: " << battery.getCapacity() << " mAh" << endl;
    }
};

int main() {
    Screen s1("4K", 120);
    Battery b1(5000);
    Smartphone p1("iPhone", "iPhone 17", s1, b1);

    p1.turnOn();

    return 0;
}
```

---

## Notes About the Solutions

These examples are written for learning purposes.

Some small improvements were applied to make the code cleaner, such as:

* Using `double` for CPU speed instead of returning it as `int`
* Improving function names such as `getSpeed()` and `performanceScore()`
* Printing battery capacity inside `turnOn()`
* Initializing default camera values clearly
* Improving output formatting

---

## How to Run

### Using g++

```bash
g++ main.cpp -o main
./main
```

### Using an IDE

You can run the code using any C++ IDE such as:

* Visual Studio Code
* Code::Blocks
* CLion
* Dev-C++
* Xcode on macOS

---

## YouTube Explanation

A video explanation is available on my YouTube channel.

Add the video link here:

```txt
https://youtube.com/your-video-link
```

---

## Purpose

The purpose of this repository is to help second-stage Computer Science students review OOP concepts through solved midterm exam questions.

It can be used for:

* Exam preparation
* OOP revision
* Understanding constructors and destructors
* Practicing class relationships in C++
* Learning object composition examples

---

## Author

**Bilal Zamil Ahmed**
Computer Science Student
University of Anbar

GitHub: [@bilalcodes1](https://github.com/bilalcodes1)

---

## License

Educational project — All rights reserved © 2026 Bilal Zamil Ahmed.
