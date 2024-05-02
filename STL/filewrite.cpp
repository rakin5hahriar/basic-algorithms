#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    //output to file
    ofstream filevar;
    filevar.open("filename.txt ", ios :: out | ios :: app);

    if(filevar.is_open()){
        filevar << "l1" << endl;
        filevar << "l2" << endl;
        filevar << "l3" << endl;
        filevar.close();
    }
    else{
        cout<< "file can not be open" << endl;
    }

    return 0;
}