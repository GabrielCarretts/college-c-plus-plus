# Vote Counter

## Description

A C++ terminal application that simulates an election process for 20
voters. It collects votes for three candidates, tracks null and blank
votes, calculates percentage results, and determines the winner while
handling ties.

------------------------------------------------------------------------

## Features

-   **Input Validation:** Uses `cin.fail()` and buffer clearing
    (`cin.clear()` / `cin.ignore()`) to safely handle invalid inputs.
-   **Replay Loop:** A `do-while` loop resets all variables each cycle,
    ensuring clean execution for multiple runs.
-   **Accurate Percentages:** Uses floating-point division to prevent
    integer truncation and ensure precise results.
-   **Winner Determination:** Applies strict `&&` conditions to
    guarantee a clear winner or detect ties.

------------------------------------------------------------------------

## Concepts Practiced

-   Multi-branch logic (`if / else if`)
-   Loop structures (`for`, `do-while`)
-   Input validation and error handling
-   Variable state management
-   Logical operators (`&&`)

------------------------------------------------------------------------

## Example

**Input:**

``` text
====> Welcome to the vote counter! <====

Enter your vote (1,2,3,4-null,5-blank): a
Invalid vote! Must be a number from 1-5! Try again: 1
Enter your vote (1,2,3,4-null,5-blank): 2
```

**Output:**

``` text
====> Final Results <====

Candidate 1: 10 votes (50.00%)
Candidate 2: 6 votes (30.00%)
Candidate 3: 2 votes (10.00%)
Null votes: 1 (5.00%)
Blank votes: 1 (5.00%)

Winner: Candidate 1 !

Would you like to calculate more votes? (Y/N)
```

------------------------------------------------------------------------

## Notes

-   Only votes for candidates (1, 2, or 3) are considered when
    determining the winner.
-   Null and blank votes are included in percentage calculations but do
    not affect the winner.

------------------------------------------------------------------------

## Requirements

-   C++ compiler (g++, clang, or MSVC)
-   Terminal / Command Prompt

------------------------------------------------------------------------

## How to Run

1.  Compile the program:

    ``` bash
    g++ vote_counter.cpp -o app
    ```

2.  Run the executable:

    ``` bash
    ./app
    ```

------------------------------------------------------------------------

**Author:** Gabriel Carretts
