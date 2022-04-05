#include<iostream>
using namespace std;
int main()
{
    
    int a[] = {90,23,56,88,11};
   
 int i,j;
 for(i=0;i<5-1;i++)
 {
     for(j=i+1;j>0;j--)
     {
         if(a[j]>=a[j-1])
         {
             break;
         }
         swap(a[j],a[j-1]);
     }
 }
 cout<<"Insertion Sort : ";
 for(i=0;i<5;i++)
 {
     cout<<a[i]<<" ";
 }
 return 0;
}