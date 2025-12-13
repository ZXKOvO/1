// Module registrar: defines Registrar class
// File: registrar.cppm
// Created: Wei Gong open-src@qq.com      2025-12-12
// Version: 1.0      License: AGPLv3

// Only provides class interfaces, no implementations.

export module registrar;
export import :student;
export import :course;

import std;
using std::string; using std::vector;

export class Registrar
{
public:
    void studentEnrollsInCourse(string sid, string cid);
    void courseRoster(string cid);
    void initialize();

private:
    class Student* findStudentById(const string& id);
    class Course* findCourseById(const string& id);

    vector<class Course*> _courses;
    vector<class Student*> _students;
};
