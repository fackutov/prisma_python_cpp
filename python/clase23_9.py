# construir un diccionario de letras y numeros a partir de una frase, donde cada letra es clave y cada valor es la cantidad de veces que aparece eesa letra

frase = 'el caballo de napoleon'

diccionario = {}

for letra in frase:
    if letra in diccionario:
        diccionario[letra] += 1
    else:
        diccionario[letra] = 1

orden = sorted(diccionario.items())

diccionario2 = dict(orden)

print('letras:')
for x,y in diccionario2.items():
    print(f'\t{x} ---> {y}') 


'''
dic_ordenado = {}
for clave in sorted(dic):
    dic_ordenado[clave] = dic[clave]

print(dic_ordenado)
'''