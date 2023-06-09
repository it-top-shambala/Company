#pragma once

#include <string>

using namespace std;

namespace variant_one {
    class Person {
    private:
        string first_name;
        string last_name;

    public:
        Person(string first_name, string last_name) {
            this->first_name = first_name;
            this->last_name = last_name;
        }

        string GetFullName() {
            return last_name + " " + first_name;
        }
    };
}
