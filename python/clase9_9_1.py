# tuplas

# las tuplas son inmutables, no se pueden modificar
# las tuplas son mas rapidas que las listas
# las tuplas son mas seguras que las listas
# la posicion de sus elementos es igual a una lista
# al igual que una lista las tuplas admiten cualquier clase de python (int, str, flaot, bool, etc.)
# las tuplas sirven para 'consultar'

tupla = () # tupla vacia 1er forma
tupla1 = tuple() # tupla vacia 2da forma

sexo = ('F', 'M')

print(f'juana es del sexo', sexo[0])

colores = ('verde', 'rojo', 'azul', 'amarillo')

# recoriendo por su iterable
for color in colores:
    print(color)

# recorriendo por su posicion
for pos in range(len(colores)):
    print(colores[pos], pos)


# pertenencia

if 'rojo' in colores:
    print(' este color esta en la tupla')
else:
    print(' este color no esta en la tupla')