// Mohammed Al-Sheikh
// main.cpp

#include <iostream>

// Recursive function that computes how many steps are required for an integer value of 1 using Collatz Conjecture
int CollatzSteps(int value)
{
    // Invalid input; 0 and negative integers
    if(value <= 0)
    {
        return -1;
    }
    // Base case; if value is already at 1, no steps required
    else if(value == 1)
    {
        return 0;
    }
    // Even integers; divide value by 2 then call function again for recursion
    else if(value % 2 == 0)
    {
        return CollatzSteps(value / 2) + 1;
    }
    // Odd integers; multiply value by 3 and add 1, then call function again for recursion
    else
    {
        return CollatzSteps((value * 3) + 1) + 1;
    }
}

// Recursive function converting base 10 integer to base 7
int IntegerToBase7(int base10value)
{
    // Invalid input; negative integers
    if(base10value < 0)
    {
        return -1;
    }
    // Base case; if value is 0, no conversion required
    else if(base10value == 0)
    {
        return 0;
    }
    /* Otherwise, divide base 10 value by 7, multiply by 10 to shift the value left,
       and add remainder of dividing by 7. */
    else
    {
        return (IntegerToBase7(base10value / 7) * 10) + (base10value % 7);
    }
}

int main()
{
    // Covers all possible test cases of both recursive functions
    std::cout << "*** Test Cases ***" << std::endl;
    
    std::cout << "Base Cases:" << std::endl;
    std::cout << "Collatz Steps of 1: " << CollatzSteps(1) << std::endl;
    std::cout << "Base 10 to Base 7 of 0: " << IntegerToBase7(0) << std::endl << std::endl;
    
    std::cout << "Invalid Input Cases:" << std::endl;
    std::cout << "Collatz Steps of 0: " << CollatzSteps(0) << std::endl;
    std::cout << "Collatz Steps of -2: " << CollatzSteps(-2) << std::endl;
    std::cout << "Base 10 to Base 7 of -5: " << IntegerToBase7(-5) << std::endl << std::endl;
    
    std::cout << "Valid Small Input Cases:" << std::endl;
    std::cout << "Collatz Steps of 4 (Even): " << CollatzSteps(4) << std::endl;
    std::cout << "Collatz Steps of 9 (Odd): " << CollatzSteps(9) << std::endl;
    std::cout << "Collatz Steps of 12 (Even): " << CollatzSteps(12) << std::endl;
    std::cout << "Base 10 to Base 7 of 1: " << IntegerToBase7(1) << std::endl;
    std::cout << "Base 10 to Base 7 of 6: " << IntegerToBase7(6) << std::endl;
    std::cout << "Base 10 to Base 7 of 7: " << IntegerToBase7(7) << std::endl << std::endl;
    
    std::cout << "Valid Large Input Cases:" << std::endl;
    std::cout << "Collatz Steps of 50 (Even): " << CollatzSteps(50) << std::endl;
    std::cout << "Collatz Steps of 81 (Odd): " << CollatzSteps(81) << std::endl;
    std::cout << "Base 10 to Base 7 of 95: " << IntegerToBase7(95) << std::endl;
    std::cout << "Base 10 to Base 7 of 5928426: " << IntegerToBase7(5928426) << std::endl << std::endl;
    
    return 0;
}
