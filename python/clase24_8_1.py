#seguimos con entrada de datos y correccion de errores
'''
try:
    numero = int(input('deme un numero: '))

    print ('el numero ingresado es: ', numero)

except ValueError:
    print("el valor ingresado no es numerico")


'''
# ----------------------------------------
# entrada de dato string

nombre = input('Mi nombre es: ')

# diferentyes formas de tratar un string (nombre)

print('capitalizado: ',nombre.capitalize()) # coloca la primer letra de la primer palabra en mayuscula y todo lo demas en minuscula

print('Titulizado: ',nombre.title()) # coloca la primer letra de cada palabra en mayuscula y todo lo demas en minuscula

print('mayusculas: ',nombre.upper()) # coloca todo en mayuscula

print('minusculas: ',nombre.lower()) # coloca todo en minuscula

# la funcion len()
#sintaxis: len(iterable)
cant_letras = len(nombre) #devuelve un int con la cantidad de caracteres de la variable consultada

print(f'{nombre} tiene {cant_letras} letras')