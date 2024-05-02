#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){
    //stack -- LIFO
    stack <int> s;

    //insert
    s.push(10);
    s.push(20);
    s.push(30);

    //size
    cout << s.size() << endl;
    //empty
    cout << s.empty() << endl;

    //top element
    cout << s.top() << endl;

    //deleting top element
    s.pop();

    cout << s.top() << endl;


    return 0;
}
