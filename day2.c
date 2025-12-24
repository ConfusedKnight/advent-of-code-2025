#include <stdio.h>
#include <ctype.h>

int main(){

  char s[] = "ffxkVZQtqMnMcLR";
  int changes = 0;

  int length = sizeof(s)/sizeof(char);
  length--;

  for(int i=0; i<length-1; i++){
    if(toupper(s[i]) != toupper(s[i+1])){
      changes++; 
    }
  }

  printf("changes: %d", changes);
  return 0;
}
