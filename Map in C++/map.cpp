#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(40);
    pq.push(90);
    pq.push(60);
    pq.push(788);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}