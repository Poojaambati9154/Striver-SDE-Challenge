#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    int coins[9]={1,2,5,10,20,50,100,500,1000};
    int cnt=0;
    int number=0;
    for(int i=8;i>=0;i--){
        if(coins[i]<=amount){
           number=amount/coins[i];
           cnt+=number;
           amount=amount-(number*coins[i]);
        }
        if(amount==0){
            break;
        }
    }
    return cnt;
}
