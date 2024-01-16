#include "subclass.h"

int main() {
    Student student("John Doe", 20, 12345);

    
    cout << "Information about Student:" << endl;
    student.displayInfo();
    cout << endl;

    Aspirant aspirant("Jane Smith", 25, 54321, "Advanced Research in Computer Science");

    cout << "Information about Aspirant:" << endl;
    aspirant.displayInfo();
    aspirant.displayResearchTopic();

    return 0;
}