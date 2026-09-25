#include<stdio.h>

int main()
{
    char Name[50]= {'\0'};
    printf("Enter your Name :");
    scanf("%s",Name);

    printf("Hello :%s\n",Name);
    return 0;
}