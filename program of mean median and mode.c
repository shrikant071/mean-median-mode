#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp,sum=0,mode;
    float mean,median;
    int arr[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    sum=sum+arr[i];
    mean=sum/(float)n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    if(n%2==0)
    {
        median=(arr[n/2]+arr[(n/2)-1])/(float)2;
    }
    else
    median=arr[n/2];
    int maxcount,maxvalue;
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            count++;
        }
        if(count>maxcount)
        {
            maxcount=count;
            maxvalue=arr[i];
        }
    }
    printf("%0.1f\n",mean);
    printf("%0.1f\n",median);
    printf("%d",maxvalue);
    return 0;
}
