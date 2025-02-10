#include <stdio.h>
//Программа вылавливает из массива второе по величине число
void ft_rev (int *tab, int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int max = 0; max < size - i - 1; max++){
            if (tab[max] > tab [max + 1]){
                temp = tab[max];
                tab[max] = tab [max + 1];
                tab [max + 1] = temp;
            }
        }
    }
}

int find_second_largest (int *tab, int size){
    int largest = tab[size - 1];
    for (int i = size -2; i >=0; i--){
        if (tab[i] < largest){
            return tab[i];
        }
    }
    return largest;
}

int main (){
    int mass[] = {5,2,9,1,4,9};
    int size = 6;

    for (int i = 0; i < size; i++){
        printf("%d", mass[i]);
    }

    printf(" => ");
    ft_rev(mass, size);

    int second_largest = find_second_largest (mass, size);
    printf("%d", second_largest);

    printf("\n");
    return 0;
}
