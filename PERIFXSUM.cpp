#include<iostream>
using namespace std;
int main(){
   int array[]={5,4,1,3,4};
   int ans=0;
   for(int i=0;i<5;i++)
   {
    array[i]=array[i]+ans;
    ans=array[i];
   }
   for(int i=0;i<5;i++){cout<<array[i]<<" ";}
   return 0;
}