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
                std::cout << "Imie nie moze zawierac liczb!";
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
            std::cout << "Nazwisko nie moze zawierac liczb!";
            return false;
        }
        

    }
    return true;
}


