#include <iostream>
using namespace std;

int sumN1(int i, int N){
    if(i > N) return 0;

    return i + sumN1(i+1, N);
}

int sumN2(int i){
    if(i < 1) return 0;

    return i + sumN2(i-1);
}

int main(){
    int N=5;
    int sum1 = sumN1(1, N);
    int sum2 = sumN2(N);
    cout << sum1 << ' ' << sum2 << endl;
    return 0;
}