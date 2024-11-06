#include <iostream>
#include <vector>
#include <algorithm>
#include "CreditSort.h"
#include"Person.h"


int main() {

    //-----------------------------------------------------MENU-----------------------------------------------------

    int choice;
    std::cout << "Wybierz metode sortowania danych: " << std::endl;
    std::cout << "1. Kredyt rosnaco" << std::endl;
    std::cout << "2. Kredyt malejaco" << std::endl;
    std::cout << "3. Sortuj wedlug imion" << std::endl;
    std::cout << "4. Sortuj wedlug nazwisk" << std::endl;
    std::cin >> choice;
    //-----------------------------------------------------MENU-----------------------------------------------------


    //-----------------------------------------------------VECTORS-----------------------------------------------------
    std::vector<Person> persons;

    persons.push_back({ "Michal", "Strozyk", "28.10.2000", 210000 });
    persons.push_back({ "Milena", "Walendziak", "01.04.2010", 9110 });
    persons.push_back({ "Kamil", "Nowak", "21.12.2002", 42149 });

    std::cout << "Przed sortowaniem:" << std::endl;
    for (const auto& pers : persons) {
        std::cout << pers.name << " " << pers.secondName << " " << pers.birthDate << " " << pers.credit << std::endl;
    }
    std::cout << std::endl;

    //-----------------------------------------------------VECTORS-----------------------------------------------------

    //-----------------------------------------------------SWITCH-----------------------------------------------------
    CreditSort sorter;

    switch (choice)
     {
    case 1:
    {
        sorter.bubbleSortAsc(persons);
        break;
    }
    case 2:
    {
        sorter.bubbleSortDesc(persons);
        break;
    }
    case 3:
    {
        sorter.nameSort(persons);
    }
    case 4:
    {
        sorter.secondName(persons);
    }
     }
    //-----------------------------------------------------SWITCH-----------------------------------------------------
    system("cls");
    for (const auto& pers : persons) {
        std::cout << pers.secondName << " " << pers.name << " " << pers.birthDate << " " << pers.credit << std::endl;
    }

    return 0;
}
