#ifndef MENTORAT_H
#define MENTORAT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int id;
    string subject; 

public:
    Student(string name, int id, string subject);

    string getName() const;
    int getId() const;
    string getSubject() const;
};

class Mentor
{
private:
    string name;
    int id;
    int maxStudents;
    vector<Student> students;
    string subject; 

public:
    Mentor(string name, int id, int maxStudents, string subject);

    string getName() const;
    int getId() const;
    int getMaxStudents() const;
    int getCurrentStudentCount() const;
    string getSubject() const;

    bool addStudent(const Student& student);

    void displayStudents() const;
};

class Mentorat
{
private:
    vector<Student> students;
    vector<Mentor> mentors;

public:
    void addStudent(const Student& student);

    void addMentor(const Mentor& mentor);

    void allocateStudents();

    void displayAllocations() const;
};

#endif // MENTORAT_H