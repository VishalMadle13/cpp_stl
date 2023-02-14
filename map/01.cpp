#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string> m;
    
    m[1] = "vishal";
    m[4] = "shubham";
    m[2] = "sudesh"; 
    
    
    // print :
    cout<<"\nMAP m : \n";
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
   

    //insertion :
    m.insert({5,"bheem"});

    cout<<"\nMAP m : \n";
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // count : element presnt or not
    
    cout<<"\n5 is present or not : "<<m.count(5);
    cout<<endl;

    // elements after 2
    cout<<"\nelements after 2\n";
    auto it = m.find(2);
    for(auto i= it ; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }


}