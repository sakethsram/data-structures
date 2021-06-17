#include "stdio.h"
void dump_array(int *a, int n)
{
    int i = 0;
    for(i=0; i <= n-1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int i=0,j=0,temp,flag,n=5;
    int a[ ]={9, 6, 0, 2, 6, -1, -6, 8, 5, 0, 1, 7};
    n = sizeof(a)/sizeof(int);

    dump_array(a, n);

    for(i=1;i<=n-1;i++)
    {
        temp = a[i];
        flag=0;
        for(j = i-1; j >= 0; j--)
        {
            printf("temp :%d\n", temp);
            printf("j    :%d\n", j);
            if(temp < a[j])
            {
                a[j+1]=a[j];
                printf("a[j]   :%d\n", a[j]);
                printf("a[j+1] :%d\n", a[j+1]);
            }
            else
            {
                a[j+1]=temp;
                flag=1;
                break;
            }   

            //printf("%d %d\n", i, j);
        }  

        printf("temp :%d\n", temp);
        printf("flag    :%d\n", flag);
        printf("j    :%d\n", j);
        if ( flag != 1)
        {
            a[j+1]=temp;
            //break;
        }
        printf("\n");
        dump_array(a, n);
    }
}


