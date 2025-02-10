#include <stdio.h>

void ft_rev (int *tab, int size){

    int max = tab[0], min = tab[0];
    int max_index = 0, min_index = 0;

    for (int i = 1; i < size; i++) {
        if (tab[i] > max) {
            max = tab[i];
            max_index = i;
        }
        if (tab[i] < min) {
            min = tab[i];
            min_index = i;
        }
    }

    int temp = tab [max_index];
    tab [max_index] = tab [min_index];
    tab[min_index] = temp;
}

int main (){
    int mass[] = {1,3,5,2,9,6};
    int size = 6;

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
