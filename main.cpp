#include <iostream>
#include <vector>
#include <sstream> 
#include "CreditSort.h"
#include "Person.h"


int main() {
    int choice;
    
    std::vector<Person> persons;

    persons.push_back({ "Michal", "Wozniak", "15.03.1983", 24123.56 });
    persons.push_back({ "Kamil", "Nowak", "23.07.1995", 57234.98 });
    persons.push_back({ "Anna", "Kowalska", "06.11.1991", 13456.78 });
    persons.push_back({ "Tomasz", "Jankowski", "02.02.1998", 18673.45 });
    persons.push_back({ "Krzysztof", "Dabrowski", "25.05.1985", 31920.00 });
    persons.push_back({ "Jan", "Tomek", "14.10.1992", 22000.00 });
    persons.push_back({ "Patrycja", "Kaczmarek", "11.01.1987", 12450.10 });
    persons.push_back({ "Ola", "Nowak", "17.08.2000", 18930.60 });
    persons.push_back({ "Piotr", "Zielinski", "09.12.1999", 52000.25 });
    persons.push_back({ "Monika", "Kwiatkowska", "27.09.1993", 78420.30 });

    do {
        std::cout << "Wybierz metode sortowania danych: " << std::endl;
        std::cout << "1. Kredyt rosnaco" << std::endl;
        std::cout << "2. Kredyt malejaco" << std::endl;
        std::cout << "3. Sortuj wedlug imion" << std::endl;
        std::cout << "4. Sortuj wedlug nazwisk" << std::endl;
        std::cout << "5. Dodaj osobe" << std::endl;
        std::cout << "6. Wyszukaj" << std::endl;
        std::cout << "9. Wyjdz" << std::endl;
        std::cin >> choice;
        std::cin.ignore();

        CreditSort sorter;
        

        switch (choice) {
        case 1: {
            sorter.bubbleSortAsc(persons);
            break;
        }
        case 2: {
            sorter.bubbleSortDesc(persons);
            break;
        }
        case 3: {
            sorter.nameSort(persons);
            break;
        }
        case 4: {
            sorter.secondName(persons);
            break;
        }
        case 5: {
            std::string name, secondName, birthDate;
            float credit;

            bool validName = false;
            while (!validName)
            {
                std::cout << "Podaj imie: ";
                std::getline(std::cin, name);

                if (isValidName(name))
                {
                    validName = true;
                }
                else
                {
                    std::cout << "Imie nie moze zawierac cyfr!" << std::endl;
                }
            }

            bool validSecondName = false;
            while (!validSecondName)
            {
                std::cout << "Podaj nazwisko: ";
                std::getline(std::cin, secondName);

                if (isValidSecondName(secondName))
                {
                    validSecondName = true;
                }
                else
                {
                    std::cout << "Nazwisko nie moze zawierac cyfr!"<<std::endl;
                }
            }

            std::cout << "Podaj date urodzenia: ";
            std::getline(std::cin, birthDate);

            std::cout << "Podaj kredyt: ";
            std::cin >> credit;
            std::cin.ignore();

            persons.push_back({ name, secondName, birthDate, credit });
                std::cout << std::endl;
            break;
        }
        case 6:
        {
         

        }
        case 9: {
            std::cout << "quit" << std::endl;
            break;
        }
        }

        system("cls");
        for (const auto& pers : persons) {
            std::cout << pers.secondName << " " << pers.name << " " << pers.birthDate << " " << pers.credit << std::endl;
        }

    } while (choice != 9);

    return 0;
}
