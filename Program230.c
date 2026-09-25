#include<stdio.h>

void CountALL(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

   while(*str != '\0')
   {
        if((*str >= 'A') &&( *str <= 'Z'))
        {
            iCountCapital++;
        }
       else
       {
            iCountSmall++;
       }
        str++;
   }
    printf("count of Capital :%d\n",iCountCapital);
    printf("count of Small :%d\n",iCountSmall);
}

int main()
{
    char Arr[50]= {'\0'};

    printf("Enter the String :\n");
    scanf("%[^'\n']s",Arr);

    CountALL(Arr);

    return 0;
}