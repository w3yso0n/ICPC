#include <iostream>
#include <iomanip> //para usar setprecision
#include <cmath> //para usar trunc

using namespace std;


int main(){
    
    int numero1 = 0, numero2 = 0;;
    for (int i = 0; i < 8; i++)
    {
        cin >> numero2;
        if(numero2 >= numero1 && numero2>=100 && numero2 <= 675 && numero2%25==0){
            
        }else{
            cout << "No";
            return 0;
        }
        numero1 = numero2;
    }
    cout << "Yes";
    return 0 ;
}
