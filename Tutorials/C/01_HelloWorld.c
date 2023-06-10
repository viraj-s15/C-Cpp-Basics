/*
 * In this section, You will learn about basic for loops, taking inputs 
 * and also an introduction to functions 
 */
#include <stdio.h> 
// These are called header files, You will need various header files depending on your program
// stdio means standard input and output

// void main(){} is also valid but conventionally, int main is used

int main(){ // Every program needs to have a main function
            // Main function is basically your entry point in the program, the int here means that the function returns an integer data type
    
    printf("Hello World!\n"); // Print function comes under stdio.h 
    
    int num; // You declare variables like this, C is a strongly typed language
    // So explicit data type declaration is expected unlike python or dart
    printf("Enter a ceil value for number series : ");
    scanf("%d", &num);
    // %d means that we want to take an integer input
    // &num is to tell the system that the input value is to be stored in the address of num variabke

    for (int i = 0; i < num; i++) // More refined syntax for "for loop" in C language, We shall go into more depth later
    {
        printf("%d ", i+1); // You can put values into print function like this
    }
    
    return 0; // You can use any value here, but 0 is a convention 
}