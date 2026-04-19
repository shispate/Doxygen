/**
 * @file Supervisor.h
 * @brief Supervisor class declaration.
 * @author Shiva Patel
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * @class Supervisor
 * @brief Employee subclass with a supervision pay bonus.
 */
class Supervisor : public Employee {
 private:
  int numSupervised; ///< Number of employees supervised.

 public:
  /** @brief Prints supervisor info including number supervised. */
  void print();

  /** @brief Returns base pay plus 1% bonus per supervised employee. */
  double calculatePay();

  /** @brief Default constructor. Sets numSupervised to -1. */
  Supervisor();

  /**
   * @brief Parameterized constructor.
   * @param ID Unique employee ID.
   * @param years Years at the company.
   * @param hourlyRate Hourly pay rate.
   * @param hoursWorked Hours worked this period.
   * @param numSupervised Number of employees supervised.
   */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif // SUPERVISOR_H
