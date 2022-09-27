 #include<iostream>

 int main() {
     using namespace std;
     int n;
    cout<<"enter size\n";
     cin>>n;

     int a[n];
        cout<<"enter elelmts\n";
        for (int i = 0; i < n; i++)
        {
     cin>>a[i];    
        }
        cout<<"\n";
        
        for (int i = 1;i < n;i++)
        {
            int current = a[i];
            int j = i-1;
            while(a[j]>current && j>=0) {
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = current;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        return 0;

 }