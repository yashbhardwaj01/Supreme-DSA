#include<bits/stdc++.h>
using namespace std;

int FindUnique1(vector <int> vec){
     int ans=0;
    for(int i=0;i < vec.size();i++){
        ans = ans ^ vec[i];
    }
    return ans;
}


int main(){
   
    vector <int> vec{2,3,6,5,2,3,6,5,4,7,8,7,4};
    cout << "Unique Element is: " <<  FindUnique1(vec) ;
}