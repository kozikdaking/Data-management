#pragma once
#include <vector>
#include "CreditSort.h" 
#include"Person.h"

class CreditSort
{
public:
    // Funkcje sortujące przyjmujące przez referencję
    void bubbleSortAsc(std::vector<Person>& persons);
    void bubbleSortDesc(std::vector<Person>& persons);
    void nameSort(std::vector<Person>& persons);
    void secondName(std::vector<Person>& persons);
};