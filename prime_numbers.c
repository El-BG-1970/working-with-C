#include <stdlib.h>
#include <stdio.h>
#include <D:\coding\cprog\exos_piscine_42\ft_putstr-putnbr.c>

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
    int *prime_num;
    int prime, max, max2;

    prime_num = (int*)calloc(5, sizeof(int));

    prime_num[0]=1;
    prime_num[1]=2;
    prime_num[2]=3;

    i = 3;
    j = 3;
    max = len(prime_num);

    putchar('g');
    ft_putnbr(max);
    putchar('y');

    for (i=4; i=10; i++)
    {
        k = 1;
        prime = 1;
	while (k<max)
	  {
	    if (i % *prime_num[k] == 0)
	      {
		prime = 0;
		break;
	      }
	    else
	      k++;
	  }
        putchar(' ');
        if (prime = 1)
        {
            prime_num[j] = i;
            j++;
        }
    }
    putchar('n');
    max2 = len(prime_num);
    ft_putnbr(max2);
    return(0);
}
