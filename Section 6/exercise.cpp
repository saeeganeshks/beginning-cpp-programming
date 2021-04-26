#include <iostream>
#include <string>
using namespace std;

void employee_profile() {
    
    int age {0};
    double hourly_wage {23.50};
    string name;
    
    cin >> name >> age;
    
    cout << name << " " << age << " " << hourly_wage;
}