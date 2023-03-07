#include<stdio.h>
#include<stdbool.h>

bool Check_vowels(char *ptr)
{
    int iCnt = 0 ,i = 0;
    while(ptr[i]!='\0')
    {
        if((ptr[i]=='a')||(ptr[i]=='e')||(ptr[i]=='i')||(ptr[i]=='o')||(ptr[i]=='u'))
        {
            break;
        }
        i++;
    }
    if(ptr[i]=='\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Brr[20];
    bool bRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n']s",Brr);

    bRet = Check_vowels(Brr);
    if(bRet == true)
    {
        printf("Vowel is present in string");
    }
    else
    {
        printf("Vowel is not present in string");
    }
    return 0;
}