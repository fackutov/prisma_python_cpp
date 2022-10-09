import os, time


clear = lambda: os.system('cls')
pausa = lambda t: time.sleep(t)


def modificar_estructura(estructura,numero):
    largo_estructura = len(estructura)
    for tupla in range(largo_estructura):
        tupla_lista = list(estructura[tupla])
        largo_lista = len(tupla_lista)
        for elemento in range(largo_lista):
            tupla_lista[elemento] = tupla_lista[elemento] * numero
        estructura[tupla] = tuple(tupla_lista)
    return estructura

estructura = [(1,1,1), (1,1,1)]

# en una lista de tuplas, que podemos modificar?

print(estructura)

def blackAndWhite(estructura):
    for num in range(0,256):
        clear()
        estructura = [(1,1,1), (1,1,1)]
        print(modificar_estructura(estructura, 1 * num))
        pausa(0.05)

blackAndWhite(estructura)