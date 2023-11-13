#include <stdio.h>
#include <strings.h>

#define MAX_SIZE 1000

void attempt_one(void)
{
  int A[MAX_SIZE][MAX_SIZE];
  for (int i = 0; i < MAX_SIZE; i++){
    for (int j = 0; j < MAX_SIZE; j++){
      A[i][j] = 0;
    }  
  }
}

void attempt_two(void)
{
  int A[MAX_SIZE][MAX_SIZE];
  for (int i = 0; i < MAX_SIZE; i++){
    for (int j = 0; j < MAX_SIZE; j++){
      A[j][i] = 0; 
    }  
  }
}
void attempt_three(void)
{
  int A[MAX_SIZE][MAX_SIZE];
  int *p = &A[0][0];  
  int size = MAX_SIZE * MAX_SIZE;  
  for (int i = 0; i < size; i++){
    *p++ = 0; 
  }
}

void attempt_four(void)
{
  int A[MAX_SIZE][MAX_SIZE];
  bzero((void*) &A[0][0], (size_t) MAX_SIZE * MAX_SIZE*sizeof(int));
}


int main(int argc, char *argv[])
{
  if(argc < 3){
    printf("Invalid option\n");
    return 1;
  }

  printf("Running attempt %c\n", argv[2][0]);

  switch(argv[2][0]){
    case '1':
      attempt_one();
      break;
    case '2':
      attempt_two();
      break;
    case '3':
      attempt_three();
      break;
    case '4':
      attempt_four();
      break;
    default:
      printf("Invalid option\n");
      break;
  }

  return 0;
}