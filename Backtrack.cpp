#include <iostream>
using namespace std;

void printN(int i, int N){
    if(i > N) return;

    printN(i+1, N);
    cout << i << endl;
}

int main(){
    int N=5;
    printN(1, N);
    return 0;
}