#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    // read from file
    ifstream filevar;
    filevar.open("filename.txt");

    if (filevar.is_open()){
        string line;
        while (getline(filevar, line)){
            cout << line << endl;
        }
    }
    else{
        cout << "file can not be opened";
    }

    return 0;
}