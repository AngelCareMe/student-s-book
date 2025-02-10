#include <stdio.h>

void ft_rev (int *tab, int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int max = 0; max < size - i; max++){
            if (tab[max] > tab [max + 1]){
                temp = tab[max];
                tab[max] = tab [max + 1];
                tab [max + 1] = temp;
            }
        }
    }
}

int main (){
    int mass[] = {5,2,1,7,6,4,3};
    int size = 7;

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
