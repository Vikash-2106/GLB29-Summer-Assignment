 
 #include<iostream>
using namespace std;

// SELECTION SORT   

 void selectionsort(int*arr,int n){
    for(int i=0;i<n-1;i++){
            int minindex = i; // means min value wale ka index
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                   minindex = j;
                }
            }
            swap(arr[minindex],arr[i]);
        }
        for(int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
}
int main(){
  int n;
  int arr[] = {2,3,1,4,6,5};
  selectionsort(arr,6);
return 0;
}
