#include <stdio.h>

char char_1;
char char_2;
char char_3;

int main()
{
    char_1 = 'A';
    char_2 = 'B';
    char_3 = 'C';

    printf("%c%c%c reversed %c%c%c",
           char_1, char_2, char_3,
           char_3, char_2, char_1);
}
