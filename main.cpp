// A registrar system demo
// File: main.cpp
// Created: Wei Gong open-src@qq.com      2025-12-12
// Version: 1.0      License: AGPLv3

// Importing 'registrar' module: code compiles but won't link (missing class implementations).

import registrar;
import std;

int main()
{
    Registrar::singleton().initialize();
    Registrar::singleton().
            studentEnrollsInCourse("S001", "CS101");

    Student s = {"S001", "Thomas"};
    Course c = {"CS101", "C Programming"};
    s.enrollIn(&c);

    return 0;
}
