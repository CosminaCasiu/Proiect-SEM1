#include "Mentorat.h"

Student::Student(string name, int id) : name(name), id(id) {}

string Student::getName() const { return name; }
int Student::getId() const { return id; }


Mentor::Mentor(string name, int id, int maxStudents) : name(name), id(id), maxStudents(maxStudents) {}

string Mentor::getName() const { return name; }
int Mentor::getId() const { return id; }
int Mentor::getMaxStudents() const { return maxStudents; }
int Mentor::getCurrentStudentCount() const { return students.size(); }

bool Mentor::addStudent(const Student& student) 
{
    if (students.size() < maxStudents) {
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
    int mentorIndex = 0;
    for (const auto& student : students) 
    {
        while (mentorIndex < mentors.size() && !mentors[mentorIndex].addStudent(student)) 
        {
            mentorIndex++;
        }
        if (mentorIndex >= mentors.size()) 
        {
            cout << "Nu sunt suficienți mentori pentru toți studenții." << endl;
            break;
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
