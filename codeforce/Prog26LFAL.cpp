/* Luis Felipe Avila Leyva
    Fundamentos de Programación
    Prog26LFAL
    30-Septiembre-2023
    */

#include <bits/stdc++.h>
using namespace std;
#define ENDL '\n'

int main()
{
    int num=0;
    cout << "Ingresa un numero para generar su tabla de multiplicar" << ENDL;
    cin >> num;

    for (int i =1; i <= 10; i++)
    {
        cout<< i <<" x " << num <<" = " << i*num << ENDL;
        
    }
    return 0;
}