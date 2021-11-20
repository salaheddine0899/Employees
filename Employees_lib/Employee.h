#pragma once
#include <iostream>
#include "Personel.h"
using namespace std;
namespace entreprise {
	class Employee
	{
	private:
		static int nombreEmp;
		const int matricule;
		string nom;
		double indice_sal;
		static double val_sal;
		Personel* p;
	protected:
		virtual double calculer_salaire()const;
	public:
		Employee(string nom,double indice_sal);
		virtual void afficher()const;
		virtual void ajouter_inf(Employee&);
		~Employee();
		
	};
}

