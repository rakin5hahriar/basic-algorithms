#include<bits/stdc++.h>
using namespace std;

int power(int num, int pow){
    if(pow == 1){
        return num;
    }
    else{
        int mymul = num;
        int urmul = power(num, pow-1);

        return (mymul*urmul);
    }
}

int main(){
    
    int result = power(2, 3);
    cout << result;
}