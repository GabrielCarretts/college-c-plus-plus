# UNIPLAC Library Database Analyzer

## What is this?
This is a C++ terminal app I built for the Information Systems course at UNIPLAC. It acts as a dynamic inventory system for a library, taking in an unlimited amount of books and magazines (Title, Publishing Year, Price, Type) and running parallel analytics on the entire collection once you finish boarding the data.

## Features
* Crash-Proof Inputs: Uses standard cin.fail() traps so the program won't crash if someone types a letter instead of a number for a price or year.
* Endless Loop: Keep entering items until you type 'end' as the title.
* Dual Cash Registers: Safely splits the math to calculate the average price of books and magazines independently without cross-contaminating the totals.
* Time-Travel Math: Dynamically calculates the actual age of the items based on their publishing year (against the year 2026) to figure out if the books or magazines are older on average.
* Target Scanner: Automatically scans the database and flags if the book "Algorithms for Experts" is currently on the shelves.
* King of the Hill: Tracks array indices to extract the full data profiles for the most expensive, cheapest, and newest items without destroying or mutating the original arrays.
* Terminal UI: Color-coded standard text (Cyan, Yellow, Green) to make the UI clean and readable.

## How to Run It
1. Open up your terminal or command prompt.
2. Compile the file: g++ library_database.cpp -o library_database
3. Run the executable: library_database.exe (Windows) or ./library_database (Mac/Linux)

## Example Output
====> UNIPLAC'S Library Database <====

Enter the book title (or 'end' to stop): Algorithms for Experts
Enter the publishing year: 2015
Enter the book price: 45.50
Enter the book type (1-book 2-magazine): 1

Enter the book title (or 'end' to stop): Tech Weekly
Enter the publishing year: 2025
Enter the book price: 5.99
Enter the book type (1-book 2-magazine): 2

Enter the book title (or 'end' to stop): end

====> RESULTS <====

The book Algorithms for Experts is in the library.

====> Book Price Average <====
The average book price is $ 45.50
The average magazine price is $ 5.99

====> Age Average <====
Books have the higher average age with 11.00 years

====> Most Expensive Item <====
Item name: Algorithms for Experts
Publishing year: 2015
Price: $ 45.50
Type: Book

====> Cheapest Item <====
Item name: Tech Weekly
Publishing year: 2025
Price: $ 5.99
Type: Magazine

====> Newest Item <====
Item name: Tech Weekly
Publishing year: 2025
Price: $ 5.99
Type: Magazine

---
Author: Gabriel Carretts