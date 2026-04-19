/**
 * @file Employee.cpp
 * @brief Base Employee class implementation.
 * @author Shiva Patel
 */

#include "Employee.h"
#include <iostream>

Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}

void Employee::print() {
  std::cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << std::endl;
}

void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  std::cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << std::endl;
}

double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
