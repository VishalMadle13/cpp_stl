#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    // LIFO :  last in first out 

    st.push(10);
    st.push(9);
    st.push(8);
    st.push(7);
    st.push(6);

    cout<<"\nStack st  ";
    cout<<"\nTop  of st : "<<st.top();
    cout<<"\nsize of st : "<<st.size();
    cout<<"\nIsEmpty st : "<<st.empty();
    
    // pop 
    st.pop();
    cout<<"\nafter one pop";
    cout<<"\nTop  of st : "<<st.top();
 
    cout<<"\nst : ";
    while (!st.empty())
    {
       cout<<st.top()<<" ";
       st.pop();
    }
  

    
}