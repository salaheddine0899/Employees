#pragma once
#include "Employee.h"
#include<Vector>
namespace entreprise {
    class EmployeeRespo :
        public Employee
    {
        vector<EmployeeRespo> *emp_inf ;
    public:
        EmployeeRespo(string nom,double indice_sal);
        void ajouter_inf(EmployeeRespo&);
        void afficher_inf()const;
        //virtual double Employee::calculer_salaire();
        ~EmployeeRespo();
    };
}
