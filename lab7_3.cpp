#include<iostream>
#include <cmath>
using namespace std;
int adiff(int a , int b)
{
  int abs(int x);
  int diff = abs(a-b)%360;
  if(diff > 180)
  {
    return 360-diff;

  }else
  {
    return diff;
  }
   
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
