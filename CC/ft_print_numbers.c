#include <unistd.h>

void ft_putchar(char c){
    write (1,&c,1);
}

void ft_print_numbers(void){
    char number;
    number = '1';
    while (number <='9'){
        ft_putchar(number);
        number++;
    }
}

int main(void){
    ft_print_numbers();
    return 0;
}
