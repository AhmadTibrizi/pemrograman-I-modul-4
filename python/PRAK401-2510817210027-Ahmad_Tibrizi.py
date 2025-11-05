bilangan_simbol = input("Masukkan bilangan dan simbol: ").split()
bilangan = int(bilangan_simbol[0])
simbol = bilangan_simbol[1]
temp = bilangan

for i in range(50):
    if i+1 == temp:
        print(simbol, end=' ')
        temp += bilangan
    else:
        print (i + 1, end=' ')
print()