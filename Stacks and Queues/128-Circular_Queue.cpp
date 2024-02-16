#include<iostream>
using namespace std;
#define N 5
int arr[N];
int front = -1;
int rear = -1;
void en(int x){
    if((rear+1)%N == front){
        cout<<"Overflow"<<endl;
    }
    else if(front==-1 && rear==-1){
        front = rear = 0;
        arr[rear] = x;
        cout<<x<<" Enqueued"<<endl;
    }
    else{
        rear = (rear+1)%N;
        arr[rear] = x;
        cout<<x<<" Enqueued"<<endl;
    }
}
int de(){
    int val;
    if(front==-1 && rear==-1){
        cout<<"Underflow"<<endl;
    }
    else if(front==rear){
        cout<<"Underflow"<<endl;
        front = rear = -1;
    }
    else{
        val=arr[front];
        front=(front+1)%N;
        // int val;
        // val=arr[front];
        cout<<val<<" Dequeued"<<endl;

    }
    return val;
}
void display(){
    if(front==-1 && rear==-1){
        cout<<"Underflow"<<endl;
    }
    else{
        int i = front;
        while(i!=rear){
            cout<<arr[i]<<",";
            i = (i+1)%N;
        }
        cout<<arr[i]<<endl;
        }
}
int main()
{
    en(1);
    en(2);
    en(3);
    en(4);
    en(5);
    display();
    en(6);
    de();
    display();
    de();
    display();
    en(6);
    display();
    en(7);
    display();
    en(8);
    de();
    display();
    return 0;
}