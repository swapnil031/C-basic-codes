#include<stdio.h>
int partition(int a[],int l,int h)
{
    //considering the last no as pivot
    int pivot;
    pivot=a[h];
    int pi=l;
    for(int i=l;i<h;i++)
    {
        if(a[i]<=pivot)
        {
            //swapping the lowest number than the pivot with partition index
            int temp=a[i];
            a[i]=a[pi];
            a[pi]=temp;
            pi++;  
        }
    }
     //swapping the pivot/end element with partition index 
        int temp2=a[pi];
        a[pi]=a[h];
        a[h]=temp2;
        return pi;

}
void qsort(int a[],int l,int h)
{
    if(l<=h)
    {
        int m=partition(a,l,h);
        qsort(a,l,m-1);
        qsort(a,m+1,h);
    }
}
/*void printarray(int a[],int q, int n)
{
    for(int i=q;i<=n;i++)
        printf("%d ",a[i]);
}*/
int main()
{
    int a[20],n;
    printf("enter the limit of the array: ");
    scanf("%d",&n);
    printf("enter the digits");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a,0,n-1);
    //printarray(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}