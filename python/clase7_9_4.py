
# ordenar una lista:

numeros = [32,12,11,56,13,898,1,8,33,110,6,5]

# funcion sort()
# sintaxia nombre de la lista.sort(key, reverse)
# la funcion sort() ordena la propia lista y no me crea NADA
# en python, nada, None
# en consecuencia esta funcion resulta ser un tanto invasiva
# reverse = true para orenar la lista de manera descendente, por defecto esta en reverse= False y la muestra en forma ascendente 
# por tanto el orden de la lista original la pierdo

resultado = numeros.sort()

print(resultado)
print(numeros)


# segunda forma de ordenar un iterable (lista)

# se puede ordenar una lista usando al funcion sorted()
# sintaxis: nueva_lista = sorted(iterable, key, reverse)
# la funcion sorted() SIEMPRE me devuelve una lista

numeros = [32,12,11,56,13,898,1,8,33,110,6,5]

lista_ordenada = sorted(numeros, reverse=True)
print('lista ordenada con sorted: ', lista_ordenada)

