#include <stdio.h>

void ft_ulti_div (int *a, int *b){
    int temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

int main (){
    int x = 14, y = 4;

    ft_ulti_div(&x,&y);

    printf("Результат деления: %d\n", x);
    printf("Остаток деления: %d\n", y);

    return 0;
}
