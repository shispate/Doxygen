/**
 * @file Supervisor.cpp
 * @brief Supervisor class implementation.
 * @author Shiva Patel
 */

#include "Supervisor.h"
#include <iostream>

Supervisor::Supervisor() {
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised)
    : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}

void Supervisor::print() {
  Employee::print();
  std::cout << " Number Supervised: " << numSupervised << std::endl;
}

double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
