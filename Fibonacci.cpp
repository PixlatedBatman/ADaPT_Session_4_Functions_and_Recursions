#include <iostream>
using namespace std;

int Fibonacci(int n){
    if(n == 1 || n == 2) return 1;
    else if(n<1) return 0;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    for(int i=1; i <= 8; i++){
        cout << Fibonacci(i) << endl;
    }
    return 0;
}