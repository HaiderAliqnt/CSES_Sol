#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display_vector(vector <long long> vec1){
    for(long long i = 0 ; i < vec1.size() ; i++){
        cout<<vec1[i]<<" ";
    }
}

void permute(long long n){
    
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }

    else if(n==1){
        cout << n;
    }
    
    else{
        vector<long long> even_v;
        vector<long long> odd_v;
        
        for(long long i = 1 ; i<=n; i++){
            
            if (i%2 == 0) {
                even_v.push_back(i);
            }
            else{
                odd_v.push_back(i);
            }
        }

        display_vector(even_v);
        display_vector(odd_v);
    }

}

int main()
{
    int n;
    cin>>n;
    permute(n);

    return 0;
}