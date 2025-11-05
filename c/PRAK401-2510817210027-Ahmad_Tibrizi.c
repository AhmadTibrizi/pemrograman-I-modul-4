#include <stdio.h>
#include <string.h>

int main(){
    int bilangan;
    char simbol;

    printf("Masukkan bilangan dan simbol: ");
    scanf("%d %c", &bilangan, &simbol);
    int temp = bilangan;

    for (int i = 1; i < 51; i++)
    {
        if (i == temp)
        {
            printf("%c", simbol);
            temp += bilangan;
        }else{
            printf("%d", i);
        }
        
    }
    

}


// bilangan_simbol = input("Masukkan bilangan dan simbol: ").split()
// bilangan = int(bilangan_simbol[0])
// simbol = bilangan_simbol[1]
// temp = bilangan

// for i in range(50):
//     if i+1 == temp:
//         print(simbol, end=' ')
//         temp += bilangan
//     else:
//         print (i + 1, end=' ')
// print()