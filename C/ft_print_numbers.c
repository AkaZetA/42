#include <stdio.h>
void ft_print_numbers(void);


void ft_print_numbers(void){ 
 for (char c = '0'; c <= '9'; c++) {
  write(1,&c,1);
 }
}


int main() {
  ft_print_numbers();
write(1,"\n",1);
}