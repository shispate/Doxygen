/**
 * @file Officer.h
 * @brief Officer class declaration.
 * @author Shiva Patel
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * @class Officer
 * @brief Employee subclass with an evilness-based pay bonus.
 */
class Officer : public Employee {
 private:
  double evilness; ///< Added to hourly rate when calculating pay.

 public:
  /** @brief Prints officer info including evilness value. */
  void print();

  /** @brief Returns (hourlyRate + evilness) * hoursWorked. */
  double calculatePay();

  /** @brief Default constructor. Sets evilness to 500. */
  Officer();

  /**
   * @brief Parameterized constructor.
   * @param ID Unique employee ID.
   * @param years Years at the company.
   * @param hourlyRate Hourly pay rate.
   * @param hoursWorked Hours worked this period.
   * @param evilness Bonus added to hourly rate for pay calculation.
   */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif // OFFICER_H
