# esctructuras en python

# las estructuras son  "formas" de ampaquetar informacion con un cierto criterio

# en  c++ habiamos visto que podiamos definir un array de enteros o de numeros, un "array" sus componentes deben ser del mismo tipo

# LISTAS --> son estructuras de diferentes naturaleza, son mutables (agegar, modificar o eliminar elementos) y tienen un orden pre-establecido

import os

clear = lambda: os.system('cls')

#                0,1,2,3,4,5,6...
lista_numeros = [3,5,1,2,8,7,11,6]
#lista_numeros = list()
'''
print (type(lista_numeros))

# el primer elemento de una lista esta en el indice 0, el siguiente en el 1... y asi

# puedo entonces, identificar a un elemento de una lista por su posicion

print ('el primer elemento de indice 0 es: ', lista_numeros[0])

#tambien podemos acceder al ultimo elemento de la lista
#el indice es -1

print ('el ultimo elemento de la lista es: ', lista_numeros[-1])
print ('el penultimo elemento de la lista es: ', lista_numeros[-2])

cant_numeros = len(lista_numeros)
print (f'esta lista tiene {cant_numeros} elementos')

# uso del bucle for

# for variable in iterable:
    # cuerpo del for

# que es un iterable?  ---> en python un iterable es cualquier cosa que podamos recorrer

'''

# muestren la lista original y una modificada con el doble de cada numero de la lista

for i in lista_numeros:
    print( i, end=' - ')

print()

for i in lista_numeros:
    print( i*2, end=' - ')

# la variable numero va a ir adquiriendo cada uno de los valores del iterable

# recorrer un iterable (ordenado por indice) por su poscicion

for indice in range(len(lista_numeros)):
    print(lista_numeros[indice], end=' - ')
