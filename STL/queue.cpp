#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    // queue = FIFO
    queue <int> q;

    for (int i= 0; i<5; i++){
        cin >> i;
        q.push(i);
    }

    cout << q.empty() << endl;
    cout << q.size() << endl;
    cout << q.front() << endl;
    




    return 0;
}