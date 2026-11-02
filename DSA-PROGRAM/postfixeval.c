#include <stdio.h>
#include <ctype.h>
int stack[50], top = -1;
int main()
{
    char exp[50], c;
    int i, a, b;
    printf("Enter postfix expression: ");
    scanf("%s", exp);
    for (i = 0; exp[i] != '\0'; i++)
    {
        c = exp[i];
        if (isdigit(c))
            stack[++top] = c - '0';
        else
        {
            b = stack[top--];
            a = stack[top--];
            switch (c)
            {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        }
    }
    printf("Result = %d", stack[top]);
    return 0;
}