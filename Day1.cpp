#include<iostream>
using namespace std;

// WAP to calculate the sum of first n Natural number
// int main(){
//     int n,sum=0;
//     cout << "Enter n : ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout << "The sum of first n natural number is "<<sum<<endl;
// return 0;
// }

// WAP to print multiplication of given number
// int main(){
//     int n,m;
//     cout << "Enter the number whose multiplication table required : ";
//     cin >> n;
//     cout << "Range of table : ";
//     cin >> m;
//     for (int i = 0; i<=m; i++){
//         cout << n <<" x "<< i <<" = "<<n*i<<endl;
//     }  
// }

// WAP to find factorial of a given number
// int main(){
//     int n,pro=1;
//     cout << "Enter the number whose factorial required : ";
//     cin >> n;
//     for(int i=1;i<=n;i++){
//       pro*=i;
//     }
//     cout << "The factorial of the given number is : "<<pro;
// }

// WAP TO COUNT DIGITS IN A NUMBER
int main(){
    int n,count = 0;
    cout << "Enter the number : ";
    cin >> n;
    while(n!=0){
        n%10;
        count++;
        n=n/10;
    }
    cout << "the number of digits in a given number is : "<<count;
}