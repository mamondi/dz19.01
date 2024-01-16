#include "mainclass.h"

class Car : public Transport {
public:
    Car(int capacity, double fuelConsumption) : Transport(capacity), fuelConsumption(fuelConsumption) {}

    void calculateTimeAndCost(int passengers, int cargo) const override {
       
        const double speed = 60.0;
        const double distance = 100.0; 
        double time = distance / speed;
        double fuelRequired = (fuelConsumption / 100) * distance; 

        double cost = fuelRequired * 2.5; 

        cout << "Car:" << endl;
        cout << "Time: " << time << " hours" << endl;
        cout << "Cost: $" << cost << endl;
    }

private:
    double fuelConsumption; 
};


class Bicycle : public Transport {
public:
    Bicycle(int capacity) : Transport(capacity) {}

    void calculateTimeAndCost(int passengers, int cargo) const override {
        
        const double speed = 20.0;
        const double distance = 100.0; 

        double time = distance / speed;

        cout << "Bicycle:" << endl;
        cout << "Time: " << time << " hours" << endl;
        cout << "Cost: Free (Bicycles do not require fuel)" << endl;
    }
};


class Cart : public Transport {
public:
    Cart(int capacity) : Transport(capacity) {}

    void calculateTimeAndCost(int passengers, int cargo) const override {
       
        const double speed = 10.0;
        const double distance = 100.0; 

        double time = distance / speed; 

        double cost = 5.0 * cargo; 

        cout << "Cart:" << endl;
        cout << "Time: " << time << " hours" << endl;
        cout << "Cost: $" << cost << endl;
    }
};