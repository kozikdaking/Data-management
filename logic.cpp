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

                }
                while (true)
                {
                    std::cout << "Podaj date urodzenia (DD.MM.RRRR): ";
                    std::cin >> birthDate;
                    if (isValidDate(birthDate)) break;
                    else
                    {
                        std::cout << "Niepoprawny format daty. Uzyj formatu DD.MM.RRRR" << std::endl;
                    }
                }
            
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
                    std::string secondName;
                    std::cout << "Podaj nazwisko: ";
                    std::getline(std::cin, secondName);

                    sorter.secondName(persons);

                    int index = sorter.binarySearchBySecondName(persons, secondName);
                    if(index != -1)
                    {
                        system("cls");
                        std::cout<<"Znaleziono: "
                            <<persons[index].name<< " "
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
                case 3:
                {
                    //birth date
                    std::string birthDate;
                    std::cout << "Podaj date urodzenia: " << std::endl;
                    std::cin >> birthDate;

                   // int index = searchByBirthDate(persons, birthDate);
                    break;
                }
                case 4:
                {
                    std::string credit_str;
                    std::cout << "Podaj kwote kredytu" << std::endl;
                    std::getline(std::cin, credit_str);
                    std::istringstream iss(credit_str);
                    float credit;

                    if (!(iss >> credit))
                    {
                        std::cerr << "Bledne dane. Mozliwy zly format tekstu. ";
                        break;
                    }
                   
                    sorter.bubbleSortAsc(persons);
                    int index = sorter.binarySearch(persons, credit);

                    if (index != -1)
                    {
                        system("cls");
                        std::cout<<persons[index].name<<" "
                            << persons[index].secondName <<" "
                            << persons[index].birthDate<<" "
                            << persons[index].credit<<std::endl;
                    }
                    else
                    {
                        std::cout << "Brak takiego kredytu" << std::endl;
                    }
                    break;
                }
               }
            }

            case 9: {
                break;
            }
            }

        } while (choose != 9);
}
    
