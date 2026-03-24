# Package String Estimator

## Description

A C++ console application that calculates the amount of string required to securely tie a package.

The program takes the package dimensions (width, height, and length) and determines the total string needed based on three ties. Each tie wraps around a different pair of dimensions and includes an additional 10 cm for fastening.

---

## Features

* Validates user input (values must be greater than zero)
* Calculates string required for 3 independent ties
* Displays individual tie lengths and total string required
* Uses ANSI colors for improved terminal readability
* Supports repeated calculations with a `do-while` loop

---

## Concepts Practiced

* Arithmetic calculations with real-world modeling
* Input validation using `while` loops
* Loop control with `do-while`
* Boolean logic for user input validation
* Code organization (input → process → output)
* Basic UI/UX improvements with ANSI colors

---

## How It Works

The program calculates three ties:

* **Tie 1:** wraps around width and height

  ```
  tie_1 = 2 * width + 2 * height + 10
  ```

* **Tie 2:** wraps around height and length

  ```
  tie_2 = 2 * height + 2 * length + 10
  ```

* **Tie 3:** wraps around width and length

  ```
  tie_3 = 2 * width + 2 * length + 10
  ```

The total string required is:

```
total = tie_1 + tie_2 + tie_3
```

---

## How to Run

1. Compile the program:

   ```bash
   g++ package_string_estimator.cpp -o app
   ```

2. Run the executable:

   ```bash
   ./app
   ```

---

## Example

**Input:**

* Width: 10 cm
* Height: 20 cm
* Length: 30 cm

**Output:**

* Tie 1: 70 cm
* Tie 2: 110 cm
* Tie 3: 90 cm
* Total string required: 270 cm

---

## Notes

* Each tie includes an additional 10 cm for fastening
* All inputs must be greater than zero
* ANSI colors may not display correctly in all terminals

---

## Author

Gabriel Carretts
