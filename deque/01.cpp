#include<iostream>
using namespace std;
#include<deque>

int main(){
    deque<int> dq;
    cout<<"\n\nsize : "<<dq.size();
    cout<<"\ndq : ";
    for(int i:dq){
        cout<<i<<" ";
    }
    //push_back and push_front 
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(-10);
    dq.push_front(-20);
    cout<<"\n\ndq : ";
    for(int i:dq){
        cout<<i<<" ";
    }

    //pop_back and pop_front
    dq.pop_back();
    cout<<"\n\ndq : ";
    for(int i:dq){
        cout<<i<<" ";
    }

    dq.pop_front();
    cout<<"\n\ndq : ";
    for(int i:dq){
        cout<<i<<" ";
    }

     // at
    cout<<"\nat 0th and 1th : ";
    cout<<dq.at(0);
    cout<<dq.at(1);

    // isempty
    cout<<"\ndq Empty or not : ";
    cout<<dq.empty();


    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(-10);
    dq.push_front(-20);
    cout<<"\n\ndq : ";
    for(int i:dq){
        cout<<i<<" ";
    }

    //erase 
    dq.erase(dq.begin(),dq.begin()+1);  // eras(a,b); ==> a inclusize ,b exclusive
    cout<<"\nErase begin ,begin+1 ";
    cout<<"\n\ndq : ";
    for(int i:dq){
        cout<<i<<" ";
    }

}