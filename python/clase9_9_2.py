# continuamos con las tuplas

# tupla unitaria

caracteres =('a','b')

print(caracteres, type(caracteres))

# transformacion

letras_mias = list(caracteres)

for pos in range(len(letras_mias)):
    letras_mias[pos] = letras_mias[pos].upper()

print(letras_mias)

mayusculas = tuple(letras_mias)