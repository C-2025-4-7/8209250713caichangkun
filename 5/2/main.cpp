#include <iostream>
#include "student.h"

int main()
{
    Student stud;               
    Student stud1;            
    stud.set_value(1001, "Zhang San", 'M');
    stud1.set_value(1002, "Li Si", 'F');
    std::cout << "Student 1 Information:" << std::endl;
    stud.display();            
    std::cout << "\nStudent 2 Information:" << std::endl;
    stud1.display();        

    Student stud2;
    stud2.set_value(1003, "Wang Wu", 'M');

    std::cout << "\nStudent 3 Information:" << std::endl;
    stud2.display();

    return 0;
}