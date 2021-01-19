#include<stdio.h>
int max();
int main()
    {
        int a,b,c,d,ans;
        scanf("%d\t%d\t%d\t%d\t",&a,&b,&c,&d);
        ans=max(a,b,c,d);
        printf("%d",ans);
        return 0;
    }
max(int *a,int *b,int *c,int *d)
{
    int x,y,z;
    x=(a>b)? a:b;
    y=(x>c)? x:c;
    z=(y>d)? y:d;
    return z;
}   
