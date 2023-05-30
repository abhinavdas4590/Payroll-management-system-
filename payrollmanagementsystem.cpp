#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
    private:
        string name;
        int id;
        double salary;
    public:
        Employee(string name, int id, double salary) {
            this->name = name;
            this->id = id;
            this->salary = salary;
        }
        string getName() {
            return name;
        }
        int getId() {
            return id;
        }
        double getSalary() {
            return salary;
        }
};

class Payroll {
    private:
        vector<Employee> employees;
    public:
        void addEmployee(Employee employee) {
            employees.push_back(employee);
        }
        void removeEmployee(int id) {
            for (int i = 0; i < employees.size(); i++) {
                if (employees[i].getId() == id) {
                    employees.erase(employees.begin() + i);
                    break;
                }
            }
        }
        double calculateTotalSalary() {
            double totalSalary = 0;
            for (int i = 0; i < employees.size(); i++) {
                totalSalary += employees[i].getSalary();
            }
            return totalSalary;
        }
};

int main() {
    Payroll payroll;
    Employee employee1("John Doe", 1234, 5000);
    Employee employee2("Jane Smith", 5678, 6000);
    payroll.addEmployee(employee1);
    payroll.addEmployee(employee2);
    payroll.removeEmployee(1234);
    double totalSalary = payroll.calculateTotalSalary();
    cout << "Total salary: " << totalSalary << endl;
    return 0;
}
