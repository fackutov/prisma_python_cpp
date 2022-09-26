# 1. realizar un algoritmo que me cree una lista con los primeros 20 numeros primos

# 2. realizar un algoritmo que me de como resultado una tupla con los primeros 20 numeros de la serie fibonnacci

# 3. realizar un algoritmo que dado una frase solicitada al usuario me devulva una lista con todas aquellas palabras mayores de 'n' caracteres donde n es un numero solicitado al usuario



# Ejercicio 1

print('Ejercicio 1\n')

primos = []

num = 2

while len(primos) < 20:

    cont = 0

    for n in range(2, num):
        if num % n == 0:
            cont +=  1
    
    if cont == 0:
        primos.append(num)

    num += 1

print(primos)
print()
input()

# Ejercicio 2

print('Ejercicio 2\n')

fibonnacci = [0,1,]

num1 = 0
num2 = 1

while len(fibonnacci) < 20:

    resultado = num1 + num2

    num1 = num2
    num2 = resultado # asigne los valores en ves de tomar los ultimos de la lista y ya, la de arriba son los primos y la de abajo los fibonacci

    fibonnacci.append(resultado)

print(tuple(fibonnacci))
print()
input()

# Ejercicio 3

print('Ejercicio 3\n')

frase = 'Se conoce como frase hecha a la frase de uso común que se utiliza como proverbio o a aquella con sentido figurado y forma inalterable: No hay que dormirse en los laureles, Siempre que llovió, paró, Las segundas partes nunca fueron buenas, Como anillo al dedo”. Existen distintos tipos de frases.'

palabras = frase.split(' ')

largas = []

numero = int(input('Dime un numero: '))

for palabra in palabras:
    if len(palabra) > numero:
        largas.append(palabra)

print()
print(f'Las palabras que contienen \nmas de {numero} letras son: ')
for p in largas:
    print(f'\t\t   - {p}')