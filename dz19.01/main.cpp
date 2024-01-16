#include "subclass.h"
int main() {
  
    Passport ukrainePassport("John Doe", "AA123456", "01/01/1990");

    
    cout << "Information about Ukraine Passport:" << endl;
    ukrainePassport.displayInfo();
    cout << endl;

    ForeignPassport foreignPassport("Jane Smith", "BB789012", "05/15/1985", "ZYX987654", { "USA", "Canada", "UK" });

    cout << "Information about Foreign Passport:" << endl;
    foreignPassport.displayInfo();

    return 0;
}