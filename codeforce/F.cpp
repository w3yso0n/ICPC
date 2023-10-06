#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ENDL '\n' 

int main()
{
cin.tie(0);
cout.tie(0);
ios_base::sync_with_stdio(0);
    
    string a, aux1, aux2;
    cin >>a;
    int mayor = 0;

    for (int i = 0; i < a.size(); i++)
    {
        for (int x = 0; x <= a.size() && mayor<a.size()-i; x++)
        {
            aux1 = a.substr(i,x);
            aux2= aux1;
            reverse(aux2.begin(), aux2.end());
            //cout << aux1 << " - " << aux2 << ENDL;
            if(aux1 == aux2)
            {
                int p = aux1.size();
                mayor = max(mayor,p);
            }
        }
        
    }

    cout << mayor;
    
    return 0;
}