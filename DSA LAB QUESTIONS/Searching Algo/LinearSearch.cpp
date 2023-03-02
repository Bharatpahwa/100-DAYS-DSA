#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int size ,int key){

  if(size == 0)
  return -1;
  for(int i = 0 ; i < size ; i++){
  if(arr[i] == key)
    cout << " Element is present at Index : " << i << endl;
} 
  return -1 ;

}
int main(){
int arr[5] = {1,2,5,4,6} ;
LinearSearch(arr , 5 , 1);
return 0 ;

}