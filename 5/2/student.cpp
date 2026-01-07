#define _CRT_SECURE_NO_WARNINGS  

#include <iostream>
#include <cstring>
#include "student.h"

void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    strncpy(name, nm, sizeof(name) - 1); 
    name[sizeof(name) - 1] = '\0';
    sex = s;
}

void Student::display()
{
    std::cout << "num: " << num << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "sex: " << sex << std::endl;
}