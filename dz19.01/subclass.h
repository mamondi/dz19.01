#ifndef SUBCLASS_H
#define SUBCLASS_H
//За допомогою механізму успадкування, реалізуйте клас Aspirant (аспірант — студент, який готується до захисту кандидатської роботи) похідний від Student.
#include "mainclass.h"

class Aspirant : public Student
{
	private:
	string work;
	public:
		Aspirant(string name, string surname, string patronymic, int age, int course, int group, int progress, string work);
		Aspirant();
		~Aspirant();
		void setWork(string work);
		string getWork();
		void print();
};
#endif // SUBCLASS_H