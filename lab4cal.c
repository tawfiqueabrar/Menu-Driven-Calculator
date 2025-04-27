#include<stdio.h>
int main(){
    float num1 , num2 , result;
    int choice, num1m ,num2m , resultm ;

    while (1)
{
    printf("\n\n------ MENU DRIVEN CALCULATOR ------\n\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction(-)\n");
    printf("3. Multiplication(*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit \n");
    printf("What arithmetic operation do yo want to choice : ");
    scanf("%d",&choice);

    if (choice==6)
        {
            printf("Exiting the calculator. Byeeeeeeee \n");
            return 0;
        }
        if (choice < 1 || choice > 6)
        {
            printf("Invalid choice ! Please enter a number between 1 and 6.\n");
            continue;
        }
        if (choice==5)
            {
                printf("Enter first integer number : ");
                scanf("%d",&num1m);
                printf("Enter the second integer number : ");
                scanf("%d",&num2m);
                if (num2==0)
                {
                printf("Cannot divide by zero !");
                }
                else
                {
                resultm = num1m % num2m;
                printf("So, the answer is : %d\n",resultm);
                }
             continue;
            }


    printf("Enter the first number : ");
    scanf("%f",&num1);
    printf("Enter the second number : ");
    scanf("%f",&num2);

        if (choice==1)
        {
            result = num1 + num2;
            printf("So, the answer is : %.2f\n",result);
        }
        if (choice==2)
        {
            result = num1 - num2;
            printf("So, the answer is : %.2f\n",result);
        }
        if (choice==3)
        {
            result = num1 * num2;
            printf("So, the answer is : %.2f\n",result);
        }
        if (choice==4)
        {
            if (num2==0)
            {
                printf("Cannot divide by zero !");
            }
            else
            {
                result = num1 / num2;
                printf("So, the answer is : %.2f\n",result);
            }
            
        }
      
    }
   
}