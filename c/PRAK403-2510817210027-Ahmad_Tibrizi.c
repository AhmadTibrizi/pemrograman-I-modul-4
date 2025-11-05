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
           printf("%d %d - ", list_angka_besar[i], list_angka_kecil[i]);
        } else {
            printf("%d %d - ", list_angka_kecil[i], list_angka_besar[i]);
        }
        
        
    }
    
} 

int main(){
    int angka1, angka2;
    printf("Masukkan 2 bilangan yang dipisah dengan spasi: ");
    scanf("%d %d", &angka1, &angka2);

    silang(angka1, angka2);
    return 0;
}






// bilangan = input("Masukkan angka: ").split()
// angka1 = int(bilangan[0])
// angka2 = int(bilangan[1])

// def silang(angka_besar, angka_kecil):
//     selisih = angka_besar-angka_kecil + 1
//     list_angka_besar = []
//     list_angka_kecil = []
//     for i in range(selisih):
//         list_angka_besar.append(angka_besar-i)
//         list_angka_kecil.append(angka_kecil+i)
//     return [list_angka_besar, list_angka_kecil]
    
// if angka1 > angka2:
//     res = silang(angka1, angka2)
//     list1 = res[0]
//     list2 = res[1]
//     for i in range(len(list1)):
//         print(list1[i], list2[i], end= ' - ')
// else:
//     res = silang(angka2, angka1)
//     list1 = res[0]
//     list2 = res[1]
//     for i in range(len(list1)):
//         print(list2[i], list1[i], end= ' - ')
