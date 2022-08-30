# seguimos con condicionales
'''
numero  = 12

# si ese numero es menor o mayor que 10

if numero >10:
    print('La variable es mayor a 10')
elif numero ==10:
    print('La variable es igual a 10')
else:
    print('la variable es menor a 10')
'''

# sean dos variables enteras solicitadas al usuario
# definir cual de ellas es la menor
# y si son iguales, mostarr por pntalla son iguales

while True:
    try:
        var1 = int(input('decime un numero: '))
        var2 = int(input('decime un numero: '))

        if (var1 > var2):
            print(f'{var1} es mayor que {var2}')
            break

        elif (var1 == var2):
            print(f'las variables tienen el mismo valor ({var1})')
            break

        else:
            print(f'{var1} es menor que {var2}')
            break

    except ValueError:
        print (' Solo pedi numeros ')