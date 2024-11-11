#include <iostream>
#include <vector>
#include <sstream> 
#include "CreditSort.h"
#include "Person.h"
#include"logic.h"


int main() {
 
    std::vector<Person> persons;
    Logic logic;
    
    persons.push_back({ "Michal", "Wozniak", "15.03.1983", 24123.56 });
    persons.push_back({ "Michal", "Okon", "22.05.1999", 22213.56 });
    persons.push_back({ "Kamil", "Nowak", "23.07.1995", 57234.98 });
    persons.push_back({ "Anna", "Kowalska", "06.11.1991", 13456.78 });
    persons.push_back({ "Tomasz", "Jankowski", "02.02.1998", 18673.45 });
    persons.push_back({ "Krzysztof", "Dabrowski", "25.05.1985", 31920.00 });
    persons.push_back({ "Jan", "Tomek", "14.10.1992", 22000.00 });
    persons.push_back({ "Patrycja", "Kaczmarek", "11.01.1987", 12450.10 });
    persons.push_back({ "Ola", "Nowak", "17.08.2000", 18930.60 });
    persons.push_back({ "Piotr", "Zielinski", "09.12.1999", 52000.25 });
    persons.push_back({ "Monika", "Kwiatkowska", "27.09.1993", 78420.30 });

    logic.choice(persons);

    return 0;
}
