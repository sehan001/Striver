/hashing of all characters in cpp
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int b[256]={0};
    for(int i=0;i<a.size();i++)
    {
        b[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        char c;
        cin>>c;
        cout<<b[c]<<endl;
    }
}
