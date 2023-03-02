#include<iostream>
using namespace std;

int BinarySearch( int arr[] ,int size ,  int key ){
 int s = 0 ;
 int e = size-1 ;
 int mid = (s + (s+e)/2);
 while(s<=e){ 
 if(arr[mid]==key){
  return mid ;
 }
 if(arr[mid]<key){
  s= mid+1 ;
 }else{
  e = mid-1 ;
}
  mid= (s+e)/2;
}
return -1; 
}

int main()
{
  int arr[7] = {32, 45, 68, 72, 89 , 105, 108};
  int Index = BinarySearch(arr, 7 , 89 );

  cout<< " Index of 89 is : " << Index << endl ;
return 0 ;
}