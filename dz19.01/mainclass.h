#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Passport {
public:
    Passport(const string& fullName, const string& passportNumber, const string& dateOfBirth)
        : fullName(fullName), passportNumber(passportNumber), dateOfBirth(dateOfBirth) {}

    void displayInfo() const {
        cout << "Full Name: " << fullName << endl;
        cout << "Passport Number: " << passportNumber << endl;
        cout << "Date of Birth: " << dateOfBirth << endl;
    }

private:
    string fullName;
    string passportNumber;
    string dateOfBirth;
};
