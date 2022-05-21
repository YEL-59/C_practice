/*#include<stdio.h>
int main(){
   int i,n,m,arr[20];
   printf("how many number youwant:");
   scanf("%d",&n);
   for(i=0;i<n;i++){
       printf("element %d:",i);
       scanf("%d",&arr[i]);
   }
   printf("the array are:");
   for(i=0;i<n;i++){
       printf("%d",arr[i]);
   }
   int newarr[n];
   int max=arr[0];
   int min=arr[0];
   for(i=1;i<n;i++){
       if(arr[i]>max){
           max=arr[i];


       }else if(arr[0]<min){
           min=arr[i];

       }
   }
   printf("max is:%d",max);
   printf("min is:%d", min);

   return 0;
}

#include<stdio.h>
int main(){
    int i,n,j,ans=0;
    printf("how many number you want :");
    scanf("%d",&n);
    for(j=0;j<=n;j++){
        if(j%2!=0){
            printf("%d",j);
            ans=ans+j;
        }

}
printf("sum is:%d", ans);

return 0;
}
#include<stdio.h>
int main(){
    int i,n,arr[100],sum=0;
    printf("array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element of %d -:",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("the fullarray is:");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("the fullarray sum is:%d",sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int i, n,j, arr[100],tem;
    printf("array size:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element of %d -:", i);
        scanf("%d", &arr[i]);

    }
    printf("the fullarray is:");
    for (i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    for (i = 0; i < n; i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;

            }
        }
    }
    printf("the sortedarray are:");
    for (i = 0; i < n; i++){
        printf("%d",arr[i]);
    }
    printf("\n\n");
    return 0;
}




#include <stdio.h>
int main()
{
    int i, n, j, arr[100];
    printf("size of array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element of %d is:", i);
        scanf("%d", &arr[i]);
    }
    printf("the array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("reverse arris :");
    for(i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }
    printf("the sorted array are:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
   

    return 0;
}*/
#include<stdio.h>
int main()
{
    int i,n,arr[100],count=0;
    printf("size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element of %d is:",i);
        scanf("%d",&arr[i]);

    }
    printf("yhe array is:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                 count++;
                 break;
            }

        }
    }
    printf("the duplicate array number are:%d",count);
    return 0;
}
