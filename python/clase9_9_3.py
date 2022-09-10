
# seguimos con tuplas

datos = [
            (1, 'alejandro', 52), 
            (2, 'joel', 28), 
            (3, 'belu', 24)
        ]

# recorrer esta lista de tuplas

for persona in datos:
    print('Nro      : ', persona[0])
    print('Nrombre  : ', persona[1])
    print('Edad     : ', persona[2])
    print()