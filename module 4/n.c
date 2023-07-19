#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&& a<='z')
    {
        //Capitall letter
        int ans=a-32;
        printf("%c",ans);
    }
    else{
        int ans=a+32;
        printf("%c",ans);
    }
    return 0;
}