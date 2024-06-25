#include <iostream>
#include <vector>
using namespace std;

int num_of_subsets(vector<int> subset, vector<int> arr, int ind, int k){
    int sum=0;
    for(int i = 0; i < subset.size(); i++){
        sum += subset[i];
    }
    if(sum == k) return 1;
    else if(sum > k || ind > arr.size()-1) return 0;

    vector<int> subset_inc = subset;
    subset_inc.push_back(arr[ind]);

    return num_of_subsets(subset, arr, ind+1, k) + num_of_subsets(subset_inc, arr, ind+1, k);
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5}, subset;
    int k = 5, ind=0;
    cout << num_of_subsets(subset, arr, ind, k) << endl;
    return 0;
}

/*
The subsets of {1, 2, 3, 4, 5} which add to 5 are:
1, 4
2, 3
5
*/