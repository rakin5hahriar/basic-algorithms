// vector : dynamic array

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    

    
    // cout << v1.size() << endl;
    // cout << v1.empty() << endl;

    // // vector e data 2 vabe deya jay
    // // 1. array 2. vector

    // // array er maddhome
    // int arr[] = {1, 2, 3, 4, 5};
    // vector<int> v2(arr, arr+5);

    // cout << v2.size() << endl; 

    // // vector er maddhome
    // vector<int> v3(v2); // pass by copy

    // cout << v3.size() << endl;

    // // value access
    // for(int i =0; i < v2.size(); i++){
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    // value insertion in v1
    int n;
    cin >> n;
    for (int i =0; i<=n; i++){
        int m;
        cin >> m;
        v1.push_back(m);
    }
    v1.pop_back();
    
    
    for(int i =0; i < v1.size(); i++){   
        cout << v1[i] << " ";
    }
    cout << endl  ;



    return 0;
}




