#include<iostream>
using namespace std;
int main()
{
  
    int a[]= {56,88,90,23,11};
    bool f = true;
    int i,j;
    
    while(f!=false)
    {
        f = false;
        i=0;
        j=1;
        
        while(j<5)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                 f = true;
            }
            i++;
            j++;
           
        }
    }
    cout<<"Bubble Sort : ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}