#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int a[n+1];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int index,num;
    scanf("%d%d",&index,&num);

    for(i=n;i>index;i--)
    {
        a[i]=a[i-1];
    }

    a[index]=num;

    for(i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}
