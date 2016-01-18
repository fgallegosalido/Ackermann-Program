#include <stdio.h>        // printf(), scanf(), setvbuf(), perror()
#include <stdlib.h>       // atoi()
unsigned long long CONT;  // General counter

// Ackermann main function
unsigned int ack(unsigned int m, unsigned int n){
  unsigned int ans;
  CONT++;                 // Updated counter in every iteration

  if (m == 0){
    ans = n+1;
  }
  else if (n == 0){
    ans = ack(m-1, 1);
  }
  else{
    ans = ack(m-1, ack(m, n-1));  // <-- Here is the crazyness...
  }
  return ans;
}

int main(int argc, char* argv[]){

  unsigned int first,second,ack_res;
  
  // If no arguments, limits will be introduced from stdin
  if(argc == 1){
    printf("Enter integers range to calculate (separated by one whitespace) -> ");
    scanf("%u",&first);
    scanf("%u",&second);
  }
  // If 2 arguments, limits corresponds to each argument
  else if(argc == 3){
    first = atoi(argv[1]);
    second = atoi(argv[2]);
  }
  else{
    printf("Error: Incorrect arguments number\nSyntax: %s [first_limit] [second_limit]\n",argv[0]);
    exit(EXIT_FAILURE);
  }
  
  // Unset the buffer so everything gets printed instantly
  if(setvbuf(stdout,NULL,_IONBF,0)) {
  	perror("Error en setvbuf");
    exit(EXIT_FAILURE);
  }
  
  // Main loop to see results
  unsigned i,j;
  for (i=0; i<=first; i++){
    for (j=0; j<=second; j++){
      CONT = 0;
      ack_res = ack(i,j);
      printf("ack(%u,%u)=%u. Iterations: %llu\n",i,j,ack_res,CONT);
    }
  }
}
