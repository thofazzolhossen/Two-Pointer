#include<bits/stdc++.h>
using  namespace  std;

//Find four elements that sum to a given value
void solve(int ar[], int n,int x)
{
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
                int sum=ar[i]+ar[j]+ar[l]+ar[r];
                if(sum==x)
                {
cout<<"("<<ar[i]<<","<<ar[j]<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                        a=1;
                        l++,r++;
                }
                else if(sum>x)r--;
                else l++;
            }
        }
    }
    if(a==0)cout<<"Result is not found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++)cin>>ar[i];
    int x;
    cin>>x;
    solve(ar,n,x);
}

