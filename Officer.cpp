/**
 * @file Officer.cpp
 * @brief Officer class implementation.
 * @author Shiva Patel
 */

#include "Officer.h"
#include <iostream>

Officer::Officer() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness)
    : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  std::cout << " Evilness: " << evilness << std::endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
