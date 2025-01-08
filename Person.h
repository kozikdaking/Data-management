#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include<sstream>

class Person {
public:
    Person(std::string name, std::string secondName, std::string birthDate, double credit);
    
    std::string name;
    std::string secondName;
    std::string birthDate;
    std::string creditSort;
    float credit;
};
bool isValidName(const std::string& name);
bool isValidSecondName(const std::string& secondName);
bool isValidCredit(const float& credit);
bool isValidDate(const std::string& date);


#endif
