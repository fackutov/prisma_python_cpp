# seguimos con listas

numeros = [4,6,8,3,9,1,9]

# eliminar elemento de una lista
# funcion pop()
# sintaxis : nombre_lista.pop(pos)
# observacion: si no se especifica la posicion elimina el ultimo

print(numeros)
numeros.pop()
print(numeros)
numeros.pop(0)
print(numeros)

try:
    numeros.pop(40)
    print(numeros)
except IndexError:
    print( 'intento de eliminar elemento fuera del intervalo')
# <----------->
# remove 
# funcion remove(elemento)
# sintaxis: nombre_lista.remove(elemento)

numeros.remove(8)
print(numeros)

try:
    numeros.remove('x')
    print(numeros)
except ValueError:
    print('el elemento a eliminar no existe')