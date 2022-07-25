/*
 * This program demonstrates the switch case, We will be creating a basic calculator and
 * I will be telling some fine details one can often miss.
 * @author Suteerth Subramaniam
 *
 */

#include <stdio.h>
int main()
{
    char operator;
    int flag = 0; // This will be used to determine whether our condition has been met or not
    float a, b;
    printf("Enter two numbers : ");
    scanf("%f %f", &a, &b);
    printf("Enter operand : ");
    scanf(" %c", &operator); //This space is necessary otherwise we wont be able to take input
    for ( ; flag==0 ; )      //Often, you will see that you can't take input after taking integer inputs, particularly for strings and characters
    {                        //Notice how we are not providing initialization and increment statements in the for loop, and it still runs 
        if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
        {
            flag = 1;
            break;
            // To exit the loop since condition is met
        }
        else
        {
            printf("Enter valid operator : ");
            scanf(" %c", &operator); //Again for the same reason, we provide a space
        }
    }
    /*
      This for loop is used to ensure that the user is entering the correct data type.
      If the condition statement contains true, the loop will iterate and terminate otherwise.
      The flag is switched to false if the entered character is a valid math operator.
      Otherwise, we ask the user to enter the operator again.
     */
    // We can also use an external function to execute this program which will be more efficient BUT
    // For sake of simplicity, the switch case is here in main function itself
    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
        break;
    default:   // Since we have ensured that the entered operator is going to be a valid one, we
        break; // can leave this default case (Which is executed if no cases match) empty.
    }
    /*
      The break statement is necessary if you want the program to exit the switch case if a paricular
      case is matched. Without the break statement, the code afer a case has been matched, will also
      be executed.
      This is VERY IMP when it comes to understanding switch cases
     */
    return 0;
}
