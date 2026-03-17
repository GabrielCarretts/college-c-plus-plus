# Inflation & Deflation Calculator 📈

## Description
A dynamic C++ terminal application designed to calculate the financial percentage change of an asset over a specific period. The system takes historical and current pricing data, processes the mathematical variance, and outputs a formatted financial report to the user.

## Technologies Used
* **C++** (Core Logic)
* **`<iostream>`** (Standard Input/Output stream)
* **`<clocale>`** (Regional encoding for Portuguese characters)
* **ANSI Escape Codes** (Dynamic UI styling and color mapping)

## Core Logic & Features
* **Dynamic Percentage Mathematics:** Implements accurate financial formulas to calculate exact percentage rates rather than just raw dollar differences.
* **Conditional Routing:** Utilizes a highly efficient `if` / `else if` / `else` traffic cop architecture to automatically categorize the mathematical results into Inflation, Deflation, or Neutral states.
* **Financial UX Design:** Features dynamic ANSI terminal coloring to instantly communicate financial status (Bold Red for inflation/purchasing power loss, Bold Green for deflation/purchasing power gain, and Bold Yellow for neutral market states).
* **Double-Negative Formatting:** Cleans up mathematical outputs (e.g., converting a `-20%` deflation rate into a readable `20%` drop) before printing the final receipt.

## How to Run
1. Clone this repository to your local machine.
2. Navigate to the project directory in your terminal.
3. Compile the source code using the g++ compiler: 
   `g++ inflation_deflation_calculator.cpp -o app.exe`
4. Run the executable: 
   `.\app.exe`