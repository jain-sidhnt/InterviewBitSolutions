int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        a[i]=A[i]+i;
        b[i]=A[i]-i;
    }
    int max1=a[0],min1=a[0],max2=b[0],min2=b[0];
    for(int i=0;i<n;i++)
    {
    if(a[i]>max1)
    max1=a[i];
    if(a[i]<min1)
    min1=a[i];
    if(b[i]>max2)
    max2=b[i];
    if(b[i]<min2)
    min2=b[i];
    }
    int c=max1-min1;
    int d=max2-min2;
    if(c>d)
    return c;
    else
    return d;
    
    
    
    
}
