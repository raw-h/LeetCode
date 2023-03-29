#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    if(x < 0)
        return false;
    else if(x == 0)
        return true;
    else{
        int count = 0;
        int temp = x;
        while(temp > 0){
            count++;
            temp /= 10;
        }
        int arr[count];
        int i = 0;
        while(x > 0){
            arr[i] = x % 10;
            i++;
            x /= 10;
        }
        for(int i = 0; i < (count/2); i++){
            if(arr[i] != arr[count - i - 1])
                return false;
        }
        return true;
    }
    return 0;
}