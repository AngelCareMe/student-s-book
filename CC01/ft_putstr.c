#include <stdio.h>

void ft_putstr (char *str){
    while (*str != '\0'){
        putchar(*str);
        str++;
    }
    putchar('\n');
}

int main (){
    char *message = "Здаров бандиты!";
    ft_putstr(message);
    return 0;
}
