#include <stdio.h>
int main(){
  int i, num= 7;
  for(i=1; i<=10; i=i+1){
    printf("%d * %d = %d\n",num,i,num*i);
  }
    return 0;
}
