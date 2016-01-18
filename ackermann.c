#include <stdio.h>
#include <stdlib.h>
unsigned long long CONT;

unsigned int ack(unsigned int m, unsigned int n){
  unsigned int ans;
  CONT++;

  if (m == 0){
    ans = n+1;
  }
  else if (n == 0){
    ans = ack(m-1, 1);
  }
  else{
    ans = ack(m-1, ack(m, n-1));
  }
  return ans;
}

int main(int argc, char* argv[]){

  unsigned int first,second,ack_res;

  if(argc == 1){
    printf("Enter integers range to calculate (separated by one whitespace) -> ");
    scanf("%u",&first);
    scanf("%u",&second);
  }
  else if(argc == 3){
    first = atoi(argv[1]);
    second = atoi(argv[2]);
  }
  else{
    printf("Error: Incorrect arguments number\nSyntax: %s [first_limit] [second_limit]\n",argv[0]);
    exit(EXIT_FAILURE);
  }

  if(setvbuf(stdout,NULL,_IONBF,0)) {
  	perror("Error en setvbuf");
    exit(EXIT_FAILURE);
  }

  unsigned i,j;
  for (i=0; i<=first; i++){
    for (j=0; j<=second; j++){
      CONT = 0;
      ack_res = ack(i,j);
      printf("ack(%u,%u)=%u. Iterations: %llu\n",i,j,ack_res,CONT);
    }
  }
}
