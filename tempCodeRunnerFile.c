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
// #include<stdio.h>
// int main()
// {
//     int i,n,arr[100],count=0;
//     printf("size of array:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("element of %d is:",i);
//         scanf("%d",&arr[i]);

//     }
//     printf("The array is:");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         for(int j=i+1;j<n;j++){
//             if(arr[j]==arr[i]){
//                  count++;
//                  break;
//             }

//         }
//     }
//     printf("the duplicate array number are:%d",count);

//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int number,count=0;
//     printf("Enter An Number : ");
//     scanf("%d",&number);

//     while(number>0){
//         number=number/10;
//         count=count+1;
//     }
//     printf("the number is %d and digit is %d : ",number,count);
//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int moneylist[8]= {500, 100, 50, 20, 10, 5, 2, 1};
//     int amount,temp,i;
// printf("Enter an amount: ");
// scanf("%d",&amount);
// temp=amount;

//         for(i=0;i<8;i++){
//           printf("\n %d Notes is=%d",moneylist[i],temp/moneylist[i]);
//           temp=temp%moneylist[i];
//         }
      
    
// }


/* C Program to Find factors of a number using for loop */

// #include <stdio.h>
 
// int main()
// {
//   int i, Number; 
   
//   printf("\n Please Enter any number to Find Factors \n");
//   scanf("%d", &Number);
 
//   printf("\n Factors of the Given Number are:\n");
//   for (i = 1; i <= Number; i++)
//    {
//      if(Number%i == 0)
//         {
// 		 printf(" %d  ", i);
// 		}
//    }
 
//   return 0;
// }
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//   int Number, Temp, Reminder, Times =0, Sum = 0;
 
//   printf("\nPlease Enter number to Check \n");
//   scanf("%d", &Number);
  
//   //Helps to prevent altering the original value
//   Temp = Number;
//   while (Temp != 0) 
//    {
//       Times = Times + 1;
//       Temp = Temp / 10;
//    } 
//   Temp = Number;
//   while( Temp > 0)
//    {
//      Reminder = Temp %10;
//      Sum = Sum + pow(Reminder, Times);
//      Temp = Temp /10;
//    }
 
//   printf("\n Sum of entered number is = %d\n", Sum);

//   if ( Number == Sum )
//       printf("\n %d is Armstrong Number.\n", Number);
//   else
//       printf("\n %d is not.\n", Number);
 
//   return 0;
// }



// #include<stdio.h>
// int main(){
//     int number,count=0;
//     printf("Enter an number : ");
//     scanf("%d",&number);

//     while(number!=0){
//         number=number/10;
//         count=count+1;
//     }
//      printf("\n Number of Digits in a Given Number = %d", count);
//     return 0;
// }
//gcd
// #include<stdio.h>
// int main(){
//      int Num1, Num2, i, GCD;

//     printf("Please Enter two integer Values \n");
//     scanf("%d %d", &Num1, &Num2);

//     for(i = 1; i <= Num1 && i <= Num2; i++)
//     {
//         if(Num1 % i == 0 && Num2 % i == 0)
//             GCD = i;
//     }

//     printf("GCD of %d and %d is = %d", Num1, Num2, GCD);
//     return 0;
// }

//generic root of a given number;

// #include <stdio.h>

// int main()
// {
//   int Number, Sum, Reminder;

//   printf("\n Please Enter any number\n");
//   scanf("%d", &Number);

//   while(Number >= 10)
//   {
//     for (Sum=0; Number > 0; Number= Number/10)
//     {
//       Reminder = Number % 10;
//       Sum=Sum + Reminder;
//     }
//     if(Sum >= 10)
//     {
//       Number = Sum;
//     }
//     else
//     {
//       printf("\n The Generic Root of a Given Number = %d", Sum);
//       return 0;
//     }
//   }
// }


#include<stdio.h>
int main(){
    int Number,count,last_digit;
    printf("enter an number:");
    scanf("%d",&Number);

    printf("Count the digit....");
    while(Number!=0){
        Number=Number/10;
        count=count+1;
    }
    printf("Count the digit.... is %d:",count);
    last_digit=Number%10;
    
  	printf(" \n The Last Digit of a Given Number %d =  %d", Number,last_digit);
    return 0;
}

//Calculate Length of String without Using strlen() Function
// #include <stdio.h>
// int main() {
//     char s[] = "Programming is fun";
//     int i;

//     for (i = 0; s[i] != '\0'; ++i);
    
//     printf("Length of the string: %d", i);
//     return 0;
// }

//prime number check
#include <stdio.h>

int main() {

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 1 for non-prime number
  if (n == 0 || n == 1)
    flag = 1;

  for (i = 2; i <= n / 2; ++i) {

    // if n is divisible by i, then n is not prime
    // change flag to 1 for non-prime number
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  // flag is 0 for prime numbers
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
/* C Program to count Alphabets Digits and Special Characters in a String */
 
#include <stdio.h>
 
int main()
{
  	char str[100];
  	int i, alphabets, digits, special;
  	i = alphabets = digits = special = 0;
 
  	printf("\n Please Enter any String  :  ");
  	gets(str);
  	
  	while (str[i] != '\0')
  	{
  		if( (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') )
  		{
  			alphabets++;  	
 		}
  		else if (str[i] >= '0' && str[i] <= '9')
  		{
  			digits++;  	
  		}    
  		else
    		special++;
    	i++;
	}
    printf("\n Number of Alphabets in this String = %d", alphabets);  
	printf("\n Number of Digits in this String = %d", digits);  
	printf("\n Number of Special Characters in this String = %d", special);  	
  
  	return 0;
}