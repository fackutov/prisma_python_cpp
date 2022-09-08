# realizar la siguiente lista  de numeros
# una lista con los numeros del 1 al 20
# de esa lista crear otras 2 listas, una con los pares y otra con los impares
# mostrar las 3 listas

numeros = []
pares = []
impares = []

for num in range(1, 21):
    numeros.append(num)

for num in numeros:
    if num % 2 == 0:
        pares.append(num)
    else:
        impares.append(num)

print(f'lista numeros: {numeros}\nlista pares: {pares}\nlista inpares: {impares}')

# comprensive list

lista_pares = [num for num in numeros if num %2 == 0]

print('lista por comprencion: ', lista_pares)