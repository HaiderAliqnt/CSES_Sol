#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long move_counter(long long n , long long array[]){

    long long counter = 0;
    
    for(long long j = 1 ; j < n ; j++){
        if(array[j] < array[j-1]){
            long long diff  = array[j-1] - array[j];
            array[j] = array[j-1] ;
            counter += diff;
        }
    }
    return counter;
}
 


int main()
{
    long long n;
    cin>>n;
    long long array[n];
    for(long long i = 0 ; i < n ; i++){
      cin>>array[i];  
    }
    cout << move_counter(n , array);
    

    
    return 0;
}