#include <stdio.h>
void ft_print_reverse_alphabet(void);


void ft_print_reverse_alphabet(void){

 char c='z'; 
 for (c = 'z'; c >= 'a'; c--) {
  write(1,&c,1);
 }

}


int main() {
  ft_print_reverse_alphabet();
write(1,"\n",1);
}