#include<iostream>
using namespace std;

// WAP TO PRIME NUMBER IN A RANGE
int main(){
    int start,end;
    cout << "Enter the starting range : ";
    cin>>start;
    cout << "Enter the ending range : ";
    cin>>end;
    for(int i=start;i<=end;i++){
        int count = 0;
           for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
           }
           if(count==2){
               cout << i << " ";
           }
    }
}
