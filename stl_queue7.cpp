// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int>q,p;

    q.push(100);
    q.push(50);
    q.push(10000);
    q.push(5);



    cout<<p.size()<<endl;
    
    q.swap(p);

    cout<<p.size()<<endl;



    return 0;
}