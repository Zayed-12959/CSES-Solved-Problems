#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    for(int i=0; i<n-2; i++){
        int l = i+1, r = n-1;

        while(l<r){
            long long current_sum = a[i].first + a[l].first + a[r].first;
            
            if(current_sum == x){
                cout << a[i].second << " " << a[l].second << " " << a[r].second;
                return 0;
            }
            else if(current_sum < x){
                l++;
            }
            else{
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;    
}