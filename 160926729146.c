#include<stdio.h>
int main()
{
    int a,b;
    char choice;
    printf("enter two number :");
    scanf("%d %d", &a ,&b);
    printf("\n enter an operator (+,-,*,/,%):");
    scanf(" %c", &choice);
    switch (choice)
    {
        case'+':
            printf("Addition = %d\n", a+b);
            break;
        case'-':
            printf("subtraction =%d\n",a-b);
            break;
        case'*':
            printf("Multiplication =%d\n",a*b);
            break;
        case'/':
           if (b!=0)
           printf("division =%d\n",a/b);
        else
           printf(" Division by zero is not possible .\n");
           break;
        case'%':
           if (b !=0)
           printf("Modulus = %d\n",a % b);
           else
            printf("Modulus by zero is not possiblr .\n");
          break;
        default:
          printf("invaild operator .\n");
        }
        return 0;
}


