#include<stdio.h>
void main()
{
    char x[100];
    int i, sp = 0, vo = 0, co = 0;
    printf("Enter the String = ");
    gets(x);
    printf("Entered String = %s\n", x);
    for(i = 0; x[i] != '\0'; i++) 
        if(x[i] >= 'A' && x[i] <= 'Z')
            x[i] = x[i] + 32;
    for(i = 0; x[i] != '\0'; i++)
        (x[i] == ' ')?sp++:(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') ?vo++: co++;
    printf("Number of Vowels = %d\nNumber of Spaces = %d\nNumber of Consonants = %d\n", vo, sp, co);
}
