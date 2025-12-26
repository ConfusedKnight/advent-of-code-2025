#include <stdio.h>
#include <stdlib.h>

void solve(){

  char ops[11][5] = {"13","-6","-10","19","14","6","+","-5","C","20","C"};
  int records[] = {0,0,0,0,0,0,0,0,0,0,0};   
  int curr = 0;

  int sum = 0;


  int opslength = sizeof(ops) / sizeof(ops[0]);
  int recordslength = sizeof(records) / sizeof(int);

  for(int i=0; i<opslength; i++){

    char* currelem = ops[i];
    int currnum =(int) atoi(currelem);

    switch (ops[i][0]) { 
      case '+':
      records[curr] = records[curr-1] + records[curr-2];
      curr++;
      break;

      case 'D':
      records[curr] = 2*records[curr-1];
      curr++;
      break;

      case 'C':
      curr--;
      records[curr] = 0;
      break;

      default:
      records[curr++] =(int) currnum;
      break;
    }
  }

  for(int i=0; i<recordslength; i++){
    sum += records[i];
  }

  printf("sum: %d\n", sum);
}

int main(){

  solve();

  return 0;
}
