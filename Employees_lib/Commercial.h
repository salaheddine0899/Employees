#pragma once
#include "Employee.h"
namespace entreprise {
    class Commercial :
        public Employee
    {
    private:
        double ventes;
        double commission;
    public:
        Commercial(string nom, double indice_sal,double ventes,double commis);
        double calculer_salaire()const override;
        void ajouter_vente(double v);
    };
}
