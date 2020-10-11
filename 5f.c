// Determinati cel mai mic numar natural care are k divizori (k se citeste).

#include <stdio.h>

int div_no(int num);

int main(){
  int k, divs, num=1, flag=0;
  printf(">>");
  scanf("%d", &k);

  while(1){
    divs = div_no(num);

    if (k == divs){
      // If total number of divs for current number is equal with inserted number
      // stop the loop and print the number
      flag = 1;
      break;
    }else{
      num++;
    }
  }

  printf("%d are exact %d divizori\n", num, k);
  return(0);
}

// Calculates total number of divs for number `num`
int div_no(int num){
  int i, count=1;
  for(i = 1; i <= num / 2; i++){
    if (num % i == 0){
      count++;
    }
  }
  return(count);
}
