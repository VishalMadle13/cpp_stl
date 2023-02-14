#include<iostream>
using namespace std;

#include<vector>


int main(){

    vector<int> a(5,1);  // 5 => size of vector a and , 1=> all elements are initialize with vlaue 1
    cout<<"a : ";
    for(int i : a){
        cout<<i<<" ";
    }

    // copy  
    vector<int> b(a); // copy all elements from a to b
    cout<<"\nb : ";
    for(int i : b){
        cout<<i<<" ";
    }

    vector<int>vec;
    //capacity of vec
    cout<<"\n\nCapacity : "<<vec.capacity()<<endl;
    vec.push_back(10);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(20);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(30);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(40);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(50);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(10);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(20);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(30);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(40);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    vec.push_back(50);
    cout<<"Capacity : "<<vec.capacity()<<endl;
    //size of vec
    cout<<"size"<<vec.size()<<endl;

    // element at i th index
    cout<<"vec(3)"<<vec.at(3)<<endl;

    // front and back
    cout<<"front :"<<vec.front()<<endl;
    cout<<"back  :"<<vec.back()<<endl;


    //print all elementss in  vector
    cout<<"\nElements in vector : ";
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    //another method
    cout<<"\nElements in vector : ";
    for(int i : vec){
        cout<<i<<" ";
    }

    // pop 
    vec.pop_back();
    cout<<"\nElements in vector after poping : ";
    for(int i : vec){
        cout<<i<<" ";
    }
    
    // size and clear
    cout<<"\nsize : "<<vec.size()<<endl;
    vec.clear();
    cout<<"size : "<<vec.size()<<endl;
    
    

}




// output :
/*
Capacity : 0
Capacity : 1
Capacity : 2
Capacity : 4
Capacity : 4
Capacity : 8
Capacity : 8
Capacity : 8
Capacity : 8
Capacity : 16
Capacity : 16
size10
*/