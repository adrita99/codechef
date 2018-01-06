#include<stdio.h>
int main()
{
    int testCase,a,b,c,d,i;
    scanf("%d",&testCase);
    for(i=0;i<testCase;i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if ((a+b+c)>d && (a+b+d)>c && (b+c+d)>a && (a+c+d)>b )
        {
            if((a==b && c==d) || (a==c && b==d) || (a==d && b==c))
            {
                printf("YES\n");
            }
            else printf("NO\n");

        }
        else printf("NO\n");


    }


    return 0;

}


