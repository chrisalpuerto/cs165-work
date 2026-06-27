// Chris Alpuerto 
// CH 2 Homework for CSIS 165 
// QUESTIONS:

// 1) Write a C program that inputs two integers and outputs their quotient and remainder. To output the % character, you must write it as %% in the format string. You need to submit code and output.
// 2) Write a C program that inputs an integer and outputs whether the integer is even. You need to submit code and output. 
// 3) Write a C function int rectArea (int len, int wid) that returns the area of a rectangle with length len and width wid. Test it with a main program that inputs the length and width of a rectangle and outputs its area. Output the value in the main program, not in the function. You need to submit code and output. 

#include <stdio.h>
#include <stdbool.h>


// q1 function
void q1_quot_remainder(int a, int b, int *quotient, int *remainder){
    *quotient = a / b;
    *remainder = a % b;
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
    int value1;
    int value2;
    int num;
    int length;
    int width;
    int quotient;
    int remainder;
    int area;


    printf("Question 1:\n");
    printf("Enter two integers: ");
    scanf("%d %d", &value1, &value2);

    q1_quot_remainder(value1, value2, &quotient, &remainder);
    printf("%d / %d has a quotient of %d and a remainder of %d\n",
           value1, value2, quotient, remainder);

    printf("Question 2:\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (q2_is_even(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is not even\n", num);
    }

    printf("Question 3:\n");
    printf("Enter the length and width of a rectangle: ");
    scanf("%d %d", &length, &width);

    area = q3_area(length, width);
    printf("The area of the rectangle is %d\n", area);

    return 0;
}
