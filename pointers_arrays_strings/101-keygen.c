#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function that generates random valid passwords
 * for the program 101-crackme.
 *
 *
 * Return: Returns no value
 *
 *
 */


int main(void)
{
    int password[100];
    int index, checksum, remaining;

    checksum = 0;

    srand(time(NULL));

    for (index = 0; index < 100; index++)
    {
        password[index] = rand() % 78;
        checksum += (password[index] + '0');
        putchar(password[index] + '0');

        if ((2772 - checksum) - '0' < 78)
        {
            remaining = 2772 - checksum - '0';
            checksum += remaining;
            putchar(remaining + '0');
            break;
        }
    }

    return 0;
}
