#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    /*
    1&1=1
    2&1=0
    3&1=1
    4&1=0
    */

    cout<<(n&1)<<endl;

    if(n&1){
        cout<<"n is odd"<<endl;
    }
    else{
        cout<<"n is even"<<endl;
    }

    return 0;
}