#include "pch.h"
#include "Commercial.h"
namespace entreprise {
	Commercial::Commercial(string nom, double indice_sal, double ventes, double commis) :EmployeeRespo(nom, indice_sal)
	{
		this->ventes = ventes;
		this->commission = commis;
	}
	double Commercial::calculer_salaire()const
	{
		return this->Employee::calculer_salaire()+(this->ventes*this->commission)/100;
	}
	void Commercial::ajouter_vente(double v)
	{
		this->ventes += v;
	}
}
