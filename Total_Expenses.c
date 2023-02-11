#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        float qn,pr,totp;
        scanf("%f %f",&qn,&pr);
        totp=qn*pr;
        if(qn>1000)
        {
            totp=totp-0.10*totp;
        }
        printf("%0.6f\n",totp);
        
    }
    return 0;
}