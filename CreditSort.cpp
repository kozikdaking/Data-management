#include "CreditSort.h"
#include <algorithm>
#include<vector>

void CreditSort::bubbleSortAsc(std::vector<Person>& persons) {
    int n = persons.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (persons[j].credit > persons[j + 1].credit) {
                std::swap(persons[j], persons[j + 1]);
            }
        }
    }
}

void CreditSort::bubbleSortDesc(std::vector<Person>& persons) {
    int n = persons.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (persons[j].credit < persons[j + 1].credit) {
                std::swap(persons[j], persons[j + 1]);
            }
        }
    }
}

void CreditSort::nameSort(std::vector<Person>& persons)
{
    int n = persons.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (persons[j].name > persons[j + 1].name) {
                std::swap(persons[j], persons[j + 1]);
            }
        }
    }
}

void CreditSort::secondName(std::vector<Person>& persons)
{
    int n = persons.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (persons[j].secondName > persons[j + 1].secondName)
            {
                std::swap(persons[j], persons[j + 1]);
            }
        }
    }
}

int CreditSort::binarySearch(const std::vector<Person>& persons, double targetCredit) {
    int left = 0;
    int right = persons.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (persons[mid].credit == targetCredit) {
            return mid; // Zwróæ indeks osoby
        }
        else if (persons[mid].credit > targetCredit) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return -1;
}
int CreditSort::binarySearchByName(const std::vector<Person>& persons, const std::string& targetName) {
    int left = 0;
    int right = persons.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (persons[mid].name == targetName) {
            return mid;
        }
        else if (persons[mid].name < targetName) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}


void CreditSort::showData(std::vector<Person>&persons)
{
    system("cls");
    for (const auto& pers : persons) {
        std::cout<< "Nazwisko: " << pers.secondName+"," << " Imie: " << pers.name + "," << " Data urodzenia: " << pers.birthDate + "," << " Kredyt: " << pers.credit << " PLN" << std::endl;
    }
    
}
