# aplicando tecnicas de comprensive list


numeros = [1,2,3,4,5,6,7,8,9,10]

# crear una nueva lista con solo los pares

pares = [ num for num in  numeros if num % 2 == 0 ]


'''
for num in numeros:
    if numero % 2 == 0:
        pares.append(num)
'''

print(pares)

# supongamos una frase
# rescatar las vocales de dicha frase y guardarlas en una lista

frase = 'El caballo blanco de napoleon es en realidad verde'

lista_vocales = []
'''
lista_vocales = [letra for letra in frase if letra.lower() == 'a' or letra.lower() == 'e' or letra.lower() == 'i' or letra.lower() == 'o' or letra.lower() == 'u']


print(lista_vocales)

'''
vocales = ('a', 'e', 'i', 'o', 'u')

for letra in frase:
    if letra.lower() in vocales:
        if letra not in lista_vocales:
            lista_vocales.append(letra)

print(lista_vocales)

listaVocales = [letra for letra in frase if letra.lower() in vocales]

# eliminar repetido

listaVocales = [letra for letra in set(lista_vocales)]

print(listaVocales)

