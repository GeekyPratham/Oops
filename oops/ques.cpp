#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;


int main(){
    int n;
    // no of testcase;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;// no of books;
        cin>>temp;
        vector<int> v;
        for(int i=0;i<temp;i++){
            int num;
            cin>>num;
            v.push_back(num); 
        }
        // code 1

        // stack<int> st1;
        // stack<int> st2;
        // st1.push(v[0]);
        // st2.push(v[1]);
        // for(int i=2;i<v.size();i++){
        //     int temp1 = v[i]+st1.top();
        //     int temp2 = v[i]+st2.top();
        //     if(temp1>=temp2){
        //         st2.push(v[i]);
        //     }
        //     else{
        //         st1.push(v[i]);
        //     }
        // }
        // int ans = st1.top() +st2.top();
        // cout<<ans<<endl;

        // code 2

        int ans = v[temp-1];
        int mx = 0;
        for(int i=0;i<temp-1;i++){
            mx = max(mx,v[i]);
        }
        cout<<ans+mx<<endl;

    }

    
}