#include<stdio.h>

void Exam_Timing(char ch)
{
    if((ch=='A')||(ch=='a'))
    {
        printf("Your Exam at 7 AM");
    }
    if((ch=='B')||(ch=='b'))
    {
        printf("Your exam at 8:30 AM");
    }
    if((ch=='C')||(ch=='c'))
    {
        printf("Your Exam at 9:20 AM");
    }
    if((ch=='D')||(ch=='d'))
    {
        printf("Your Exam at 10:30 AM");
    }
}

int main()
{
    char cValue ='\0';

    printf("Enter the Division of Student:");
    scanf("%c",&cValue);

    Exam_Timing(cValue);

    return 0 ;
}
