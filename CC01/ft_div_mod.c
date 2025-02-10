#include <stdio.h>

void ft_div_mod (int a, int b, int *div, int *mod){
    if (b != 0){
        *div = a / b;
        *mod = a % b;
    }
    else {
        printf("Ошибка: деление на 0!\n");
    }

}

int main (){
    int x = 14, y = 4;
    int result_div, result_mod;

    ft_div_mod(x,y, &result_div, &result_mod);

    printf("Результат деления: %d\n", result_div);
    printf("Остаток деления: %d\n", result_mod);

    return 0;
}
