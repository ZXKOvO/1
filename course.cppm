// Partition 'course' of module 'registrar' - defines Course class
// File: course.cppm
// Created: Wei Gong open-src@qq.com      2025-12-12
// Version: 1.0      License: AGPLv3

// Only provides class interfaces, no implementations.

// Change Log:
//     [v1.1] Wei Gong open-src@qq.com   2025-12-12
//         * added static data member 'totalCount': counts all Course objects in the system.

export module registrar:course;
import std;

using std::string; using std::vector;

export class Course
{
public:
    Course(string id, string name);

    bool acceptEnrollment(class Student* student);
    string roster();
    bool hasId(string id);
private:
    string m_name;
    string m_id;
    short m_credit;
    static int cm_totalCount;  // static data member

    vector<class Student*> _students;
};
