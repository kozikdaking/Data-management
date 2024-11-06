#include "CreditSort.h"
#include <algorithm>

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
