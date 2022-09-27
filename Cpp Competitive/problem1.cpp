#include<bits/stdc++.h>
using namespace std;

// QUESTION 1 :
// int main () {
//     int t ;
//     cin >> t ;
//     while (t--) {
//         int n ;
//         cin >> n;
//         if(n <= 9) {
//         switch (n)
//         {
//         case 1:
//             cout << "one" << endl;
//             break;
//         case 2:
//             cout << "two" << endl;
//             break;
//         case 3:
//             cout << "three" << endl;
//             break;
//         case 4:
//             cout << "four" << endl;
//             break;
//         case 5:
//             cout << "five" << endl;
//             break;
//         case 6:
//             cout << "six" << endl;
//             break;
//         case 7:
//             cout << "seven" << endl;
//             break;
//         case 8:
//             cout << "eight" << endl;
//             break;
//         case 9:
//             cout << "nine" << endl;
//             break;
        
//         default:
//             break;
//         }
//         }

//         else if(n%2 == 0 ) cout << "even" << endl;
//         else cout << "odd" << endl;
//     }
// }

// QUESTION 2 : REVERSE A NUMBER
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n ; 
//         cin >> n;
//         int new_number = 0;
//         while (n >= 1 ) {
//             int rem = n%10;
//             new_number = new_number * 10 + rem;
//             n = n/10;
//         }
//         cout << new_number << endl;
//     }
// }

// QUESTION 3 :
// int main () {
//     int n ;
//     cin >> n ;
//     for (int i = 1 ; i <= n ; i++ ) {
//         if(i%3==0 && i%5==0) cout << "FizzBuzz" << endl;
//         else if(i % 3 == 0 ) cout << "Fizz" << endl;
//         else if(i % 5 == 0 ) cout << "Buzz" << endl;
//         else cout << i << endl;
//     }
// }

// QUESTION 4 : love gift
// int main () {
//     int t ;
//     cin >> t;
//     while (t--)
//     {
//     int n ;
//     cin >> n ;
//     for (int i = 1; i<= n; i++) {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*";
//         }
//         for (int k = 2*n - i; k > i; k--)
//         {
//             cout << "#";
//         }
//         for (int l = 0; l < i; l++)
//         {
//             cout << "*";
//         }
        
//         cout << endl;
//     }
//     }
// }

// QUESTION 5 : PATTERN
// int main() {
//     int n ;
//     cin >> n;
//     for (int i = 1; i <=n ; i++)
//     {
//     int k = n;
//         for (int j = 0; j < i; j++)
//         {
//            cout << k ;
//            k--;
//         }
//         cout << endl;
//     }
    
// }

// QUESTION 6 : SUM OF DIGIT SUM OF TWO NUMBERS USING FUNCTIONS
// int digit_sum(int n) {
//         int sum = 0;
//     while(n>=1) {
//         sum = n%10 + sum;
//         n = n/10;
//     }
//     return sum;
// }
// int main () {
//     int a, b;
//     cin >> a >> b;
//     cout << digit_sum(a) + digit_sum(b);
// }

// QUESTION 7 : SWAP TWO NO. BY PASS BY REFERENCE
/*
void swap (int &n1 , int &n2) {
    int temp = n1;
    n1 = n2; 
    n2 = temp;
}

// WITH THE HELP OF POINNTERS

void swap2(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main () {
    int a = 2;
    int b = 3; 
    int c = 4; 
    int d = 5;
    cout << a << " " << b << endl ;
    swap(a, b);
    cout << a << " " << b << endl ;
    cout << c << " " << d << endl ;
    swap2(&c, &d);
    cout << c << " " << d << endl ;
}
*/