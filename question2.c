#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    int a[1000];

    scanf("%d", &n);
    for (int l = 0; l < n; l++)
    {
        scanf("%d", &a[l]);
    }
    int count = 0;
    int i = 0;
    int j;
    while (i < n - 1)
    {
        if (a[i + 1] >= a[i])
        {
            i++;
        }
        else
        {
            j = i + 1;
            while (a[j] < a[i])
            {
                if (j < n - 1)
                {
                    int temp = a[i] - a[j];
                    count = count + temp;
                    j++;
                    
                }
                else
                {
                    
                    j = j - 1;
                    while (j > i)
                    {
                        int temp = a[i] - a[j];
                        count = count - temp;
                        j--;
                    }
                    i++;
                    j = j + 2;
                    if(a[i] == 0){
                        int temp2 = a[j] - a[i];
                        count = count + temp2;
                    }
                    
                }
            }

            i = j;
        }
    }
    printf("%d", count);
}