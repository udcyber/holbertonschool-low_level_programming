#include <stdio.h>

/**
* main - entry point
* print a welcome line
* display a menu
* allow quitting with option 0
* 
*
* Return: 0
*/

int main(void)
{
    int add_result, div_result, inputA, inputB, mult_result, select_program, sub_result;
    
    add_result = 0;
    div_result = 0;
    inputA = 0;
    inputB = 0;
    mult_result = 0;
    sub_result = 0;

    while (1)
    {
        printf("Simple Calculator\n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("0) Quit\n");

        scanf("%d", &select_program);

        if ((select_program) == 0)
        {
            printf("Bye!\n");
        }
        else if ((select_program) == 1)
        {
            printf("Choice: 1\n");

            scanf("%d%d", &inputA, &inputB);

            add_result = (inputA + inputB);

            printf("Result: %d\n", add_result);
        }
        else if ((select_program) == 2)
        {
            printf("Choice: 2\n");

            scanf("%d%d", &inputA, &inputB);

            sub_result = (inputA - inputB);

            printf("Result: %d\n", sub_result);
        }
        else if ((select_program) == 3)
        {
            printf("Choice: 3\n");

            scanf("%d%d", &inputA, &inputB);

            mult_result = (inputA * inputB);

            printf("Result: %d\n", mult_result);
        }
        else if ((select_program) == 4)
        {
                printf("Choice: 4\n");
                scanf("%d%d", &inputA, &inputB);
                if (inputB != 0)
                {
                div_result = (inputA / inputB);
                printf("Result: %d\n", div_result);
                }
                else
                {
                printf("Error: division by zero\n");
                }
        }
        else
        {
            printf("Invalid choice\n");
        }
    return (0);
    }
}
