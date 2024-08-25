#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr{0,10,20,30,60,80,45,90,45};
    int sum=90;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                cout << "Pair found: " << "(" <<  arr[i] << " , " << arr[j] << ")" << endl;
            }
        }
    }
}