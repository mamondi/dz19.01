//Створити класс студент
#ifndef MAINCLASS_H
#define MAINCLASS_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
	private:
	string name;
	string surname;
	string patronymic;
	int age;
	int course;
	int group;
	int progress;
	public:
		Student(string name, string surname, string patronymic, int age, int course, int group, int progress);
		Student();
		~Student();
		void setName(string name);
		void setSurname(string surname);
		void setAge(int age);
		void setCourse(int course);
		void setGroup(int group);
		void setProgress(int progress);
		string getName();
		string getSurname();
		int getAge();
		int getCourse();
		int getGroup();
		int getProgress();
		void print();
};

#endif // MAINCLASS_H


