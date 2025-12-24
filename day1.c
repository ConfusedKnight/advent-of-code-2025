#include <stdio.h>

void solve(int n){

  int result = 0;
  int rem = 0; 
  int num = n;

  do{

    result = 0;

  while(num >0){
    rem = num % 10;
    result += rem;
    num = num/10; 
  }

  num = result;

}while(result>=10); 

  printf("output: %d", result);

}

int main(){
  solve(27611);
}
