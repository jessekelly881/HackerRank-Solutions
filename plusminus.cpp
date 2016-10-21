#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int val, pos, neg, zero;
    pos = neg = zero = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> val;
       if(val == 0){zero++;}
       else if(val > 0){pos++;}
       else{neg++;}
    }
    
    cout<<setprecision(6)<<pos/(float)n<<"\n"<<neg/(float)n<<"\n"<<zero/(float)n;
    return 0;
}
