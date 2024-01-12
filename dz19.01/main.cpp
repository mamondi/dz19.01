#include "subclass.h"

int main()
{
	Student student1("Ivan", "Ivanov", "Ivanovich", 20, 2, 3, 4);
	student1.print();
	Aspirant aspirant1("Petro", "Petrov", "Petrovich", 21, 3, 4, 5, "work");
	aspirant1.print();
	return 0;
}