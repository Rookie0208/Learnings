#include<iostream>
using namespace std;

int af(int m, int n) {
    if(m == 0) return (n+1);
    else if(n == 0) return af(m-1,1);
    else return af(m-1, af(m,n-1));
}

int main() {
int m,n;

cout<<"Enter m"<<endl;
cin>>m;
cout<<"Enter n"<<endl;
cin>>n;

int num = af(m,n);
cout<<num;
return 0;
}