#include <bits/stdc++.h>
using namespace std;

class ArrayStack{
    private:
    int *arr;
    int topI;
    int capacity;

    public:
    ArrayStack(int size = 1000){
        capacity=size;
        topI=-1;
        arr= new int[capacity];
    }
    ~ArrayStack(){
        delete []arr;
    }

    void push(int x){
        if(topI>=capacity-1){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        topI++;
        arr[topI]=x;
    }

    int pop(){
        if(topI==-1){
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int val=arr[topI];
        topI--;
        return val;
    }

    int top(){
        if(topI==-1){
            cout<<"Stack Underflow";
            return -1;
        }
        return arr[topI];
    }
    bool isEmpty(){
        return topI==-1;
    }
};