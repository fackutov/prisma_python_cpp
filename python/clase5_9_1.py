# sea la siguiente lista

numeros = [2,5,6,8,9,11,21,32,65,76,97]

#mostar de esa lista solo los numeros pares

for i in numeros:
    if i % 2 == 0:
        print(i, end='   ') 

# si una estructurade lista es contenida por elementos soloe nteros o flotantes, puedo obtener los valores maximos y minimos

# maximo --> max(lista)
# minimo --> min(lista)


lista = [3.5, 11, 13, 2, 8, 1.8]

caracteres = ['d', 'e', 'z', 'a']
print()
print (f' el maximo de la lista es: {max(lista)}')
print()
print (f' el minimo de la lista es: {min(lista)}')

print()
print (f' el maximo caracter es: {max(caracteres)}')
print()
print (f' el minimo caracter es: {min(caracteres)}')

# tambien es posible obtener la suma de todos los elementos
# sum(lista)

print()
print (f' la suma de {lista} es: {sum(lista)}')


