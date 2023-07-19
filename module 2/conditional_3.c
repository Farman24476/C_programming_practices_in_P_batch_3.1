#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >=5000)
    {
        printf("I will go to penag\n");
        if(tk >=10000)
        {
            printf("I will go to KL\n");
        }
        else
        {
            printf("cameback");
        }
    }
    else
    {
        printf(" I will cameback to hostel");
    }
    return 0;
}