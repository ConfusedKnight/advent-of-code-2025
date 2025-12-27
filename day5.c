#include <stdio.h>

void solve(){

  unsigned int num = 1337671203;
  int len = sizeof(num)*8; 
  unsigned int temp;

  unsigned int result = 0;

  for(int i=0; i < 32; i++){
    temp = (num >> i) & 1;
    result = result | (temp << (32-i-1));
  }

  printf("output: %u", result);

}

int main(){

  solve();

  return 0;
}
