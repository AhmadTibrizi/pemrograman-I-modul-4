looping = int(input("Banyak perulangan: "))
kelipatan = int(input("Banyak kelipatan: "))
temp_hasil = 0
hasil = 0
rumus = ''

for i in range(1, looping+1):
    temp_hasil += i * kelipatan
    hasil += temp_hasil

    if i == looping:
        rumus += f'({i} * {kelipatan}) = {temp_hasil}'
        print(rumus)
        print(hasil)
    else:
        rumus += f'({i} * {kelipatan})'
        print(f'{rumus} = {temp_hasil}')
        rumus += ' + '
