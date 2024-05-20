#include<bits/stdc++.h>
using namespace std;

int sumArray(int arr[], int sz){
    if(sz == 1){
        return arr[0];
    }
    else{
        int mySum = arr[sz-1];
        int urSum = sumArray(arr, sz-1);

        return (mySum + urSum);
    }
}

int main(){
    int ar[] = {1, 2, 3, 4, 5, 6};
    int sum = sumArray(ar, 6);
    cout << sum;
}