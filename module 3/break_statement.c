#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5;i=i+1)
    {
        if(i==5)
        break;
        printf("%d\n",i);
    }
    return 0;
}