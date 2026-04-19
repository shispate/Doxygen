/**
 * @file Employee.h
 * @brief Base Employee class declaration.
 * @author Shiva Patel
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * @class Employee
 * @brief Base class for all employee types.
 */
class Employee {
 private:
  int ID;            ///< Unique employee ID.
  int years;         ///< Years with the company.

 protected:
  double hourlyRate; ///< Hourly pay rate.
  float hoursWorked; ///< Hours worked this period.

 public:
  /** @brief Prints employee info to stdout. */
  virtual void print();

  /** @brief Returns hourlyRate * hoursWorked. */
  virtual double calculatePay();

  /** @brief Increments years and applies a 0.2% raise. */
  void anniversary();

  /** @brief Default constructor. Sets all fields to -1. */
  Employee();

  /**
   * @brief Parameterized constructor.
   * @param ID Unique employee ID.
   * @param years Years at the company.
   * @param hourlyRate Hourly pay rate.
   * @param hoursWorked Hours worked this period.
   */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif // EMPLOYEE_H
