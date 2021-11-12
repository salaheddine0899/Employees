#pragma once
#include "EmployeeRespo.h"
namespace entreprise {
    class Commercial :
        public EmployeeRespo
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
