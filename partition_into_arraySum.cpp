# include <bits/stdc++.h>
using namespace std;
int main(){

// int arr[] = {1,2,3,4,5,6,7,8,9,10,1,12,13};   // cannot be partitioned

int arr[] = {1,2,3,4,5,5,10};      // can be partitioned 

int n = sizeof(arr)/sizeof(arr[0]);
    // formation of prefixx sum
    for (int i=1; i<n; i++){
    arr[i] += arr[i-1];
         }
  // check if any x exists
  int idx = -1;
   bool flag = false;
  for(int i=1; i<n; i++){
  if(2*arr[i] == arr[n-1]){
     idx = i;
    flag = true;
    break;
}
  }
    if(idx != -1) cout<<" Yes it acan be Partitioned"; // does same work as below code
//   if(flag) cout<<" Yes it acan be Partitioned";
  else cout<<"Cannot be Partitioned";
    return 0;
}