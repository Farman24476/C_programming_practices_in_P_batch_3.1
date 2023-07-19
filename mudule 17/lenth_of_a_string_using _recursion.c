#include<stdio.h>
int fun(char ar[],int i)
{
    if(ar[i]=='\0')return;
    int length=fun(ar,i+1);
    return length+1;

}
int main()
{
    char ar[6]="Farman";
    int length=fun(ar,0);
    printf("%d\n",length);
    return 0;
}