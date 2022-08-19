int binary_search(int *a[],int low,int mid,int high,int num)
{
    while(1)
    {
    mid=(low+high)/2;
    if(a[mid]==num)
    {return mid;}
    if(a[mid]>num)
    {
        high=mid-1;
        continue;
    }
    if(a[mid]<num)
    {
        low=mid+1;
        continue;
    }

    }
}