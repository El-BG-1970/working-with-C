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
    int i, j, k;
    int *prime_num;
    short prime;

    putchar('g');
    prime_num = (int*) malloc(4 * sizeof(int));

    prime_num[0]=1;
    prime_num[1]=2;
    prime_num[2]=3;

    i = 3;
    j = 3;
    k = 0;
    prime = 1;

    putchar('o');
    while (i<100)
    {
        i++;
        k=0;
        while(k<len(prime_num))
        {
            while (prime == 1)
            {
                if (i % prime_num[k] == 0)
                {prime = 0;}
            }
            if (prime==1)
            {
                prime_num[j] = i;
                j++;
            }
        }
    }
    putchar('.');
    return(0);
}