#include<bits/stdc++.h>

using namespace std;

void display (vector<int> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec1;
    int a, size;
    cout << "Enter the size of the vector : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements : " ;
        cin >> a;
        vec1.push_back(a);
    }

    display(vec1);
    
}