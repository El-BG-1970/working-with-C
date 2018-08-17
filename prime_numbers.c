#include <stdlib.h>
#include <stdio.h>

int len(int *arr)
{
    int len;
    len = 0;
    while(arr[len])
        len++;
    return (len);
}

int main(){
    int i, j, k, z;
    int prime_num[20];
    int prime;

    prime_num[0]=1;
    prime_num[1]=2;
    prime_num[2]=3;

    for (z=3; z<20; z++)
    {
        prime_num[z]=0;
    }

    i = 3;
    j = 3;

    putchar('g');
    while (i<100)
    {
        i++;
        k=1;
        prime = 1;
        while(k<(len(prime_num)-1))
        {
            while (prime == 1)
            {
                if (prime_num[k]!=0)
                {
                    if (i % prime_num[k] == 0)
                    {
                       prime = 0;
                    }
                }
            }
            if (prime==1)
            {
                prime_num[j] = i;
                j++;
            }
        }
    }
    putchar('g');
    return(0);
}