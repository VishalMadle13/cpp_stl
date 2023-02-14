#include<iostream>
#include<queue>
using namespace std;

int main(){
    //Queue 
    // FIFO  : first in first out 
    /*
             ----------------------
    front--> 1 | 2 | 3 | 4 | 5 | 6 |  <--  back
             ----------------------
    */

   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);

   cout<<"Queus q -";
   cout<<"\nFisrt element in q : "<<q.front();
   cout<<"\nQ is empty or not : "<<q.empty();
   cout<<"\nq : ";
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }

   q.push(1);
   q.push(2);
   q.pop();

   cout<<"\nsize "<<q.size();

}