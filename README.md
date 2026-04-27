# collatz-seq-base7-recursion-cpp
Collatz Sequence and Base 7 Recursion

## Overview
This project implements recursive algorithms in C++ to solve two classic computational problems: the Collatz Conjecture step count and base conversion from base 10 to base 7.

The goal of the project is to demonstrate a strong understanding of recursion by breaking problems into smaller subproblems and solving them through repeated function calls. The program includes comprehensive test cases to validate correctness across base cases, invalid inputs, and larger values.

## Features

- Recursive Collatz sequence solver
  - Computes the number of steps required for a number to reach 1
  - Handles both even and odd cases recursively
  - Returns `-1` for invalid inputs

- Recursive base conversion
  - Converts base 10 integers into base 7 representation
  - Builds the result digit-by-digit using recursion
  - Handles edge cases such as zero and negative inputs

- Robust input handling
  - Detects and handles invalid inputs safely
  - Supports both small and large integer values

- Comprehensive testing
  - Includes test cases for:
    - Base cases
    - Invalid inputs
    - Small values
    - Large values :contentReference[oaicite:0]{index=0}

## How It Works

1. The `CollatzSteps` function recursively evaluates whether a number is even or odd.
2. If the number is even, it is divided by 2; if odd, it is multiplied by 3 and incremented by 1.
3. The function continues calling itself until the value reaches 1.
4. Each recursive call contributes to the total step count.
5. The `IntegerToBase7` function recursively divides the number by 7.
6. The remainder at each step forms the digits of the base 7 number.
7. Results are combined as the recursion unwinds to form the final converted value.
8. The main program runs multiple test cases to validate both functions.

## Example Output

```text
*** Test Cases ***
Base Cases:
Collatz Steps of 1: 0
Base 10 to Base 7 of 0: 0

Invalid Input Cases:
Collatz Steps of 0: -1
Collatz Steps of -2: -1
Base 10 to Base 7 of -5: -1

Valid Small Input Cases:
Collatz Steps of 4 (Even): ...
Collatz Steps of 9 (Odd): ...
...

Valid Large Input Cases:
Collatz Steps of 50 (Even): ...
Collatz Steps of 81 (Odd): ...
Base 10 to Base 7 of 5928426: 101251020
```

## Key Concepts Demonstrated

- **Recursion Fundamentals**  
  Breaks problems into smaller subproblems and solves them through repeated function calls.

- **Base Case and Recursive Case Design**  
  Clearly defines stopping conditions and recursive transitions to ensure correctness.

- **Mathematical Problem Solving**  
  Implements logic for the Collatz sequence and number base conversion.

- **Function Decomposition**  
  Separates logic into distinct functions for clarity and reuse.

- **Edge Case Handling**  
  Properly handles invalid inputs such as negative numbers and zero.

- **Call Stack Behavior**  
  Demonstrates how recursive calls build and resolve results through stack unwinding.

## Design Highlights

- **Clear Recursive Structure**  
  Each function follows a simple and predictable recursive pattern, improving readability and correctness.

- **Minimal State Tracking**  
  Relies entirely on function calls rather than additional data structures.

- **Efficient Problem Breakdown**  
  Reduces complex operations into smaller, repeatable steps.

- **Comprehensive Testing Strategy**  
  Covers multiple input categories to ensure reliability and correctness.

## File Structure

- **Source Files**
  - `main.cpp` — Contains both recursive functions and all test cases

## Summary

This project demonstrates how recursion can be used to solve mathematical and computational problems efficiently. By implementing both the Collatz sequence and base conversion, the program highlights key recursive patterns and reinforces understanding of function calls, base cases, and problem decomposition.

# How to Run

1. **Place all files in the same directory**
   - Source file (`.cpp`)

2. **Compile the program**
   ```bash
   g++ -std=c++17 main.cpp -o recursion

3. **Run the Executable**
   ```bash
   ./recursion
