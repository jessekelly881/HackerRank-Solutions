#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;  //Number of test cases
    for(int test_case = 0; test_case < t; test_case++){
        int n;  //Number of students in class
        int k;  //Number of students that must be late for class to be cancelled
        cin >> n >> k;
        
        int students_on_time;
        for(int i = 0;i < n;i++){
           int minutes_late;
           cin >> minutes_late;
           if(minutes_late <= 0){students_on_time++;}
        }
        if(students_on_time >= k){cout<<"NO\n";} //If enough students show up then class is not canceled
        else{cout<<"YES\n";}
    }
    return 0;
}
