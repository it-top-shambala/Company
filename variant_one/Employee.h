#ifndef COMPANY_EMPLOYEE_H
#define COMPANY_EMPLOYEE_H

#include <string>

#include "Person.h"

using namespace std;

class Employee {
private:
    Person* person;
    string position;

public:
    Employee(Person* person, string position) {
        this->person = person;
        this->position = position;
    }
    Employee(string first_name, string last_name, string position) {
        this->person = new Person(first_name, last_name);
        this->position = position;
    }

    Person* getPerson() const {
        return person;
    }

    string getPosition() {
        return position;
    }
};

#endif //COMPANY_EMPLOYEE_H
