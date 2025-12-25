#include <stdio.h>
#include <conio.h>

int solve(){

  int prices[] = {139,127,130,148,158,178,195,179,197,177,187};
  int length = sizeof(prices)/sizeof(int);
  int buy;
  int sell;

  buy = prices[0];
  sell = 0;
  int hasbought = 0;

  for(int i=0; i<length; i++){

    if(prices[i] < buy){
      buy = prices[i];
      sell = buy;
      hasbought = 1;
    }

    if(prices[i] > sell && i>0){
      if(hasbought){ 
        sell = prices[i];
      }
    }

  }

    if((sell-buy) > 0){
      printf("buy: %d\n", buy);
      printf("sell: %d\n", sell);
      printf("profit: %d", sell-buy);
    }else{
      printf("zero profit\n");
    }

}

int main(){

  solve();

  return 0;
}
