#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    // element present or not  
    // using binary search tree 
    cout<<"Finding 5 : --> "<<binary_search(v.begin(),v.end(),5)<<endl;

    // lower bound and upper bound 
    cout<<"\nlower bound : -->"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"\nupper bound : -->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    
    // max and min : 
    
    int a = 4;
    int b = 5;

    cout<<"\nMax(4,5) "<<max(a,b);
    cout<<"\nmin(4,5) "<<min(a,b);


    // swap 
    swap(a,b);
    cout<<"\nnswap(a,b): \n a : "<<a<<"\n b: "<<b;;


    // reverse
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"\n\nreversed string : "<<abcd;

    //rotate
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"\nvector v after rotation : "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }

    //sort 
    sort(v.begin(),v.end());
    cout<<"\nSorted v"<<endl;
    
    for(int i : v){
        cout<<i<<" ";
    }


}