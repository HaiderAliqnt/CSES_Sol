#include <iostream>
#include <bits/stdc++.h>
using namespace std;


long long number_spiral(long long row , long long col){

    //diagonal follows a quadratic pattern n^2 - n + 1
    //choose the greater value from row and colum as n 
    //if we go down the odd row with each step value decreases so diagonal - diff
    //if we go up the odd colum with each step value increases so diagonal + diff 
    //for even row and column numbers the logic swaps
    long long n ,diff ,diagonal;

    if(row>col){ 
        n = row;
        diff = n - col;
        diagonal = ((n*n) - n + 1);
        if(row%2==0){
            return diagonal + diff;
        }
        else{
            return diagonal - diff;
        }   
    }
    else{ 
        n = col; 
        diff = n - row;
        diagonal = ((n*n) - n + 1);
        if(col%2==0){
            return diagonal - diff;
        }
        else{
            return diagonal + diff;
        }  
        
    }
    


}


int main()
{
    long long test;
    cin >> test;
    vector <long long> results;
    for(long long i = 0 ; i < test ; i++){
        long long r , c;
        cin >> r >> c;
        long long temp = number_spiral(r,c);
        results.push_back(temp);
    }
    for(long long i = 0 ; i < results.size(); i++){
        cout<<results[i]<<endl;
    }
    
    return 0;
}