#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int repCounter(string s){

    long long counter = 1;
    long long max = 0;
    for(long long i = 0 ; i < s.length() ;i++){
        
        if(s[i] == s[i+1]){
            counter++;
        }
        if(s[i] != s[i+1]){
            if(counter > max){
                max = counter;
                counter =1;
            }
            else{
                counter=1;
                continue;
            }
            
        }
    }
    return max;

}


int main()
{
    string s;
    cin>>s;
    cout<<repCounter(s);
    return 0;
}