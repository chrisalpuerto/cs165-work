// Chris Alpuerto 
// CH 2 Homework for CSIS 165 
// QUESTIONS:

// 1) Write a C program that inputs two integers and outputs their quotient and remainder. To output the % character, you must write it as %% in the format string. You need to submit code and output.
// 2) Write a C program that inputs an integer and outputs whether the integer is even. You need to submit code and output. 
// 3) Write a C function int rectArea (int len, int wid) that returns the area of a rectangle with length len and width wid. Test it with a main program that inputs the length and width of a rectangle and outputs its area. Output the value in the main program, not in the function. You need to submit code and output. 

#include <stdio.h>
#include <stdbool.h>


// q1 function
int q1_quot_remainder(int a, int b){
    int quotient = a / b;
    int remainder = a % b;
    return (quotient, remainder);
}

// q2 function
bool q2_is_even(int num){
    return num%2 == 0;
}

//q3 function
int q3_area(int length, int width){
    return length * width;
}

int main(){
    int test_value1 = 10;
    int test_value2 = 3;

    int quotient, remainder = q1_quot_remainder(test_value1, test_value2);

    

    
    return 0;
}