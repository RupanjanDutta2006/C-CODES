
#include <stdio.h>
#include <string.h>
#define MAX 100

void postfixtoprefix(char postfix[], char prefix[]);
void push(char symbol[]);
void pop(char symbol[]);
int isOperator(char symbol);

int top = -1;
char stack[MAX][100];
char temp[100];

int main()
{
    char postfix[100], prefix[100];

    printf("Enter postfix operation: ");
    fgets(postfix, sizeof(postfix), stdin);
    postfix[strcspn(postfix, "\n")] = '\0';

    postfixtoprefix(postfix, prefix);

    printf("Prefix operation: ");
    puts(prefix);

    return 0;
}

//--------------------------------------------------------
void postfixtoprefix(char postfix[], char prefix[])
{
    int i;
    char symbol;
    char op1[100], op2[100];

    for (i = 0; i < strlen(postfix); i++)
    {
        symbol = postfix[i];

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
            pop(op2);
            pop(op1);

            temp[0] = symbol;
            temp[1] = '\0';

            strcat(temp, op1);
            strcat(temp, op2);

            push(temp);
        }
    }

    pop(prefix);
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
