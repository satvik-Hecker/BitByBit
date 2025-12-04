#include <bits/stdc++.h>
using namespace std;

class ArrayQueue{
    int *arr;
    int start,end;
    int currSize,maxSize;
    public:
    ArrayQueue(){
        arr= new int[10];
        start=-1;
        end=-1;
        currSize=0;
        maxSize=10;
    }
    void push(int x){
        if(currSize==maxSize){
            cout<<"Q is full"<<endl;
            return;
        }
        if(end==-1){
            start=end=0;
        }else{
            end=(end+1)%maxSize;
        }
        arr[end]=x;
        currSize++;
    }

    int pop(){
        if(start == -1){
            cout<<"Q is empty"<<endl;
            return -1;
        }
        int popped = arr[start];
        if(currSize==1){
            start=end=-1;
        }else{
            start =(start+1)%maxSize;
        }
        currSize--;
        return popped;
    }

    int peek(){
        if(currSize==0){
            cout<<"Q is empty"<<endl;
            return -1;
        }
        return arr[start];
    }

    bool isEmpty(){
        return (currSize==0);
    }
};