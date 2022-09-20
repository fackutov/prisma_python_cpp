
# conjuntos
# los conjuntos son una coleccion desordenada de elementos unicos
# se definene asi:

# la finalidad de los comjuntos son 2: 1) controlar elementos repetidos, 2) crear condiciones para claves de un diccionario

conjunto = set()

cant_elemento = len(conjunto)

print(f'el conjunto tiene {cant_elemento} elementos')

conjunto = {1,5,4,3,2,1}  # los ordena y solo muestra 1 vez cada elemento

print(conjunto)

numeros = set()

# agregar elementos a un conjunto
# funcion add()
# sintais: nombe_conjunto.add(valor)

numeros.add(1)
numeros.add(7)
numeros.add(1)
numeros.add(3)
numeros.add(1)
numeros.add('a')

print(numeros)

