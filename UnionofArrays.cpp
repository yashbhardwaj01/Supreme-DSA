#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 8};
    int size1 = 6;
    int arr2[] = {4, 2, 0, 9};
    int size2 = 4;
    vector<int> arr;
    for (int i = 0; i < size1; i++)
    {
        arr.push_back(arr1[i]);
    }
    for (int j = 0; j < size2; j++)
    {
        arr.push_back(arr2[j]);
    }
    for (auto val : arr)
    {
        cout << val << " "  ;
    }
    cout << endl;
    cout << arr.size() << " , " << arr.capacity();
}