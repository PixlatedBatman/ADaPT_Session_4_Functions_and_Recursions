#include <iostream>
using namespace std;

void printN(int i, int N){
    if(i > N) return;

    cout << i << endl;
    printN(i+1, N);
}

int main(){
    int N=5;
    printN(1, N);
    return 0;
}