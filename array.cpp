#include<iostream>
using namespace std;
int main(){
  int a[]={1,2,3,4};
  int search=3;
   int index=-1;
   for(int i=0;i<4;i++)
     if(a[i]==search){
       index=i;
       break;

   }
   if(index<0)
     cout<<"not found";
     else
     cout<<"found at index"<<(index+1);
     return 0;
   

}