#include<stdio.h>
int main()
{
    long long int monsHeal[10000],n,i,j,q,x,y,k,count=0;
    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&monsHeal[i]);
    }
    scanf("%lld",&q);

    for(i=0;i<q;i++)
    {
        count=0;
        scanf("%lld %lld",&x,&y);
        for(j=0;j<n;j++)
        {
            k=j&x;
            if (k==j)
            {

                monsHeal[j]=monsHeal[j]-y;

            }
        }


        for(j=0;j<n;j++)
        {
            if(monsHeal[j]>0)
            {
                count++;
            }
        }
        printf("%lld\n",count);

    }






    return 0;

}




