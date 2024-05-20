#include<bits/stdc++.h>
using namespace std;

int maxValue(int arr[], int size){
    if(size == 1){
        return arr[0];
    }
    else{
        int myval = arr[size-1];
        int urval = maxValue(arr, size-1);

        if(myval>urval){
            return myval;
        }
        else{
            return urval;
        }
    }
}

int main(){
    int ar[] = {1, 2, 3, 4, 5, 6};
    int result = maxValue(ar, 6);
    cout << result;
}