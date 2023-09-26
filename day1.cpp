
#include<iostream>
using namespace std;
int main( ){
int h=78667;

int rev;

 while (h>0)
 {
  rev=h%10;
  if ((rev>INT16_MAX/10) || (rev<INT16_MIN/10))
  {
  return 0;
  }
  
cout<<rev;
 h=h/10;
 
 }
 return 0;

}
