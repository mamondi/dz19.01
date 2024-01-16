#include "mainclass.h"

class ForeignPassport : public Passport {
public:
    ForeignPassport(const string& fullName, const string& passportNumber, const string& dateOfBirth,
        const string& foreignPassportNumber, const vector<string>& visas)
        : Passport(fullName, passportNumber, dateOfBirth),
        foreignPassportNumber(foreignPassportNumber),
        visas(visas) {}

    void displayInfo() const override {
       
        Passport::displayInfo();

        cout << "Foreign Passport Number: " << foreignPassportNumber << endl;
        cout << "Visas:" << endl;
        for (const string& visa : visas) {
            cout << "- " << visa << endl;
        }
    }

private:
    string foreignPassportNumber;
    vector<string> visas;
};
