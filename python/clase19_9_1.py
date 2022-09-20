# supongamos la siguiente estructura

estructura = ([2,3,4,], [5,6,7], [8,9,10])
'''
estructura2 = []

# realizar un algotimo que me devulva la misma estructura pero con el doble de cada elemento

for lista in estructura:
    estructura2 += [[]]
    for elemento in lista:
        elemento2 = elemento*2
        estructura2[len(estructura2)-1].append(elemento2)

print(estructura2)



for lista in estructura:
    for pos in range(len(lista)):
        lista[pos] = lista[pos] *2

print(estructura)
'''

# vamos a realizar el mismo ejercicio pero con la tecnica comprensive list

estructura = tuple([numero * 2 for numero in lista] for lista in estructura)

print(estructura)