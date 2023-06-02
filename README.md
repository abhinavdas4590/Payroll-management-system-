# Payroll-management-system-
# Payroll System Documentation

This is a simple payroll system implemented in C++. It allows you to manage a list of employees, add new employees, remove employees, and calculate the total salary of the remaining employees.

## How it Works

### Employee Class

The `Employee` class represents an employee in the system. It has three private attributes: `name` (employee's name), `id` (employee's identification number), and `salary` (employee's salary). The class provides a constructor to initialize these attributes and getter methods to access the employee's name, ID, and salary.

### Payroll Class

The `Payroll` class manages the list of employees and provides methods to perform various operations.

#### Adding Employees

The `addEmployee` method allows you to add a new employee to the payroll. You can create an `Employee` object with the employee's name, ID, and salary, and then pass it to the `addEmployee` method. The method adds the employee to the list of employees.

#### Removing Employees

The `removeEmployee` method allows you to remove an employee from the payroll based on their ID. You can specify the ID of the employee you want to remove, and the method will find the employee with that ID in the list and remove them from the payroll.

#### Calculating Total Salary

The `calculateTotalSalary` method calculates the total salary of all the employees currently in the payroll. It iterates over the list of employees, retrieves the salary of each employee, and adds it to the total salary.

### Main Function

The `main` function demonstrates the usage of the payroll system. It creates a `Payroll` object, creates two `Employee` objects with their respective details, adds them to the payroll, removes an employee based on their ID, and calculates the total salary of the remaining employees. Finally, it prints the total salary to the console.

## How to Use

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. The program will add two employees to the payroll: John Doe and Jane Smith.
4. It will then remove an employee with the ID 1234 from the payroll.
5. Finally, it will calculate the total salary of the remaining employee and display it on the screen.

You can modify the code to add more employees or customize it according to your needs.

## Contribution

Contributions to this project are welcome. If you find any issues or have suggestions for improvement, please open an issue or submit a pull request.

