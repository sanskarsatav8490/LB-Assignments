#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[60];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return 0;
}