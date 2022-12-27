#include <bits/stdc++.h>
using namespace std;

void arrsum(int arr[3][3], int n, int m){
	int sum;
    for(int i=0;i<n;i++){
    	sum=0;
        for (int j=0;j<m;j++){
            sum+= *(*(arr+j)+i);           
        }
        cout<<sum<<endl;        
    }
}

int main(){
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};

    arrsum(arr,3,3);

    return 0;
}
