#pragma once
#include <vector>
#include "CreditSort.h" 
#include"Person.h"

class CreditSort
{
public:
    // Funkcje sortuj�ce przyjmuj�ce przez referencj�
    void bubbleSortAsc(std::vector<Person>& persons);
    void bubbleSortDesc(std::vector<Person>& persons);
    void nameSort(std::vector<Person>& persons);
    void secondName(std::vector<Person>& persons);
};