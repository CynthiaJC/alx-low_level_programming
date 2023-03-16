#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        printf("Size off a char: %d byte(s)\n", sizeof(char));
        printf("Size off a int: %d byte(s)\n", sizeof(int));
        printf("Size off a long int: %d byte(s)\n", sizeof(long int));
        printf("Size off a long long int: %d byte(s)\n", sizeof(long long int));
        printf("Size off a float: %d byte(s)\n", sizeof(float));
        return (0);
}
