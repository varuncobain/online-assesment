#include <iostream>
#include"bits/stdc++.h"
using namespace std;

vector<int> leader(vector<int> input){
    int size = input.size();
    vector<int> output;
    int max = input[size-1];
    for(int i = size-1;i>=0;i--){
        if(max < input[i] || input[i] == max){
            if(count(output.begin(),output.end(),input[i]) ==0){
                output.push_back(input[i]);
            max = input[i];
            }
            
        }
    }
     reverse(output.begin(),output.end());
     return output;
}

int main() {
   
    vector<int> input{7, 10, 4, 10, 6, 5, 2};
    vector<int> leaders = leader(input);
    for(auto x:leaders){
        cout<<x<<" ";
    }

    return 0;
}
