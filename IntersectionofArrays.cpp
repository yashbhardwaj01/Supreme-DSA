#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[9]={1,2,3,4,5,6,7,8,9};
    int size1=9;
    int arr2[]={5,6,20,10,7,9,11,23};
    int size2=8;
    vector <int> ans;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);
                arr2[j]=-1;
            }
        }
    }

    for(auto val : ans){
        cout << val << " ";
    }
}