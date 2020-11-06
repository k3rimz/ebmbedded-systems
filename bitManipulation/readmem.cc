#include <iostream>
using namespace std;

int sum(int x[], int len);


int main(){
  int x[] = {4, 3, 9};  // ldr r2, [r0] load a 32 bit integer
  cout << sum(x, 3);
  
  char s[] = "testing"; // ldrb r2, [r0] load a single byte

  double y[] = {2.5, 4.8, 1.2};     //vldr.f64 d0, [r0] load a double percision floating point number 
  float y[] = {2.5f, 4.8f, 1.2f};  

}
