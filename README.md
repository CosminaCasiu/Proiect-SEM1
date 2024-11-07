Acest proiect simulează un sistem de mentorat online, în care studenții sunt alocați la mentori în funcție de capacitatea fiecărui mentor. Proiectul este scris în limbajul C++ și utilizează clase pentru a reprezenta studenții, mentorii și gestionarea procesului de alocare.
Proiectul gestionează alocarea automată a studenților către mentori, luând în considerare numărul maxim de studenți pe care un mentor îi poate accepta. Fiecare student și mentor are un identificator unic, iar mentorii au o limită de capacitate specificată. Programul alocă studenții mentorilor până când aceștia ajung la capacitatea maximă, după care anunță dacă mai sunt studenți nealocați.

Proiectul este organizat în trei fișiere:

- Mentorat.h: Fișierul header conține declarațiile claselor Student, Mentor, și Mentorat, precum și prototipurile funcțiilor acestora.
- Mentorat.cpp: Fișierul de implementare conține definițiile funcțiilor declarate în Mentorat.h.
- main.cpp: Punctul de pornire al aplicației, unde sunt create instanțele de studenți și mentori și unde se apelează funcțiile de alocare și afișare.

 Detalii tehnice :
- Clasa Student: Reprezintă un student cu atribute precum name și id.
- Clasa Mentor: Reprezintă un mentor cu atribute precum name, id, și maxStudents. Include funcții pentru a adăuga studenți și a afișa lista de studenți alocați.
- Clasa Mentorat: Conține metode pentru a adăuga studenți și mentori și pentru a realiza alocarea studenților la mentori, în funcție de capacitatea acestora.
