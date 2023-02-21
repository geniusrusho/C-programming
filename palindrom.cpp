#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        if (str[i] != str[len-1-i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, count = 0;
    char str[50];

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; ; i++)
    {
        sprintf(str, "%d", i);
        if (isPalindrome(str))
        {
            count++;
        }
        if (count == n)
        {
            printf("%s is the %d-th palindrome.\n", str, n);
            break;
        }
    }

    return 0;
}
