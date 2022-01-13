#include<stdio.h>

int isprime(int num)
{   
    int flag = 1;
    for(int i=2; i<=num; i++)
    {
        if(num % i== 0)
        {
           flag = 0;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    scanf("%d",&n);

    if(isprime(n))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}