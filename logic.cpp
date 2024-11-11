#include "logic.h"

void Logic::choice(std::vector<Person>&persons)
{
    
        do {
            std::cout << "Wybierz metode sortowania danych: " << std::endl;
            std::cout << "1. Kredyt rosnaco" << std::endl;
            std::cout << "2. Kredyt malejaco" << std::endl;
            std::cout << "3. Sortuj wedlug imion" << std::endl;
            std::cout << "4. Sortuj wedlug nazwisk" << std::endl;
            std::cout << "5. Dodaj osobe" << std::endl;
            std::cout << "6. Wyszukaj" << std::endl;
            std::cout << "9. Wyjdz" << std::endl;
            std::cin >> choose;
            std::cin.ignore();

            CreditSort sorter;


            switch (choose) {
            case 1: {
                sorter.bubbleSortAsc(persons);
                sorter.showData(persons);
                break;
            }
            case 2: {
                sorter.bubbleSortDesc(persons);
                sorter.showData(persons);
                break;
            }
            case 3: {
                sorter.nameSort(persons);
                sorter.showData(persons);
                break;
            }
            case 4: {
                sorter.secondName(persons);
                sorter.showData(persons);
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
                        std::cout << "Nazwisko nie moze zawierac cyfr!" << std::endl;
                    }
                }

                std::cout << "Podaj date urodzenia: ";
                std::getline(std::cin, birthDate);

                std::cout << "Podaj kredyt: ";
                std::cin >> credit;
                std::cin.ignore();

                persons.push_back({ name, secondName, birthDate, credit });
                std::cout << std::endl;
                system("cls");
                break;
            }
            
            case 6:
            {
                system("cls");
                std::cout << "Ktore dane chcesz wyszukac: " << std::endl;
                std::cout << "1.Imie" << std::endl;
                std::cout << "2.Nazwisko" << std::endl;
                std::cout << "3.Data urodzenia" << std::endl;
                std::cout << "4.Kredyt" << std::endl;     
                std::cin >> chooseSearch;
                std::cin.ignore();

                switch (chooseSearch)
                {
                case 1:
                {
                    std::string targetName;
                    std::cout << "Podaj imie: ";
                    std::getline(std::cin, targetName);
                   

                    sorter.nameSort(persons);

                    int index = sorter.binarySearchByName(persons, targetName);
                   
                    if (index != -1)
                    {
                        system("cls");
                        std::cout << "Znaleziono: "
                            << persons[index].name << " "
                            << persons[index].secondName << " "
                            << persons[index].birthDate << " "
                            << persons[index].credit << std::endl;
                    }
                    else
                    {
                        std::cout << "Nie znaleziono takiej osoby" << std::endl;
                    }
                    break;
                }
                case 2:
                {

                    break;
                }
                case 3:
                {

                    break;
                }
                case 4:
                {

                    break;
                }
               }
            }

            case 9: {
                std::cout << "quit" << std::endl;
                break;
            }
            }

        } while (choose != 9);
    }
