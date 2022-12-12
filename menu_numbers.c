#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    
    int n,i=0,j=0,sum=0,number=0;
    int arr1[10];
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    
    int ch=0,even_count=0,odd_count=0;
    while(1)
    {
        
        printf("\n \n");
        printf("Menu:\n");
        printf("1. Even and Odds \n");
        printf("2. Primes \n");
        printf("3. Perfect numbers \n");
        printf("4. Armstrong \n");
        printf("5. Palindromes \n");
        printf("6. Factorial \n");
        printf("7. Exit\n");
        printf("Enter your choice :  ");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1:
            {
                
                printf("Even numbers in the array are: \n");
                for(int i=0; i<n; i++)
                   {
                     if(arr[i]%2==0)
                     {
                         printf("%d ", arr[i]);
                         even_count++;
                     }
                     
                   }
                printf("\neven count: %d",even_count);
                
                printf("\nOdd numbers in the array are: \n");
                for(int i=0; i<n; i++)
                   {
                     if(arr[i]%2!=0)
                     {
                         printf("%d ", arr[i]);
                         odd_count++;
                     }
                   }
                 printf("\nodd count: %d",odd_count);
                
                break;
            }
            case 2:
            {
                printf("prime numbers: \n");
                int count3=0;
                for(i=0;i<n;i++)
                    {
                       int counter=0;
                       for(j=2;j<arr[i];j++)
                       {
                             if(arr[i]%j==0)
                             {
                                   counter=1;
                                   break;
                             }
                       }
                       if(counter==0)
                       {
                           if (arr[i]!=1)
                           {
                                printf("\t %d",arr[i]);
                                count3++;
                           }
                       }
                     }
                printf("\nNumber of primes: %d",count3++);
                break;
                
            }
            
            case 3:
            {
                printf("\nPerfect Numbers:\n");
                int x,sum1=0,rem;
                int count4=0;
                for (i=0;i<n;i++)
                {
                    number=arr[i];
                    sum1=0;
                    for (x=1;x<arr[i];x++)
                    {
                        rem=arr[i]%x;
                        if(rem==0)
                        {
                            sum1=sum1+x;
                            
                        }
                        
                    }
                    if(sum1==arr[i])
                    {
                        printf("%d\n",arr[i]);
                        count4++;
                    }
                    
                }
                printf("\nNumber of perfect numbers: %d",count4++);
                break;
                     
            }
            
            case 4:
            {
                printf("\nArmstrong numbers:\n");
                int Temp,Reminder,sum3,Times,Number;
                int count5=0;
                for (i=0;i<n;i++)
                {
                    Number=arr[i];
                    sum3=0;
                    Times=0;
                    Temp = Number;
                    while (Temp != 0) 
                        {
                          Times = Times + 1;
                          Temp = Temp / 10;
                        }
                   
                    Temp = Number;
                    while( Temp > 0)
                       {
                         Reminder = Temp %10;
                         sum3 = sum3 + pow(Reminder, Times);
                         Temp = Temp /10;
                       }
                    
                    if ( Number == sum3 )
                    {
                        printf("%d\n", arr[i]);
                        count5++;
                    }
                          
                    
                }
                printf("\nNumber of armstrong numbers\n %d",count5);
                break;
                
            }
            
            case 5:
            {
                int count6=0;
                printf("\npalindrome numbers:\n");
                int number5,sum5=0,temp5,r5;
                for(i=0;i<n;i++)
                {
                    sum5=0;
                    number5=arr[i];
                    temp5=number5;
                    while(number5>0)
                    {
                        r5=number5%10;
                        sum5=(sum5*10)+r5;
                        number5=number5/10;
                    }
                    if(temp5==sum5)
                    {
                        printf("%d\n",arr[i]);
                        count6++;
                    }
                    
                }
                printf("\n Number of palindromes:%d\n",count6);
                
                break;
                
            }
            
            case 6:
            {
                printf("\nFactorial of given numbers:\n");
                unsigned long long fact;
                int number6,j;
                
                for(i=0;i<n;i++)
                {
                    fact=1;
                    number6=arr[i];
                    if (number6< 0)
                    {
                        printf("error");
                    }
                    
                    else 
                    {
                        for (j = 1; j <= number6; j++) 
                        {
                            fact *= j;
                            
                         }
                         printf("%llu\n",fact);
                    }
                }
                
                break;
            
            }
            
            case 7:
            {
                printf("exit");
                exit(0);
                break;
            }
    }
   
}
}
