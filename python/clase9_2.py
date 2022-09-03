# si bien sabemos que existe la funcion title() realizar una rutina que haga lo mismo

frase = input("dame una frase: ")

l_frase = frase.split(' ')

l_nueva = []

for palabra in l_frase:
    palabra = palabra.capitalize()
    l_nueva.append(palabra)
    
frase_nueva = ' '.join(l_nueva)
print (frase_nueva)

