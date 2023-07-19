#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i=i+1)
    {
        printf("%d\n",i);
        if(i==5)
        break;
    }
    return 0;
}