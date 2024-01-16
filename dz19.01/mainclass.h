#include <iostream>
#include <string>


using namespace std;

class Student {
public:
    Student(const string& name, int age, int studentId) : name(name), age(age), studentId(studentId) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentId << endl;
    }

private:
    string name;
    int age;
    int studentId;
};
