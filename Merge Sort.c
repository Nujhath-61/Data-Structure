#include<stdio.h>
int i,j,f,n,a[1000],temp[1000],k;
void merge(int low,int mid,int high)
{
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(a[i]>=a[j])
        {
            temp[k]=a[j];
            j++;
            k++;
        }
        else{
           temp[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k] = a[j];
        k++;
       j++;
    }
  for(f=low;f<=high;f++)
  {
 a[f] = temp[f];
  }


}
void mergeSort(int low,int high)
{
    int mid;
    if(low != high)
    {
        mid=(low+high)/2;
        mergeSort(low,mid);
        mergeSort(mid+1,high);
        merge(low,mid,high);
    }
}
int main ()
{
    printf("Size of Array:\n");
    scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   mergeSort(1,n);
   for(int i=1;i<=n;i++)
   {
       printf("%d ",a[i]);
   }
}

