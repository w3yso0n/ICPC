#include <iostream>

using namespace std;

int main(){
    int veces;
    cin >> veces;
    int num1[veces], num2[veces], num3[veces];
    for (int i = 0; i < veces; i++)
    {
        cin >> num1[i] >>num2[i]>>num3[i];
    }   
    
    for (int i = 0; i < veces; i++)
    {
        if(num1[i] > num2[i] ){
        if (num1[i] > num3[i])
        {
            if(num2[i]>num3[i]){
                cout << num2[i];
            }else
            {
                cout << num3[i];
            }
            
        }else{
            cout << num1[i];
        }
        
    }else{
        if(num2[i] < num3[i]){
            cout << num2[i];
        }else{
            if(num1[i] < num3[i]){
                cout << num3[i];
            }else{
                cout << num1[i];
            }
        }
    }
    cout << endl;
    }
    
}