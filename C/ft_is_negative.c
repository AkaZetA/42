#include <stdio.h>
void ft_is_negative(int n);


void ft_is_negative(int n){ 
char c='x';
 if(n < 0 ) {
  c='N';
 }
 else {
  c='P';
 }
 write(1,&c,1);
}


int main() {
write(1,'N',1);
  ft_is_negative(-5);
write(1,"\n",1);
}