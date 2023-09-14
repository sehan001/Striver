/*finding frequency using map function*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int>p;
    for(int i=0;i<n;i++)
    {
        p[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
        cout<<p[m];
    }
}
