#include <stdio.h>

void combo (int start, int n, int k, char *ccc){
    if (k==n){
        ccc[k]='\0';
        printf ("%s\n", ccc);
        return;
    }
    for (int i = start; i <= 9; i++){
        ccc[k] = '0' + i;
        combo (i + 1, n, k + 1, ccc);
    }
}

int main (){
    int n;
    printf("Enter num 1 to 10: ");
    scanf("%d",&n);

    if (n<0 || n>10){
        printf("Error...");
        return 1;
    }
    char ccc[n+1];
    combo(0, n, 0, ccc);
    return 0;

}
