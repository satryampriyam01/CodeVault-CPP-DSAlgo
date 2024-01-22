#include<stdio.h>
int main()
{
    int a[100], i, e, j = 0, s = 0, n, pos, t, k = 0, l = 0;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter the element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &e);
        s = s + e;
        while (j < s)
        {
            a[j] = e;
            j++;
        }

    }
    t = s - 1;
    printf("The entered array is\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nEnter the element and its position to enter\n");
    scanf("%d%d", &e, &pos);
    if (pos == 1)
    {
        while (t >= 0)
        {
            a[t + e] = a[t];
            t--;

        }
        while (k < e)
        {
            a[k] = e;
            k++;
        }
        printf("The array is\n");
        for (i = 0; i < s + e; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    else if (pos == n)
    {
        while (l < e)
        {
            a[s + l] = e;
            l++;
        }
        printf("The array is\n");
        for (i = 0; i < s + l; i++)
        {
            printf("%d\t", a[i]);
        }
    }
    else
    {
        int chk = 0, sa;

        for (i = 0; i < s; i++)
        {
            if (a[i] != a[i + 1])
            {
                sa = i + 1;
                chk++;
                if (chk == pos - 1)
                {
                    while (t >= i + 1)
                    {
                        a[t + e] = a[t];
                        t--;
                    }
                    while (i + 1 < sa + e)
                    {
                        a[i + 1] = e;
                        i++;
                    }

                    printf("The array is\n");

                    for (i = 0; i < s + e; i++)
                    {
                        printf("%d\t", a[i]);

                    }
                }
            }
        }


    }




}