#include <iostream>
using namespace std;

bool pow3(int n){
    if(n == 1) return true;

    if(n%3==0) return pow3(n/3);
    else return false; 
}

int main(){
    int N=5, num;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(pow3(num) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}