int indexer(int num,int a[],int cp[],int res)
{
        for(int j=0;j<num;j++)
        {
            if(cp[j]==a[res])
            {
                return j;
            }
        }
}