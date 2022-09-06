# agregar elementos a una lista
# existen 2 formas de agregar elementos a una lista

# 1 funcion append()
# sintaxis: nombre _lista.append(elemento)

#l la funcion append() agrega al final de la lista
'''
numeros = []
print(numeros)

numeros.append(3)
print(numeros)

numeros.append(1)
print(numeros)

# segunda forma de agregar
# funcion insert
# sintaxis: nombre_lista.insert(posicion, elemento)

numeros.insert(0, 20)
print(numeros)

numeros.insert(1, 15)
print(numeros)

numeros.insert(23, 100)
print(numeros)

numeros.insert(15, 11)
print(numeros)

'''
# ejercicio, crear una lista con los primeros 20 numeros pares

numeros_pares = []

for num in range(1, 41):
    if num % 2 == 0:
        numeros_pares.append(num)

print(f'los primeros 20 numeros pares son: {numeros_pares}')
