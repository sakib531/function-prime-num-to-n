#include<stdio.h>
int isPrime(int n)
    {
        int flag = 0;
    for(int i = 2; i<n; i++) {
        if(n%i==0)
            {
                flag++;
                break;
            }
    }
    if(flag==0)
            {
                return 1;
            }
        else{
                return 0;
            }
    }
void  printPrimes(int x , int y)
    {
    for (int i=x;i<=y;i++){
         if (isPrime(i) == 1){
                printf("%d\n",i);
            }
        }
    }
int main()
    {
    int x,y;
    printf("Enter  first range number : ");
    scanf("%d",&x);
    printf("Enter  second range number : ");
    scanf("%d",&y);
    printPrimes(x,y);
    return 0;
    }
