#include<stdio.h>

void StringLower(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            *str = *str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    StringLower(Arr);
    printf("Lower string: %s\n",Arr);


    return 0;
}