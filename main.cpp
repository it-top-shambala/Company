#include <iostream>

#include "./variant_one/Manager.h"

void PrintManager(Manager* manager);
void PrintEmployee(Employee* employee);
void PrintPerson(Person* person);

int main() {
    Employee* employee_1 = new Employee(new Person("Ivav", "Ivanov"), "cleaner");
    Employee* employee_2 = new Employee("Petr", "Petrov", "cleaner");

    Manager* manager = new Manager("Sidr", "Sidorov");
    manager->AddEmployee(employee_1);
    manager->AddEmployee(employee_2);

    PrintManager(manager);

    return 0;
}


void PrintManager(Manager* manager) {
    PrintPerson(manager->getPerson());
    for (Employee* employee : manager->getEmployees()) {
        PrintEmployee(employee);
    }
}

void PrintEmployee(Employee* employee) {
    PrintPerson(employee->getPerson());
    cout << employee->getPosition() << endl;
}

void PrintPerson(Person* person) {
    cout << person->GetFullName() << endl;
}