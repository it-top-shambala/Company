#pragma once

#include <string>
#include <vector>

#include "Person.h"
#include "Employee.h"

using namespace std;

namespace variant_one {
    class Manager {
    private:
        variant_one::Person* person;
        vector<variant_one::Employee*> employees;

    public:
        Manager(string first_name, string last_name) {
            this->person = new variant_one::Person(first_name, last_name);
        }

        void AddEmployee(variant_one::Employee* employee) {
            employees.push_back(employee);
        }

        variant_one::Person* getPerson() const {
            return person;
        }

        const vector<variant_one::Employee *>& getEmployees() const {
            return employees;
        }
    };
}
