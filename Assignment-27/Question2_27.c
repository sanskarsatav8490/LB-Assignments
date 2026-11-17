#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    iRet = CountSmall(arr);

    printf("%d\n", iRet);

    return 0;
}