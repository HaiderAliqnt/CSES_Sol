#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int missingNum(long long n , long long m_sum){
    
    long long sum = ((n)*(n+1))/2;
    return sum - m_sum;

}


int main()
{
    long long n;
    cin>>n;
    long long m_sum = 0;
    long long input;
    for(int i = 0 ; i < n-1 ;i++){
        cin>>input;
        m_sum = m_sum+input;
    }
    cout << missingNum(n , m_sum);
    

    
    return 0;
}