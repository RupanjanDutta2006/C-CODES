
#include <stdio.h>
#include <string.h>
#define MAX 100

void prefixtopostfix(char prefix[], char postfix[]);
void push(char symbol[]);
void pop(char symbol[]);
int isOperator(char symbol);

int top = -1;
char stack[MAX][100];
char temp[100];

int main()
{
    char prefix[100], postfix[100];

    printf("Enter prefix operation: ");
    fgets(prefix, sizeof(prefix), stdin);
    prefix[strcspn(prefix, "\n")] = '\0';

    prefixtopostfix(prefix, postfix);

    printf("Postfix operation: ");
    puts(postfix);

    return 0;
}

//--------------------------------------------------------
void prefixtopostfix(char prefix[], char postfix[])
{
    int i;
    char symbol;
    char op1[100], op2[100];

    for (i = strlen(prefix)-1; i >= 0; i--)
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

            strcpy(temp, op1);
            strcat(temp, op2);
            strncat(temp, &symbol, 1);

            push(temp);
        }
    }

    pop(postfix);
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
