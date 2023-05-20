#pragma once

#include <vector>

#include "Person.h"
#include "Employee.h"

using namespace std;

namespace variant_two {
    class Manager : public Person {
    private:
        vector<variant_two::Employee*> employees;

    public:
        Manager(string first_name, string last_name) : Person(first_name, last_name) {}

        void AddEmployee(variant_two::Employee* employee) {
            employees.push_back(employee);
        }

        const vector<variant_two::Employee *>& getEmployees() const {
            return employees;
        }
    };
}
