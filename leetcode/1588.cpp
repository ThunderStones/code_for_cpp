#include <iostream>
#include <vector>   

using namespace std;

int sumOddLengthSubarrays(vector<int>& arr) {
    int gep = 1, sum = 0;
    while (gep <= arr.size()) {
        for (int i = 0; i + gep <= arr.size(); i++) {
            for(int k = 0; k < gep; k++) {
                sum += arr.at(i + k);
            }
        }
        gep += 2;
    }
    return sum;
}


int main() {
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(3);
    cout << sumOddLengthSubarrays(arr);
}

