#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
 int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int index;
    scanf("%d",&index );

    for(i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}

