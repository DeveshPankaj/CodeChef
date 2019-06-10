#include<bits/stdc++.h>

using namespace std;

int main(){
    int test, N, H, temp;
    cin >> test;
    
    while(test--){
        cin >> N >> H;
        std::vector<int> pi;
        // get input
        for(int i=0; i<N; i++){
            cin >> temp;
            pi.push_back(temp);
        }
        sort(pi.begin(), pi.end());
        
        // set search range
        int lo=0, hi=pi[N-1];
        
        int min_hr = 0xffff;
        while(lo <= hi){
            int mid = (lo + hi) / 2; // 1
            
            int sum_of_hrs = 0;
            for(int i=pi.size()-1; i>-1; i--){
                sum_of_hrs += ( pi[i] / mid ) + (pi[i] % mid) != 0;
                
            }
            if(sum_of_hrs > H){
                lo = mid + 1;
            }else{
                hi = mid -1;
                if(min_hr > mid){
                    min_hr = mid;
                }
            }
        }
        cout << min_hr << "\n";
        
    }
    
    
}
