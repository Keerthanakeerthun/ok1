#include <iostream>
using namespace std;

int main() {
   int num,temp, rem, sum = 0;
cout<<"Enter a positive number"<<endl;
cin>>num;
   temp=num;

   while(temp!= 0&&temp<=100000) {
   
      rem = temp % 10;
      sum =sum+(rem * rem * rem);
      	temp/= 10;
      
   }

   if(sum ==num) 
   {
     cout<<num<<" is armstrong"<<endl;
   }
   else
   {
      cout<<num<<" is not armstrong"<<endl;
}
   return 0;
	// your code goes here
}
