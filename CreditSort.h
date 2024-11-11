#pragma once
#include <vector>
#include "CreditSort.h" 
#include"Person.h"


class CreditSort
{
public:
    // Funkcje sortuj¹ce przyjmuj¹ce przez referencjê
    void bubbleSortAsc(std::vector<Person>& persons);
    void bubbleSortDesc(std::vector<Person>& persons);
    void nameSort(std::vector<Person>& persons);
    void secondName(std::vector<Person>& persons);
    int binarySearch(const std::vector<Person>& persons, double targetCredit);
    int binarySearchByName(const std::vector<Person>& persons, const std::string& targetName);
    void showData(std::vector<Person>& persons);
};