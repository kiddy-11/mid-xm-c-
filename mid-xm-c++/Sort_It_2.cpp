

#include<bits/stdc++.h>
using namespace  std;
   int* sort_it(int n)
   {
    int* a = new int [n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    return a;
    
   }
int main(){
    int n;
    cin>>n;
    int* srtr = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << srtr[i] << " ";
    }
        delete[] srtr;
        return 0;
    
}