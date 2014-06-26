#include <stdio.h>
#include <unistd.h>

int main(){
  int i;
  printf("The pid is %d\n", (int) getpid());
  printf("The parent pid is %d\n", (int)getppid());
  scanf("%d", &i);
  return 0;
}
