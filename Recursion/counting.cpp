#include <iostream>
using namespace std;

void counting(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    counting(i+1, n);
}

int main() {
    int n;
    cin>>n;
    counting(1,n);
    return 0;
}
