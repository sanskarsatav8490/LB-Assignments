#include<stdio.h>

void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[50];

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}