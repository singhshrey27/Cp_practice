 #include<stdio.h>
 void main()
 {
     int n;
     printf("Enter the size of the array you want to sort\n");
     scanf("%d",&n);
     int arr[n];
     printf("Enter the elements of the array\n");
     for(int i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     int j,temp=0;
     for(int i=1;i<n;i++)
     {
         temp=arr[i];
         j=i-1;
         while(j>=0&&arr[j]>temp)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=temp;
     }
     for(int i=0;i<n;i++)
     {
         printf("%d  ",arr[i]);
     }

    
 }