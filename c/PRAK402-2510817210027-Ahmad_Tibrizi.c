#include <stdio.h>

int main(){
    int ganjil[100];
    int genap[100];
    int sizeganjil = 0;
    int sizegenap = 0;
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    for (int i = 1; i < angka+1; i++)
    {
        if (i % 2 == 0)
        {
            genap[sizegenap] = i;
            sizegenap++;
        } else {
            ganjil[sizeganjil] = i;
            sizeganjil++;
        }
        
    }

    
    for (int i = 0; i < sizeganjil; i++)
    {
        printf("%d ", ganjil[i]);
    }

    printf("\n");

    for (int i = sizegenap-1; i >= 0; i--)
    {
        printf("%d ", genap[i]);
    }
    

    return 0;
}
