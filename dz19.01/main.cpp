#include "subclass.h"

int main() {
    
    Car car(4, 10.0);
    Bicycle bicycle(1); 
    Cart cart(2);

    car.calculateTimeAndCost(2, 50);
    cout << endl;

    bicycle.calculateTimeAndCost(1, 10);
    cout << endl;

    cart.calculateTimeAndCost(2, 100);
    cout << endl;

    return 0;
}