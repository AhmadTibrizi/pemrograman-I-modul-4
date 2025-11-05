bilangan = int(input("Masukkan bilangan kelipatan: "))
simbol = input("Masukkan simbol: ")
temp = bilangan

for i in range(50):
    if i+1 == temp:
        print(simbol, end=' ')
        temp += bilangan
    else:
        print (i + 1, end=' ')
print()