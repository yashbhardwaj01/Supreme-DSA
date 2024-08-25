#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector <int> vec;
     cout << vec.size();
     cout << vec.capacity();

    // vector <int> arr(10,-1);
    // for(auto val : arr){
    //     cout << val << " ";
    // }

    // vector <int> arr{10,20,30,40,50};
    //   for(auto val : arr){
    //     cout << val << " ";
    // }

    // vector<int> arr(10);
    // for(auto val : arr){
    //     cout << val << " ";
    // }

    vector <string> brr;
    cout << "before poping" << endl;
 
    brr.push_back("yash0");
    brr.push_back("yash1");
    brr.push_back("yash2");
    brr.push_back("yash3");
    brr.push_back("yash");
    brr.push_back("yash"); 
    brr.insert(brr.begin()+4, "yashu"); // insert element at a particular index
    brr.erase(brr.begin()+2); // delete element at particular index
    brr.clear(); // remove all elements 
   
    for(auto val : brr){
         cout << val << " " << endl;;
    }
    cout << "size and capacity before poping " << brr.size() << " , " << brr.capacity() << endl;
    cout << "after poping" << endl;
    brr.pop_back();
   
     for(auto val : brr){
         cout << val << " " << endl;
    }
    cout << brr.empty() ;

      // cout << "size and capacity before poping " << brr.size() << " , " << brr.capacity() << endl;
}