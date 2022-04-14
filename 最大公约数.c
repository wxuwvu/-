#include<stdio.h>
int main()
{
   /* int a,b,temp=1;
    scanf("%d",&a);
    scanf("%d",&b);
    while (temp!=0)
    {
        temp=a%b;
        a=b;
        b=temp;

    }
    printf("%d",a);
    return 0;*/

    int a,b,m,i,temp;
    scanf("%d%d",&a,&b);
    m=a;
    if(a>b) m=b;
    for(i=2;i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            temp=i;
    }
    printf("%d",temp);

}
