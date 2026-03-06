#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void WeirdAlgo(long long n){

    cout<< n << " ";

    if(n == 1){
        return;
    }

    else if(n%2 == 0){
        WeirdAlgo(n/2);
    }

    else{
        WeirdAlgo(3*n + 1);
    }

}



int main()
{
    long long n;
    cin >> n;
    WeirdAlgo(n);
    return 0;
}
