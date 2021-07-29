#include "iostream"
using namespace std;
int binary_search(int arr[], int upper, int n){
  int lower = 0;
  while(lower<=upper){
    int mid = (lower+upper) / 2;
    if(arr[mid] == n){return mid;}
    else if(arr[mid] < n){lower = mid + 1;}
    else{upper = mid - 1;}
  }
 return -1;
}
int main(){
  int arr[] = {1, 3, 6, 9, 12, 45, 66, 88, 120};
  int size = sizeof(arr)/sizeof(arr[0]);
  int upper = size - 1;
  int result = binary_search(arr, upper, 45);
  if(result != -1){
    cout << "Found At Index " << result;
  }
  else{
    cout << "Not Found";
  }
}
