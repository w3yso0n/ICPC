/* Luis Felipe Avila Leyva
    Fundamentos de Programación
    Prog27LFAL
    30-Septiembre-2023
    */

#include <bits/stdc++.h>
using namespace std;
#define ENDL '\n'

int main()
{
    int resp = 0;
    
    do
    {
        int r1 = 0,r2 =1,sum = 0;
        
        for (int i = 0; i < 15; i++)
        {
            
            cout << r2 <<" - ";
            sum = r2+r1;
            r1 = r2;
            r2 = sum;
        }
        
        cout <<"Deseas volver a imprimir la sucesion Fibonacci? 1-Si / 2-No" << ENDL;
        cin >> resp;
    } while (resp == 1);
    
    return 0;
}