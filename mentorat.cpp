#include "Mentorat.h"

Student::Student(string name, int id, string subject) : name(name), id(id), subject(subject) {}

string Student::getName() const { return name; }
int Student::getId() const { return id; }
string Student::getSubject() const { return subject; }

Mentor::Mentor(string name, int id, int maxStudents, string subject) 
    : name(name), id(id), maxStudents(maxStudents), subject(subject) {}

string Mentor::getName() const { return name; }
int Mentor::getId() const { return id; }
int Mentor::getMaxStudents() const { return maxStudents; }
int Mentor::getCurrentStudentCount() const { return students.size(); }
string Mentor::getSubject() const { return subject; }

bool Mentor::addStudent(const Student& student) 
{
    if (students.size() < maxStudents && student.getSubject() == subject) {
        students.push_back(student);
        return true;
    }
    return false;
}

void Mentor::displayStudents() const
{
    cout << "Mentor: " << name << " (ID: " << id << ")" << endl;
    cout << "Studenti alocati: " << endl;
    for (const auto& student : students) {
        cout << " - " << student.getName() << " (ID: " << student.getId() << ")" << endl;
    }
    cout << endl;
}

void Mentorat::addStudent(const Student& student) 
{
    students.push_back(student);
}

void Mentorat::addMentor(const Mentor& mentor) 
{
    mentors.push_back(mentor);
}

void Mentorat::allocateStudents() 
{
    for (const auto& student : students) 
    {
        bool allocated = false;
        for (auto& mentor : mentors) 
        {
            if (mentor.addStudent(student)) 
            {
                allocated = true;
                break;
            }
        }
        if (!allocated) 
        {
            cout << "Studentul " << student.getName() << " (ID: " << student.getId() << ") nu a fost alocat niciunui mentor." << endl;
        }
    }
}

void Mentorat::displayAllocations() const 
{
    for (const auto& mentor : mentors) 
    {
        mentor.displayStudents();
    }
}
