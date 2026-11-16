// Question: Accept two numbers from the user and display the first number the number of times specified by the second number.

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}