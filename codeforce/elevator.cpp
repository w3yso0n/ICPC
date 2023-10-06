#include <bits/stdc++.h>
using namespace std;
#define ENDL '\n' 

int main()
{
cin.tie(0);
cout.tie(0);
ios_base::sync_with_stdio(0);
    
    int a;
    set<int> horseshoe;
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        horseshoe.insert(a);
    }
    cout << 4-horseshoe.size();

    return 0;
}