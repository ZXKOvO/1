// Module registrar, course partition: defines Student class
// File: student.cppm
// Created: Wei Gong open-src@qq.com      2025-12-12
// Version: 1.0      License: AGPLv3

// Only provides class interfaces, no implementations.

export module registrar:student;
import std;

using std::string; using std::vector;

export class Student
{
public:
    Student(string id, string name);

    void enrollsIn(class Course* course);
    string info();
    bool hasId(string id);

private:
    string m_name;
    string m_id;

    vector<class Course*> _courses;
};
