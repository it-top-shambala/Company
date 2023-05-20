#pragma once

#include <string>

using namespace std;

namespace variant_two {
    class Person {
    protected:
        string first_name;
        string last_name;

        Person(string first_name, string last_name) {
            this->first_name = first_name;
            this->last_name = last_name;
        }

    public:
        string GetFullName() {
            return last_name + " " + first_name;
        }
    };
}
