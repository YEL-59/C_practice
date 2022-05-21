#include <stdio.h>
int main()
{
    // printf() displays the string inside quotation
    printf("Hello, World!");
    return 0;
}


#include <stdio.h>
int main()
{
    int num;
    printf("enter an number:");
    scanf("%d",& num);
    printf("cube of number is:%d ", num * num * num);
    return 0;
}


#include <stdio.h>
int main()
{
    int n = 0, m = 0, result = 0;
    printf("enter rhe first number:");
    scanf("%d", &n);
    printf("enter rhe first number:");
    scanf("%d", &m);
    result = n + m;
    printf("the result is:%d ", result);

    return 0;
}


#include<stdio.h>
int main(){
    char a;
    printf("enter your asci char:");
    scanf("%c",&a);
    printf("the value is %d:",a);
int i;
for(i=0;i<=255;i++){
    printf("\nthe value of %c is %d",i,i);
}
return 0;
}

#include<stdio.h>
int main (){
int number;
printf("enter your number:");
scanf("%d",&number);
if(number%2==0){
    printf("%d is even number",number);
}
return 0;
}


#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three number:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is bigest!",a);
    }
    else if (b > a && b > c)
    {
        printf("%d is biger!",b);
    }
    else if (c > a && c > b)
    {
        printf("%d is biger !",c);
    }else if(a==b && b==c){
        printf("all are equale!");
    }else{
        printf("try again");
    }
    return 0;
}


#include<stdio.h>
int main(){
    int j = 1;
    while (j = j + 2, j <= 10)
    {
        printf("%d ", j);

    }

    return 0;

}


#include<stdio.h>
int main(){
    int i,n;
    printf("number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d",i*n);
    }

    return 0;
}


#include<stdio.h>
int main(){
    int i,sum=0;
    for(i=0;i<=10;i++){
        sum=sum+i;
       printf("%d",i);
    }
    printf("sum is:%d",sum);
    return 0;
}


#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("the number is%d and the sum result is%d",n,sum);
    return 0;
}


#include<stdio.h>
int main(){
    int i,n,j,sum=0;
    float avg;
    printf("how many terms you want to sum:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Number-%d: ",i);
        scanf("%d",&j);
        sum +=j;

    }
    avg=sum/n;
    printf("the iven nuber is '%d' the sum is: %d and avg is%f",n,sum,avg);
}



#include<stdio.h>
int main(){
    int i,n,j;
    printf("how many trems you want:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=i*i*i;
        printf("number is %d-cude of %d  is:%d\n",i,i,j);
    }
}


#include<stdio.h>
int main(){
   int i,n,ans;
   printf("how many trems you want:");
   scanf("%d",&n);
   for(i=1;i<=10;i++){
       ans=i*n;
       printf("%d X %d = %d\n",n,i,ans);
   }
}


#include <stdio.h>
int main()
{
    int i, n, j, ans;
    printf("how many trems you wants:");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n; j++)
        {
            ans = i * j;
            printf("%d X %d = %d\t", i, j, ans);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main(){
    int i,n,ans=0;
    printf("how many trems you wants:");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        if (i % 2 != 0){
            printf("%d\n",i);
            ans=ans+i;

        }
    }
    printf("%d",ans);
}


#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the pattern rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){                                               
            printf("*");

        }
        printf("\n");
    }
}


#include <stdio.h>
int main()
{
    int array[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        printf("%d\n",array[i]);

    }
}


/*************************array*************************************/

#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    getarr(arr);
    return 0;
}
 getarr( int arr[])
{

 for(int i=0;i<=4;i++){
     printf("%d\n",arr[i]);
 }
}


#include<stdio.h>
int main()
{
    int i,n,arr[10];
    printf("enter how many elements:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("\nelement %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("the array is:");
    for (i = 0; i <= n; i++)
    {

        printf("%d \n", arr[i]);
    }

    return 0;
}


#include <stdio.h>
int main()
{
    int i, n, arr[10];
    printf("enter how many:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("element %d-", i);
        scanf("%d", &arr[i]);
    }
    printf("the arry is:");
    for (i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("the reverse arry is:");
    for(i=n;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i, n, arr[10],sum=0;
    printf("enter the array size:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("element %d:",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("the arry sum is:%d",sum);
    return 0;
}


#include<stdio.h>
int main()
{
    int i,n[]={1,2,3,4,5};
    int length = sizeof(n)/sizeof(n[0]);
    printf("length of array are:%d",length);
    printf("array are:");
    for(i=0;i<=length-1;i++){
        printf("%d",n[i]);
    }
    printf("reverse are:");
    for(i=length-1;i>=0;i--){
        printf("%d",n[i]);
    }

    return 0;
}


#include<stdio.h>
int main()
{
    int i,arr1[]={10,20,30,40,50};
    int length = sizeof(arr1)/sizeof(arr1[0]);
    printf("%d",length);
    int arr2[length];
    printf("the copy array are:");
    for(i=0;i<=length-1;i++){
        arr2[i]=arr1[i];//copy array
    }
    printf("the copy array are:");
    for (i=length-1;i>=0;i--)//(i = 0; i <= length - 1; i++)
    {
        printf("%d",arr2[i]);
    }
    printf("the array is:");
    for(i=0;i<=length-1;i++){
        printf("%d",arr1[i]);
    }
    return 0;
}


#include <stdio.h>
int main()
{
    int i, n, arr[10], count = 0;
    printf("element:");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("array element are %d:", i);
        scanf("%d", &arr[i]);
    }
    printf("the array are:");
    for (i = 0; i <= n; i++)
    {
        printf("%d", arr[i]);
    }
    for (i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)//dont understant j=i+1;
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);
    return 0;
}


#include<stdio.h>
int main(){
    int i,n,arr[10],mx,mn;
    printf("how many element are:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element - %d :",i);
        scanf("%d",&arr[i]);
    }
    mx = arr[0];
    mn = arr[0];

    for (i = 1; i < n; i++)//max and mini
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }else if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
}


#include<stdio.h>
int main()
{
    int i,n,j=0,k=0;
    int arr1[10],arr2[10],arr3[10];
    printf("how many time you want to array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("element of - %d :",i);
        scanf("%d",&arr1[i]);
    }
    printf("array is:");
    for(i=0;i<n;i++){
        printf("%d",arr1[i]);
    }
    int maximun=arr1[0];
    int minimum =arr1[0];
    for(i=1;i<n;i++){
        if(arr1[i]>maximun){
            maximun=arr1[i];

        }else if(arr1[i]<minimum){
            minimum=arr1[i];
        }
    }
    printf("Maximum element is : %d\n", maximun);
    printf("Minimum element is : %d\n\n", minimum);
    for(i=0;i<n;i++){
       if(arr1[i]%2==0){
           arr2[j]=arr1[i];//even
           j++;
       }else{
           arr3[k]=arr1[i];//odd
           k++;
       }
    }
    printf("\nThe even elements are :\n");
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\nThe Odd elements are :\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}
