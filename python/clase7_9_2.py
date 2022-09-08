# ejercicio: 
# dada la siguiente lista:

elementos = ['12', 13, 'texto',14, False, 45, 34.1]

# realizar un algoritmo que me cuente cuantos elementos de cada clase hay

numeros = []
strings = []
booleanos = []


for x in elementos:
    if type(x) == int or type(x) == float:
        numeros.append(1)
    elif type(x) == str:
        strings.append(1)
    else:
        booleanos.append(1)

print(f'la lista elementos tiene {len(numeros)} numeros, {len(strings)} strings, {len(booleanos)} booleanos')

'''
# solucion del profe

cant_int, cant_float, cant_string, cant_bool = 0,0,0,0

for elemento in elementos:
    if type(elemento) == str:
        cant_string += 1
    elif type(elemento) == int:
        cant_int += 1
    elif type(elemento) == float:
        cant_float += 1
    elif type(elemento) == bool:
        cant_bool += 1

print('cantidad de enteros  : ', cant_int)
print('cantidad de flotantes: ', cant_float)
print('cantidad de string   : ', cant_string)
print('cantidad de booleanos: ', cant_bool)

'''