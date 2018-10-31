void sort()
{
    int i,j,;
    for(i=1;i<nov;i++)
    {
        int key=queue[i];
        j=i-1;
        while(j>0 && queue[j]>key)
        {
            queue[j+1]=queue[j];
            j=j-1;
        }
        queue[j+1]=key;
    }

}
