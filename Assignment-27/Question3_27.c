#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0, iCap = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
        str++;
    }
    return (iSmall - iCap);
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]", arr);

    iRet = Difference(arr);

    printf("%d\n", iRet);

    return 0;
}