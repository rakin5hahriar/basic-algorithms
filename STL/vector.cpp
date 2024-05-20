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

    // array er maddhome
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v2(arr, arr+5);

    // cout << v2.size() << endl; 

    // // vector er maddhome
    // vector<int> v3(v2); // pass by copy

    // cout << v3.size() << endl;

    // // value access
    // for(int i =0; i < v2.size(); i++){
    //     cout << v2[i] << " ";
    // }
    // cout << endl;

    // // value insertion in v1
    // int n;
    // cin >> n;
    // for (int i =0; i<=n; i++){
    //     int m;
    //     cin >> m;
    //     v1.push_back(m);
    // }
    // v1.pop_back();
    
    
    // for(int i =0; i < v1.size(); i++){   
    //     cout << v1[i] << " ";
    // }
    // cout << endl ;

    // // using alternate way to print: iterate using pointer
    // vector<int> :: iterator it;
    // for(it = v2.begin(); it!=v2.end(); it++){
    //     cout<< *it << " ";
    // }
    // cout << endl;

    // //adding element in vector
    vector<int> v3;
    v3.push_back(100);
    v3.push_back(200);
    v3.push_back(300);

    vector<int>:: iterator it1= v3.begin()+1;
    v3.insert(it1, v2.begin(), v2.begin()+2);

    // for(int i =0; i < v3.size(); i++){   
    //     cout << v3[i] << " ";
    // }
    // cout << endl ;

    // erase from any where to any where
    v3.erase(v3.begin()+2);
    
    for(int i =0; i < v3.size(); i++){   
        cout << v3[i] << " ";
    }
    cout << endl ;


    return 0;
}




