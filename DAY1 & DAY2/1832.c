
#include <stdio.h>

int main()
{
    char s[1000];
    int i, count = 0;
    int alphabet[26] = {0};

    scanf(" %[^\n]", s);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            alphabet[s[i] - 'a'] = 1;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (alphabet[i] == 1)
        {
            count++;
        }
    }

    if (count == 26)
        printf("true");
    else
        printf("false");

    return 0;
}
