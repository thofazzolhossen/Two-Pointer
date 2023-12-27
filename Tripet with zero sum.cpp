#include<bits/stdc++.h>
using  namespace  std;

//Tripet with zero sum
void solve(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        unordered_set<int>s;
        for(int j=i+1;j<n;j++)
        {
            int x = -(ar[i]+ar[j]);
            if(s.find(x)!=s.end())
            {
cout<<"("<<x<<","<<ar[i];
cout<<","<<ar[j]<<")"<<endl;
            }
            else{
                s.insert(ar[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    solve(ar,n);
}







