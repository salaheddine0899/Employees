#pragma once
#include "Employee.h"
#include<Vector>
namespace entreprise {
    class EmployeeRespo :
        public Employee
    {
        vector<Employee*> *emp_inf ;
    public:
        EmployeeRespo(string nom,double indice_sal);
        void ajouter_inf(Employee&);
        void afficher()const override;
        //double calculer_salaire()const override;
        ~EmployeeRespo();
    };
}
