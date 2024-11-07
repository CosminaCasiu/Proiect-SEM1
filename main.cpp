#include "Mentorat.h"
using namespace std;
int main()
 {
    Mentorat mentorat; 

    // Adăugăm studenți
    mentorat.addStudent(Student("Cosminaaa Casiu", 1));
    mentorat.addStudent(Student("Serban Denisa", 2));
    mentorat.addStudent(Student("Maria Alexandra", 3));
    mentorat.addStudent(Student("Daniela Andreea", 4)); 

    // Adăugăm mentori
    mentorat.addMentor(Mentor("Mentor POO", 101, 2));
    mentorat.addMentor(Mentor("Mentor ASD", 102, 2)); 

    // Alocăm studenții 
    mentorat.allocateStudents(); 

    // Afișăm alocările
    mentorat.displayAllocations(); 

    return 0;
}
