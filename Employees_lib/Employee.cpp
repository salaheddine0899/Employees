#include "pch.h"
#include "Employee.h"
namespace entreprise {
	int Employee::nombreEmp = 0;
	double Employee::val_sal = 1;
	Employee::Employee(string nom, double indice_sal):matricule(++Employee::nombreEmp)
	{
		this->nom = nom;
		this->indice_sal = indice_sal;
		this->p = new Personel();
		p->add(this->calculer_salaire());
	}
	void Employee::afficher() const
	{
		cout << "numero employee:" << this->matricule << " nom:" << this->nom << " salaire:" << this->calculer_salaire() << "$." << endl;
	}
	void Employee::ajouter_inf(Employee&)
	{
	}
	Employee::~Employee()
	{

		if (p->remove_sal(this->calculer_salaire()) == 0)
		{
			delete p;
			p = nullptr;
		}
	}
	double Employee::calculer_salaire() const
	{
		return this->indice_sal*Employee::val_sal;
	}
}
