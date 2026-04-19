# Employee Management System

A C++ project demonstrating inheritance and polymorphism with three employee types.

## Classes
- **Employee** - Base class. Stores ID, years, hourly rate, and hours worked.
- **Supervisor** - Adds a supervision bonus (1% per supervised employee).
- **Officer** - Adds an evilness value to the hourly rate for pay calculation.

## Build & Run
```bash
make
./employees
```

## Generate Docs
```bash
doxygen doxyConfig
```
Then open `html/index.html` in your browser.
