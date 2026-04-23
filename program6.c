#include<stdio.h>

int add(int a, int b)
{
    int sum = 0;
    sum = a + b;    //business logic

    return sum;
}
int main()
{
    int i = 0, j = 0, ans = 0;

    printf("enter first no.:\n");
    scanf("%d",&i);

    printf("enter second no.:\n");
    scanf("%d",&j);

    ans = add(i,j);
    printf("addition is :%d\n",ans);

    return 0;
}