#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
    Pet(const string& name, int age) : name(name), age(age) {}

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }

    virtual void sound() const = 0;//Я вже викупив за віртуальні функції

protected:
    string name;
    int age;
};

class Dog : public Pet {
public:
    Dog(const string& name, int age, const string& breed) : Pet(name, age), breed(breed) {}

    void sound() const override {
        cout << "Woof! Woof!" << endl;
    }

    void displayInfo(){
        Pet::displayInfo();
        cout << "Breed: " << breed << endl;
    }

private:
    string breed;
};

class Cat : public Pet {
public:
    Cat(const string& name, int age, const string& color) : Pet(name, age), color(color) {}

    void sound() const override {
        cout << "Meow! Meow!" << endl;
    }

    void displayInfo(){
        Pet::displayInfo();
        cout << "Color: " << color << endl;
    }

private:
    string color;
};


class Parrot : public Pet {
public:
    Parrot(const string& name, int age, const string& color) : Pet(name, age), color(color) {}

    void sound() const override {
        cout << "Squawk! Squawk!" << endl;
    }

    void displayInfo(){
        Pet::displayInfo();
        cout << "Color: " << color << endl;
    }

private:
    string color;
};