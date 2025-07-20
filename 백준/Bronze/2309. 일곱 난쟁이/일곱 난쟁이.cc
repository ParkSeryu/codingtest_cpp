#include <bits/stdc++.h>
using namespace std;
vector<int> arr;

int main(){
    for(int i = 0; i < 9; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }

    sort(arr.begin(), arr.end());

    int result1 = 0;
    int result2 = 0;

    for(int i = 0; i < arr.size() - 1; i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(sum - arr[i] - arr[j] == 100){
                result1 = arr[i];
                result2 = arr[j];
            }
        }
    }

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == result1 || arr[i] == result2){
            continue;
        }
        cout << arr[i] << '\n';
    }

    return 0;
}