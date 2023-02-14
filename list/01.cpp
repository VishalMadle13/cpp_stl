#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> lst;

    lst.push_back(1);
    lst.push_front(0);
    lst.push_back(2);

    cout<<"\nlst : ";
    for(int i : lst){
        cout<<i<<" ";
    }

    // erase 
    lst.erase(lst.begin());

    cout<<"\nlist after erase(begin) : ";
    for(int i : lst){
        cout<<i<<" ";
    }

    list<int> ls(5,100);  // list of size 2 with all elements initializes with value 100
    cout<<"\nls : ";
    for(int i: ls)
    {cout<<i<<" ";}
}