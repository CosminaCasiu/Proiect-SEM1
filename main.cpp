#include "Mentorat.h"
using namespace std;
int main()
 {
    Mentorat mentorat; 

    mentorat.addStudent(Student("Cosminaaa Casiu", 1344, "POO"));
    mentorat.addStudent(Student("Serban Denisa", 6543, "ASD"));
    mentorat.addStudent(Student("Andrei Mihai", 12342, "ASD"));
    mentorat.addStudent(Student("Maria Alexandra", 3454, "POO"));
    mentorat.addStudent(Student("Daniela Andreea", 4565, "ASD")); 
    mentorat.addStudent(Student("Valentin Cristian", 7543, "POO"));

    mentorat.addMentor(Mentor("Mentor POO", 101, 2, "POO"));
    mentorat.addMentor(Mentor("Mentor ASD", 102, 7, "ASD")); 

    mentorat.allocateStudents(); 
    mentorat.displayAllocations(); 

    return 0;
}