/* 10-main.c */
#include "main.h"
#include <stdio.h>

/* Function prototype or you can include the entire function definition */
int add(int a, int b);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
