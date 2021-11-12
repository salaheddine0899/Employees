#include "pch.h"
#include "EmployeeRespo.h"

namespace entreprise {
	EmployeeRespo::EmployeeRespo(string nom, double indice_sal):Employee(nom,indice_sal)
	{
		this->emp_inf = new vector<EmployeeRespo>();
	}
	void EmployeeRespo::ajouter_inf(EmployeeRespo& emp)
	{
		this->emp_inf->push_back(emp);
	}
	void EmployeeRespo::afficher_inf() const
	{
		int n = this->emp_inf->size();
		if (n > 0) {
			this->afficher();
			cout << "est responsable de: " << endl << "\t";
			for (int i = 0; i < n; i++) {

				(*this->emp_inf)[i].afficher_inf();

			}
			return;
		}
		this->afficher();
	}
	EmployeeRespo::~EmployeeRespo()
	{
			this->emp_inf->~vector();
			//this->emp_inf = nullptr;
	}
}