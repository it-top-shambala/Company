#pragma once

#include <string>

#include "Person.h"

using namespace std;

namespace variant_one {
    class Employee {
    private:
        variant_one::Person* person;
        string position;

    public:
        Employee(variant_one::Person* person, string position) {
            this->person = person;
            this->position = position;
        }
        Employee(string first_name, string last_name, string position) {
            this->person = new variant_one::Person(first_name, last_name);
            this->position = position;
        }

        variant_one::Person* getPerson() const {
            return person;
        }

        string getPosition() {
            return position;
        }
    };
}
