#include <stdio.h>
//Программа смещает числа массива влево, а первое число выводит в конец
void ft_rev (int *tab, int size){
    int first = tab[0];
    for (int i = 0; i < size; i++){
        tab[i] = tab [i+1];
    }
    tab[size-1] = first;
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
