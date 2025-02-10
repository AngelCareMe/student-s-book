#include <stdio.h>

void ft_rev (int *tab, int size){
    int temp;
    int i = 0;

    while (i<size / 2){
        temp = tab [i];
        tab[i] = tab [size - 1 - i];
        tab[size - 1 - i] = temp;
        i++;
    }
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
