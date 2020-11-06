#include <iostream>
#include <iomanip>
using namespace std;

int packBits(int n);

if 0
int packBits(int n){

  int num = 0;
  
  for(int i = 0; i <= n; i++){
    num = (num << 3) | i;
    

  }
  return num;

}
#endif

int main(){
  cout << hex << packBits(2) << endl;
  cout << hex << packBits(7) << endl;
}
