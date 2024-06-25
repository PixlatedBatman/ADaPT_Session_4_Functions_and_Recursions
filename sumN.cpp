#include <iostream>
using namespace std;

int add2num(int a, int b){
    int sum = a+b;
    return sum;
}

int sumN(int N){
    int sum=0;
    for(int i=1; i <= N; i++){
        sum = add2num(sum, i);
    }
    return sum;
}

int main(){
    int N=4;
    int sum = sumN(N);          // sumN is a function to add num from 1 to N
    cout << sum << endl;
    return 0;
}