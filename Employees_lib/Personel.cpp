#include "pch.h"
#include "Personel.h"
namespace entreprise {
	double Personel::som_sal = 0;
	void Personel::add(double vers)
	{
		this->som_sal += vers;
	}
	double Personel::remove_sal(double vers)
	{
		this->som_sal -= vers;
		return this->som_sal;
	}
	void Personel::afficher() const
	{
		cout << "le total est: " << this->som_sal << endl;
	}
}
