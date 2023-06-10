#include <stdio.h>
/*
 * In this section, you will learn about basic function types
 * Functions are a great way of keeping the code organized by putting sub routines or things you might want to do again 
 * and again in your code. We use functions to avoid redundancy and also to keep our programs clean.
 */
void printHello(){
    printf("Hello Coder\n");
    /*
     * This is a function of type "Take no arguments, Give nothing"
     * It simply executes what is written inside the function and is
     * independent of variables 
     */
}
void printSquares(int n){
    /*
     * This is a function of type "Take arguments, Give nothing"
     * It simply executes what is written inside the function probably based
     * on what is given to the funciton as an argument, which is not necessary but then
     * that is something you should avoid as a programmer and make your code more readable and sensible.
     */
    for(int i = 1 ; i <= n ; i++){
        printf("%d ", i*i); // We are printing squares of N natural numbers where n is the natural number TILL which we want to print squares
    }
    printf("\n"); 
}
int sum(int a, int b){ 
    /*
     * This is a function of type "Take arguments, Give Back Something"
     * Here, that something is an integer 
     * This is similar to int main(){} function, except it will probably return the value to some entity or its caller in the main function
     */
    return a+b; // We simply return the sum of numbers (our arguments)
}
float divide(int a, int b){
    // This is a function which returns a float, We shall cover all data types in next tutorial
    return (float) a / (float) b; // This is a concept known as type-casting, we shall dive deeper into it later
}
int main(){
    // Fun fact : printf() and scanf() are pre - defined functions available in C
    // We use header files because we are telling the compiler to consider these files' code where the functions are defined so we can use them in our programs 
    int a,b;
    int n;
    printHello(); // We can call functions like this
    printf("Enter a natural number : ");
    scanf("%d", &n);
    printf("Enter a, b : ");
    scanf("%d %d", &a, &b); // You can take inputs for multiple variables like this
    
    printSquares(n);
    printf("Sum of &d & %d = %d", a,b,sum(a,b));
    printf("%d / %d = %f", a,b,divide(a,b));
    // %f is to denote a float since the function is returning a float
    // YOU MUST be careful with the format specifiers as they can skew your output
    
    return 0;
}