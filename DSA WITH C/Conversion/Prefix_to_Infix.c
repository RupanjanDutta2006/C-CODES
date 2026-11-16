
#include <stdio.h>
#include <string.h>
#define MAX 10

void prefixtoinfix(char prefix[100], char infix[100]);
void pop(char symbol[]);
void push(char symbol[]);
int isOperator(char symbol);

int top = -1;
char stack[MAX][100];
char temp[100];

int main()
{
    char prefix[100], infix[100];

    printf("Enter prefix operation: ");
    fgets(prefix, sizeof(prefix), stdin);
    prefix[strcspn(prefix, "\n")] = '\0';

    prefixtoinfix(prefix, infix);

    printf("Infix operation: ");
    puts(infix);

    return 0;
}

//--------------------------------------------------------
void prefixtoinfix(char prefix[], char infix[])
{
    int i;
    char symbol;
    char op1[100], op2[100];

    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        symbol = prefix[i];

        if (symbol == ' ')
            continue;

        if (isOperator(symbol) == 0)
        {
            temp[0] = symbol;
            temp[1] = '\0';

            push(temp);
        }
        else
        {
            pop(op1);
            pop(op2);

            sprintf(temp, "(%s%c%s)", op1, symbol, op2);

            push(temp);
        }
    }

    pop(infix);
}

//--------------------------------
void pop(char symbol[])
{
    strcpy(symbol, stack[top]);
    top--;
}

//----------------------------------
void push(char symbol[])
{
    top++;
    strcpy(stack[top], symbol);
}

//------------------------------------------
int isOperator(char symbol)
{
    switch(symbol)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '^':
        case '$':
        case '&':
            return 1;

        default:
            return 0;
    }
}
