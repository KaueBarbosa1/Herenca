#include <iostream>
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main() {
    BasePlusCommissionEmployee employee(
        "Heitor", "Freitas", "123-45-6789", 5000.0, 0.04, 300.0);

    cout << "Employee information obtained by print function:\n";
    employee.print();

    cout << "\n\nEarnings: $" << employee.earnings() << endl;

    return 0;
}