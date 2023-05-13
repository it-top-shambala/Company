#ifndef COMPANY_MANAGER_H
#define COMPANY_MANAGER_H

#include <string>
#include <vector>

#include "Person.h"
#include "Employee.h"

using namespace std;

struct Manager {
private:
    Person* person;
    vector<Employee*> employees;

public:
    Manager(string first_name, string last_name) {
        this->person = new Person(first_name, last_name);
    }

    void AddEmployee(Employee* employee) {
        employees.push_back(employee);
    }

    Person* getPerson() const {
        return person;
    }

    const vector<Employee *>& getEmployees() const {
        return employees;
    }
};

#endif //COMPANY_MANAGER_H
