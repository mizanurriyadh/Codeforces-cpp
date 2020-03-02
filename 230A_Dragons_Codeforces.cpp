#include <bits/stdc++.h>

using namespace std;

int main()
{
    pair<int, int> xy[10000];
    int i, s, n, flag=0;
    
    cin>>s>>n;
    
    for(i=0; i<n; i++)
    {
        cin>>xy[i].first>>xy[i].second;
    }
    
    sort(xy, xy+n);
    
    for(i=0; i<n; i++)
    {
        if(s>xy[i].first)
        {
            s = s + xy[i].second;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
    return 0;
}