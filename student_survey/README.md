# UNIPLAC Student Survey Analyzer

## What is this?
This is a C++ terminal app that's basically a dynamic surveyor that takes in an unlimited amount of student data (Name, Age, Gender, Grade) and runs some statistics on the class once you are done boarding the data.

## Features
* Crash-Proof Inputs: Uses standard cin.fail() traps so the program won't explode if someone accidentally types a letter instead of a number.
* Endless Loop: Keep entering students until you type 'end' as the name.
* The Math: Automatically calculates the class age average and figures out if the guys or girls had the higher grade average (safely handles division-by-zero!).
* King of the Hill: Tracks the array index to find the oldest, youngest, and best-performing student in the class without destroying or mutating the original data arrays.
* Terminal UI: Color-coded standard text to make it easy on the eyes. 

## How to Run It
1. Open up your terminal or command prompt.
2. Compile the file: g++ student_survey.cpp -o student_survey
3. Run the executable: student_survey.exe (Windows) or ./student_survey (Mac/Linux)

## Example
====> UNIPLAC'S Student Survey <====

Enter the student's name (or 'end' to stop): Joe  
Enter the student's age: 22  
Enter the student's gender (1-male 2-female): 1  
Enter the student's grade: 9.5  

Enter the student's name (or 'end' to stop): end

====> RESULTS <====

Hey Joe! Sending you a hug!

====> Grade Average <====  
The male students have the higher grade average with 9.50

====> Best student <====  
Name: Joe
Age: 22
Gender: Male
Grade: 9.50

---
Author: Gabriel Carretts