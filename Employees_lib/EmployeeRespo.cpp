#include "pch.h"
#include "EmployeeRespo.h"

namespace entreprise {
	EmployeeRespo::EmployeeRespo(string nom, double indice_sal):Employee(nom,indice_sal)
	{
		this->emp_inf = new vector<Employee*>();
	}
	void EmployeeRespo::ajouter_inf(Employee &emp)
	{
		if (this != &emp) {
			this->emp_inf->push_back(&emp);
		}
	}
	void EmployeeRespo::afficher() const
	{
		int n = this->emp_inf->size();
	
		this->Employee::afficher();
		cout << "est responsable de: " << endl << "\t";
		for (int i = 0; i < n; i++) {

			(*this->emp_inf)[i]->afficher();

		}
		
	}
	EmployeeRespo::~EmployeeRespo()
	{
			this->emp_inf->~vector();
			//this->emp_inf = nullptr;
	}
}