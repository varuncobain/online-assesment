#include <iostream>
#include"bits/stdc++.h"
using namespace std;

//at each step we check if current price if lesser then min value , if yes then we set the min value to current value if not then we find the diff of current price and the min value, if it is more then the previous max profit then we set it as max profit 

int besttime(vector<int> prices){
    int min_value = INT_MAX; //initially takes max possible value as min as any other value we come across would be smaller then this
    int max_profit = 0;
    for(int i=0;i<prices.size();i++){
        if(prices[i] < min_value){
            min_value = prices[i];
        }
        else if(prices[i] - min_value > max_profit){
            max_profit = prices[i]-min_value;
        }
    }
    return max_profit;
}

int main() {
    vector<int> prices{7,10,4,10,6,5,2};
    int result = besttime(prices);
    cout<<result;
    return 0;
}
