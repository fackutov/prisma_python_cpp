
# tuplas
# estructuras inmutables, ordenadas, de cualquier naturaleza
# inmutables.. no se pueden modificar
# ordenadas .. cada elemento esta en una posicion definida
# cualquier naturaleza ..  de cualquier clase de datos

# para que sirven? ... para consultar
# son mas rapidas de recorrer que las listas

tupla = ()
#tupla = tuple()


tupla_numeros = (1,2,3,4,5)

for numero in tupla_numeros:
    print(numero, end = ' ')

for pos in range(len(tupla_numeros)):
    print(tupla_numeros[pos], end = ' ')


# tupla unitaria

numeros = (2,)
print(type(numeros))

tupla_t = ((1,2,3),(4,5,6)) # tupla que contiene tuplas

cant_tuplas = len(tupla_t)
print(f'La tupla_t tiene {cant_tuplas} tuplas')

# imprimir el 3

print(tupla_t[0][2])

tupla_lista = ([1,2,3], [4,5,6], [7,8,9])

tupla_lista[0][2] = 12

print(tupla_lista)

lista_tuplas = [(1,2,3),(4,5,6),(7,8,9)]

# en una lista de tuplas, no puedo modificar los valores pero si puedo modificar una tupla entera

lista_tuplas[0] = (11,12,13)
print(lista_tuplas)

# tuplas de tuplas no puedo modificar nada
# una tupla de listas, puedo modificar los elementos de cada lista
# una lista de tuplas puedo modificar cada tupla que pertenezca a la lista
# lista de listas puedo modificar todo
