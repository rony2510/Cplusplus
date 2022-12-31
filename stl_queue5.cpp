// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int>q;

    q.push(100);
    q.push(50);
    q.push(10000);
    q.push(5);

    if(q.empty()){
        cout<<"empty"<<endl;
    }
    else cout<<"not empty"<<endl;



    return 0;
}