// Employee_Cli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Commercial.h"
using namespace entreprise;
int main()
{
    /*vector<EmployeeRespo*>* l = new vector<EmployeeRespo*>();
    vector<EmployeeRespo*>* l1 = new vector<EmployeeRespo*>();*/
    Personel p;
    Commercial emp("Salah Eddine", 1000,500,30);
    Commercial emp2("Aomar", 3000,0,30);
    p.afficher();
    emp.ajouter_inf(emp2);
    emp.afficher_inf();
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file