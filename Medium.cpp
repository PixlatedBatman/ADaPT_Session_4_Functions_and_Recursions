#include <iostream>
using namespace std;

int ways(int dist){
    if(dist == 0) return 1;
    else if(dist < 0) return 0;

    return ways(dist-1) + ways(dist-2) + ways(dist-3);
}

int main(){
    int N=4;
    cout << ways(N) << endl;
    return 0;
}

/*
The ways of getting a distance of 4 are :
1, 1, 1, 1
1, 1, 2
1, 2, 1
2, 1, 1
1, 3
3, 1
2, 2

*/