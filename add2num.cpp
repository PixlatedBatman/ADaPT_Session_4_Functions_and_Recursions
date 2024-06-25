#include <iostream>
using namespace std;

int add2num(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int a=1, b=2;
    int c = add2num(a, b);
    cout << c << endl;
    return 0;
}