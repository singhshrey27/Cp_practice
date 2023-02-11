#include<iostream>
using namespace std;
int main()
{
     long int n,a[1000000],q,sumodd=0,sumev=0,task,r,l,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    while (q>0)
    {
        
        cin>>task;
        switch(task)
        {
        case 1:
        
        cin>>r>>l>>x;
        for(int i=r;i<=l;i++)
        {
            a[i-1]=a[i-1]+x;
        }
        r=0;l=0;x=0;
        break;
        
            
        
        case 2:
        
        for(int i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                int sumodd=sumodd+a[i-1];
            }
        }
        cout<<sumodd<<endl;
        sumodd=0;
        break;
        

        case 3:
        
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
          sumev=sumev+ a[i-1]; 
        }
        }
        cout<<sumev<<endl;
        sumev=0;
        break;
        
        }
        q--;task=0;
    }
    

    return 0;
}
