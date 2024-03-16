#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i, rand_num;

    srand(time(NULL)); /* Seed the random number generator with time */

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        rand_num = rand() % ('~' - '!') + '!'; /* Generate ASCII characters in range */
        if (rand_num == '\'') /* Ensure generated character is not single quote */
        {
            rand_num = rand() % ('~' - '!' - 1) + '!'; /* Adjust generated character */
        }
        password[i] = (char)rand_num;
    }

    password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the string */
    printf("%s\n", password);

    return 0;
}
