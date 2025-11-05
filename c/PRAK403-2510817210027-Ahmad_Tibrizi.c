#include <stdio.h>

void silang(int angka1, int angka2){
    int angka_besar, angka_kecil;
    
    if (angka1 > angka2)
    {
        angka_besar = angka1;
        angka_kecil = angka2;
    } else {
        angka_besar = angka2;
        angka_kecil = angka1;
    }
    
    int selisih = angka_besar - angka_kecil;
    int list_angka_besar[angka_besar], list_angka_kecil[angka_besar];
    int size_angka = 0;

    for (int i = 0; i <= selisih; i++)
    {
        list_angka_besar[size_angka] = angka_besar-i;
        list_angka_kecil[size_angka] = angka_kecil+i;
        size_angka++;
    }

    for (int i = 0; i < size_angka; i++)
    {
        if (angka1 > angka2)
        {
            if (i != size_angka - 1)
            {
                printf("%d %d - ", list_angka_besar[i], list_angka_kecil[i]);
            }else{
                printf("%d %d", list_angka_besar[i], list_angka_kecil[i]);
            }
            
        } else {
            if (i!= size_angka - 1)
            {
                printf("%d %d - ", list_angka_kecil[i], list_angka_besar[i]);
            }
            else
            {
                printf("%d %d", list_angka_kecil[i], list_angka_besar[i]);
            }
            
        }    
    }
    printf("\n");
} 

int main(){
    int angka1, angka2;
    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);
    printf("Masukkan angka kedua: ");
    scanf(" %d", &angka2);

    silang(angka1, angka2);
    return 0;
}
