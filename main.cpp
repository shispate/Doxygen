/**
 * @file main.cpp
 * @brief Test driver for Employee, Supervisor, and Officer classes.
 * @author Shiva Patel
 */

#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

/**
 * @brief Runs print, calculatePay, anniversary, and print again on an employee.
 * @param e Reference to an Employee or derived object.
 */
void runEmployeeTests(Employee & e);

/**
 * @brief Entry point. Tests default and parameterized constructors for all classes.
 * @return 0 on success.
 */
int main() {
  Employee defaultE;
  std::cout << "Testing Employee default constructor:" << std::endl;
  runEmployeeTests(defaultE);
  std::cout << std::endl << std::endl;

  Employee parameterizedE(1248, 2, 15.23, 3);
  std::cout << "Testing Employee parameterized constructor:" << std::endl;
  runEmployeeTests(parameterizedE);
  std::cout << std::endl << std::endl;

  Supervisor defaultS;
  std::cout << "Testing Supervisor default constructor:" << std::endl;
  runEmployeeTests(defaultS);
  std::cout << std::endl << std::endl;

  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  std::cout << "Testing Supervisor parameterized constructor:" << std::endl;
  runEmployeeTests(parameterizedS);
  std::cout << std::endl << std::endl;

  Officer defaultO;
  std::cout << "Testing Officer default constructor:" << std::endl;
  runEmployeeTests(defaultO);
  std::cout << std::endl << std::endl;

  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  std::cout << "Testing Officer parameterized constructor:" << std::endl;
  runEmployeeTests(parameterizedO);

  return 0;
}

void runEmployeeTests(Employee &e) {
  std::cout << "Initial print():" << std::endl;
  e.print();
  std::cout << "Calculated Pay: " << e.calculatePay() << std::endl;
  std::cout << "Anniversary Test: ";
  e.anniversary();
  std::cout << "Final print():" << std::endl;
  e.print();
}
