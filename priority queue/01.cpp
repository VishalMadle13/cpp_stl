#include<iostream>
#include<queue>
using namespace std;

int main(){
    // max heap
    priority_queue<int> max;

    // min heap
    priority_queue<int,vector<int>,greater<int>> min;

    max.push(8);
    max.push(5);
    max.push(3);
    max.push(9);
    max.push(2);
    
    int n = max.size();
    cout<<"Max heap : \nsize of max : "<<n;
    cout<<"\nmax : ";
    for(int i=0 ; i<n; i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    min.push(2);
    min.push(1);
    min.push(3);
    min.push(0);
    min.push(5);

    int m = min.size();
    cout<<"\nsize of min : "<<m;
    cout<<"\nMin : ";
    for(int i=0; i<m; i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
}