#include "Mentorat.h"
using namespace std;
int main()
 {
    Mentorat mentorat; 
  
    mentorat.addStudent(Student("Cosminaaa Casiu", 1));
    mentorat.addStudent(Student("Serban Denisa", 2));
    mentorat.addStudent(Student("Maria Alexandra", 3));
    mentorat.addStudent(Student("Daniela Andreea", 4)); 

    mentorat.addMentor(Mentor("Mentor POO", 101, 2));
    mentorat.addMentor(Mentor("Mentor ASD", 102, 2)); 

    mentorat.allocateStudents(); 

    mentorat.displayAllocations(); 

    return 0;
}
