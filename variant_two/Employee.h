#pragma once

#include "Person.h"

namespace variant_two {
    class Employee : public Person {
    private:
        string position;

    public:
        Employee(string first_name, string last_name, string position) : Person(first_name, last_name) {
            this->position = position;
        }

        string getPosition() {
            return position;
        }
    };
}
