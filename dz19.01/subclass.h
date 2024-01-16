#include "mainclass.h"

class Aspirant : public Student {
public:
    Aspirant(const string& name, int age, int studentId, const string& researchTopic)
        : Student(name, age, studentId), researchTopic(researchTopic) {}

    void displayResearchTopic() {
        cout << "Research Topic: " << researchTopic << endl;
    }

private:
    string researchTopic;
};