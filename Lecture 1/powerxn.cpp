#include <iostream>
using namespace std;
float powerxn(int x, int n){
    if(n==0) return 1;    

    return x * powerxn(x , n -1);

}
int main() {
    int x, n;
    cin>>x>>n;
    cout<< powerxn(x , n);
    return 0;
}
