#include "Person.h"

Person::Person(std::string name, std::string secondName,
	std::string birthDate, double credit):name(name), secondName(secondName), birthDate(birthDate), credit(credit) {}

bool isValidName(const std::string& name)
{
    {
        for (char c : name)
        {
            if (!std::isalpha(c))
            {
                std::cout << "Imie nie moze zawierac liczb! ";
                return false;
            }
            
        }
        return true;
    }
}

bool isValidSecondName(const std::string& secondName)
{
    for (char c : secondName)
    {
        if (!std::isalpha(c))
        {
            std::cout << "Nazwisko nie moze zawierac liczb! ";
            return false;
        }   
    }
    return true;
}

bool isValidDate(const std::string& date)
{
    if(date.size()!=10) return false;
    if (date[2] != '.' || date[5] != '.') return false;

    for (size_t i = 0; i < date.size(); ++i)
    {
        if (i != 2 && i != 5 && !isdigit(date[i]))
        {
            return false;
        }
    }
    int day;
    int month;
    int year;
    char dot1, dot2;
    std::istringstream(date) >> day >> dot1 >> month >> dot2 >> year;
    if (day < 1 || day>31) return false;
    if (month < 1 || month>12) return false;
    if(year < 1900 || year>9999) return false;
    if (month == 2 && day > 28) return false;
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) return false;
    return true;
}


