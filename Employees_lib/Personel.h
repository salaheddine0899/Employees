#pragma once
#include <iostream>
using namespace std;
namespace entreprise {
	class Personel
	{
	private:
		static double som_sal;
	public:
		void add(double vers);
		double remove_sal(double vers);
		void afficher()const;
	};
}

