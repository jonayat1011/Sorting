#include<iostream>
using namespace std;
int main(){
    
    
    int a[] = {56,88,90,23,11};
    
    for(int i=0;i<5-1;i++)
    {
        int m = i;
        for(int j=i+1;j<5;j++)
        {
            if(a[m]>a[j])
            {
               m = j;
               
            }
        }
        swap(a[i],a[m]);
    }
    cout<<"Selection Sort :";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
