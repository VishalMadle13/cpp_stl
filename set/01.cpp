/*

SET  stores    :  unique elements 
implementation :  using bst
operations     :  insertion and deletion 
                  modification not possible in set

after poping  elements get in sorted order
*/

// TC of insert ,find , erase ===> O(logn)
// TC of size,begin end -- > O(1)


#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;

    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(6);
    s.insert(8);
    s.insert(9);
    s.insert(7);

    cout<<"\nSET s : ";
    for(auto i : s){
        cout<<i<<" ";
    }

    s.erase(s.begin());
    cout<<"\nSET s : ";
    for(auto i : s){
        cout<<i<<" ";
    }

    cout<<"\n5 is present or not : "<<s.count(5);
    cout<<endl;
    set<int>::iterator it = s.begin();
    set<int>::iterator itr= s.find(7);
    for(auto it = itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }
}
