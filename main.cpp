#include <iostream>

#include "./variant_one/Manager.h"
#include "./variant_two/Manager.h"

void PrintManager(variant_one::Manager* manager);
void PrintEmployee(variant_one::Employee* employee);
void PrintPerson(variant_one::Person* person);

void PrintManager(variant_two::Manager* manager);
void PrintEmployee(variant_two::Employee* employee);

int main() {
    variant_one::Employee* employee_1_1 = new variant_one::Employee(new variant_one::Person("Ivav", "Ivanov"), "cleaner");
    variant_one::Employee* employee_1_2 = new variant_one::Employee("Petr", "Petrov", "cleaner");

    variant_one::Manager* manager_1 = new variant_one::Manager("Sidr", "Sidorov");
    manager_1->AddEmployee(employee_1_1);
    manager_1->AddEmployee(employee_1_2);

    PrintManager(manager_1);

    auto* employee_2_1 = new variant_two::Employee("R", "RR", "cleaner");
    auto* employee_2_2 = new variant_two::Employee("T", "TT", "cleaner");

    auto* manager_2 = new variant_two::Manager("W", "WW");
    manager_2->AddEmployee(employee_2_1);
    manager_2->AddEmployee(employee_2_2);

    PrintManager(manager_2);

    return 0;
}


void PrintManager(variant_one::Manager* manager) {
    PrintPerson(manager->getPerson());
    for (variant_one::Employee* employee : manager->getEmployees()) {
        PrintEmployee(employee);
    }
}

void PrintEmployee(variant_one::Employee* employee) {
    PrintPerson(employee->getPerson());
    cout << employee->getPosition() << endl;
}

void PrintPerson(variant_one::Person* person) {
    cout << person->GetFullName() << endl;
}


void PrintEmployee(variant_two::Employee* employee) {
    cout << employee->GetFullName() << endl;
    cout << employee->getPosition() << endl;
}
void PrintManager(variant_two::Manager* manager) {
    cout << manager->GetFullName() << endl;
    for (auto employee : manager->getEmployees()) {
        PrintEmployee(employee);
    }
}