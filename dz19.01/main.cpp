#include "subclass.h"

int main() {
    Dog myDog("Buddy", 3, "Golden Retriever");
    Cat myCat("Whiskers", 2, "Gray");
    Parrot myParrot("Polly", 5, "Green");

    cout << "Information about my dog:" << endl;
    myDog.displayInfo();
    cout << "Sound: ";
    myDog.sound();
    cout << endl;

    cout << "Information about my cat:" << endl;
    myCat.displayInfo();
    cout << "Sound: ";
    myCat.sound();
    cout << endl;

    cout << "Information about my parrot:" << endl;
    myParrot.displayInfo();
    cout << "Sound: ";
    myParrot.sound();
    cout << endl;

    return 0;
}