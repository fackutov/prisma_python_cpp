# el algoritmo de pila

# en un apila, el primero en ser agregado es el ultimo en ser quitado

# realizar un algoritmo que dado una pila de libro los los lea

# un libro tiene un nombre e implicitamente una posicion

pila_libros = []

import time
import os

clear = lambda: os.system('cls')
pausar02 = lambda: time.sleep(0.2)
pausar1 = lambda: time.sleep(1)

while True:
   
    clear()
    print() 
    pausar02()  
    print('1 - Colocar nuevo libro') 
    pausar02()
    print('2 - Leer libro')
    pausar02()
    print('3 - mostrar todos los libros')
    pausar02()
    print('0 - salir')
    pausar02()
    print()

    opcion = input('elige una opcion: ')

    if opcion == '0':
        clear()
        print()
        pausar1()
        print('gracias por utilizar este programa')
        print()
        break


    elif opcion == '1':
        nro_libro = len(pila_libros) + 1
        nombre_libro = input('dime un libro: ') 
        libro = [nro_libro, nombre_libro]
        pila_libros.append(libro)

    elif opcion == '2':
        print(f'has leido el libro {pila_libros[-1][1]}')
        pila_libros.pop() # era para quitar el ultimo ajjaa
        input('enter')
    
    elif opcion == '3':
        if len(pila_libros) > 0:
            for libro in pila_libros:
                print(libro)
            input('enter')
        else:
            print('No hay libros para mostrar')
            input('enter')



