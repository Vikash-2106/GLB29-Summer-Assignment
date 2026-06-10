#include<iostream>
using namespace std;

// FUNCTION FOR PERFECT NUMBER

void PerfectCheck(int n){
   int original = n;
   int sum = 0;
   for(int i=1;i<=n/2;i++){
    if(n%i==0){
        sum+=i;
    }
   }
   if(sum == original){
       cout << "Perfect number";
   }
   else{
    cout << "Not perfect number";
   }
}
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    PerfectCheck(n);
}