
#include <bits/stdc++.h>
using namespace std;
#define ENDL '\n' 

class MyCircularDeque {
public:
    deque<int> abc; // creo una cola para manejar los datos
    int tamano; // una variable con el tamaño de la cola

    MyCircularDeque(int k) {
        tamano = k;
    }
    
    bool insertFront(int value) {
        if(isFull() == true){ // primero evaluo si la cola no esta llena y se puede insertar un valor
            return false;
        }
        
        abc.push_front(value);
        return true;
        
    }
    
    bool insertLast(int value) {
        if(isFull() == true){
            return false;
        }
        
        abc.push_back(value);
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty() == true){
            return false;
        }
        abc.pop_front();
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty() == true){
            return false;
        }
        abc.pop_back();
        return true;
    }
    
    int getFront() {
        if(isEmpty() == true){
            return -1;
        }
        return abc.front();
    }
    
    int getRear() {
        if(isEmpty() == true){
            return -1;
        }
        return abc.back();
    }
    
    bool isEmpty() {
        if(abc.size()==0){
            return true;
        }
        
        return false;
    }
    
    bool isFull() {
        if(abc.size()==tamano){
            return true;
        }
        
        return false;
    }
};

int main()
{
    
    MyCircularDeque* obj = new MyCircularDeque(3);
    bool param_1 = obj->insertFront(3);
    bool param_2 = obj->insertLast(1);
    bool param_3 = obj->deleteFront();
    bool param_4 = obj->deleteLast();
    int param_5 = obj->getFront();
    int param_6 = obj->getRear();
    bool param_7 = obj->isEmpty();
    bool param_8 = obj->isFull();
    return 0;
}




