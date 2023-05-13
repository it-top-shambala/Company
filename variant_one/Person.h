#ifndef COMPANY_PERSON_H
#define COMPANY_PERSON_H

#include <string>

using namespace std;

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

#endif //COMPANY_PERSON_H
