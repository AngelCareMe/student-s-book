#include <stdio.h>
//Программа смещает числа массива вправо, а последнее число выводит в начало
void ft_rev (int *tab, int size){
    int last = tab[size-1];
    for (int i = size - 1; i > 0; i--){
        tab[i] = tab [i-1];
    }
    tab[0] = last;
}

int main (){
    int mass[] = {1,2,3,4,5};
    int size = 5;

    for (int i = 0; i < size; i++){
        printf("%d", mass[i]);
    }

    printf(" => ");
    ft_rev(mass, size);

    for (int i = 0; i < size; i++){
        printf("%d", mass[i]);
    }

    printf("\n");
    return 0;
}
