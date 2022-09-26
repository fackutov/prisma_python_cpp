# 4. Sea la siguinte lista de listas:
import operator


datos = [
    ['Pedro', 'Paredes', 34, 1.78,82],
    ['Juan', 'Lopez', 32, 1.75,75],
    ['Maria', 'Perez', 28, 1.60,65],
    ['Juana', 'Garcia', 25, 1.50,55],
    ['Ana', 'Martinez', 22, 1.40,45],
    ['Jorge', 'Gonzalez', 20, 1.81,102]
]

# crear un diccionario

diccDatos = {}

cont = 1

for dato in datos:
    diccDatos[cont] = dato
    cont +=1 

print()
for x,y in diccDatos.items():
    print(f'{x} -- {y}') 
print('\n')



listaDatos = []

for x,y in diccDatos.items():
    t = (x,y)
    listaDatos.append(t)

print(listaDatos)

listaTupla = sorted(diccDatos.items(), key=operator.itemgetter(0))

# desdarrollar una funcion que reciba la lista de tuplas creada y qeu devuleva una lista de tuplas con la persona con mayor edad

def mayorEdad(tupla):

    mayor = 0
    el_mayor = []
    for tuple in tupla:
        if tuple[1][2] > mayor:
            mayor = tuple[1][2]
            el_mayor = tuple
    return el_mayor

print('\nmayor edad')
print(mayorEdad(listaDatos))


#8. Desarrollar una funcion que reciba la lista de tuplas creada en el punto 6 y que
#devuelva una lista con los datos de todas las personas que tengan una edad entre 20 y 30

nuevaL = []

print('\n ------------ ejercicio 8 ----------\n')

for dato in listaTupla:
    if dato[1][2] >= 20 and dato[1][2] <= 30:
        nuevaL.append(dato)

print(nuevaL)

print('\n ------------ ejercicio 9 ----------\n')

#9. Desarrollar una funcion que reciba la lista de tuplas creada en el punto 6
#y que la imprima en pantalla ordenada alfabeticamente por apellido.

def apellido(lista):
    listaOrdenada = []
    for tupla in lista:
        listaOrdenada.append(tupla[1])
    listaOrdenada.sort(key=lambda x: x[1])
    return listaOrdenada

print('lista ordenada por apellido')
print(apellido(listaDatos))

#11. Desarrollar una funcion que dado una frase solicitada por el usuario,
#devuelva una lista de tuplas, donde en cada tupla, la primera posicion contiene la palabra y la segunda el largo de la misma.

print('\n ------------ ejercicio 10 ----------\n')

frase = 'el caballo blanco de napoleon en realidad es verde'
frase2 = frase.split()

listaCaballo = []

for palabra in frase2:
    tupla = (palabra, len(palabra))
    listaCaballo.append(tupla)

for tupla in listaCaballo:
    print(f'palabra: {tupla[0]:15} largo: {tupla[1]}')