#include <iostream>
using namespace std;

void printN(int i, int N){
    if(i < 1) return;

    printN(i-1, N);
    cout << i << endl;
}

int main(){
    int N=5;
    printN(N, N);
    return 0;
}