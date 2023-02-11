#include<iostream>
using namespace std;
int main()
{
   long int q,num,count=0,rem=0;
    cin>>q;
    while(q>0)
     {
         cin>>num;
         while(num!=0)
         {
             rem=num%10;
             if(rem==4)
             {
                 count++;
             }
                 num=num/10;
             rem=0;
         }
         cout<<count<<endl;
         num=0;count=0;q--;
       }

    return 0;
}