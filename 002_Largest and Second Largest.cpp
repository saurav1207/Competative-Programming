#include <iostream>
using namespace std;

int main() {
    int tCase;
    cin>>tCase;
    
    while(tCase--){
        int n;
        cin>>n;
        
        int A[n];
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        
        int maxi = 0;
        int s = 0, e = n-1;
        while(s<=e){
            if(A[s]+A[e] > maxi && A[s]!=A[e]){
                maxi = A[s] + A[e];
            }
            if(A[s] < A[e]){
                s++;
            }
            else{
                e--;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
