# tecnicas algoritmicas sobre estructuras de listas
# cola
# representar una cola de mesa de votacion 
# cada entidad debera tener una credencial (3 letras, un guion, 4 numeros)

# representar una cola de mesa de espera en un hospital
# cada entidad debera tener una credencial (3 letras, un guion, 4 numeros)

import time # importacion de libreria time 
import os

clear = lambda: os.system('cls')

pausar02 = lambda: time.sleep(0.2) # funciones para hacer una pausa 
pausar1 = lambda: time.sleep(1)


lista_pacientes = [] # lista donde colocare los pacientes
 
lista_letras = ['A','B','C','D','E','F'] # letras para las series de los numeros

codigo_paciente = 'A-00' # aqui se guardara el ultimo codigo dado


while True: # inicio del bucle

    # creacion de un menu muy simple
    clear()
    print() # espacio en blanco
    pausar02()  # funcion de pausa (0.2 seg)
    print('1 - Ingresar nuevo paciente') 
    pausar02()
    print('2 - atender paciente')
    pausar02()
    print('3 - mostrar lista de pacientes')
    pausar02()
    print('0 - salir')
    pausar02()
    print()  # si con letras y numeros

    opcion = input('elige una opcion: ')

    if opcion == '0':
        clear()
        print()
        pausar1() # funcion de pausa (1 seg)
        print('gracias por utilizar este programa')
        print()
        break


    elif opcion == '1':
        clear()
        print()
        lista_cod_paciente = codigo_paciente.split('-') # separo el codigo (ej: A-01 --> A  01)
        letra_codigo = lista_cod_paciente[0] # guardo la letra del codigo
        nro_codigo = int(lista_cod_paciente[1]) # guardo el numero del codigo y lo paso a entero
        if nro_codigo < 99: # cambiare esto para que sea menos
            nuevo_numero = nro_codigo +1 # le sumo 1 al numero que tenia si este es menor a 99
            nuevo_codigo = letra_codigo + '-' + str(nuevo_numero).rjust(2,'0') # creo un nuevo codigo (ej: A-03, B-45, D-12) (.rjust(2, '0' --> pone tantos caracteres (0) delante hasta completar el largo indicado (2) )
            pausar02()
            nombre_completo_paciente = input('Ingrese el nombre completo del paciente: ') # ingreso el nombre del paciente (no es necesario pero queda lindo)
            lista_pacientes.append(nuevo_codigo + ' ' + nombre_completo_paciente) # agrego al paciente a la lista
            codigo_paciente = nuevo_codigo # guardo en la variable codigo el nuevo codigo que genere
            pausar1()
            print()
            input('enter para continuar')
        else: # osea si el numero es 99
            if lista_letras.index(letra_codigo) == len(lista_letras)-1: # en caso de que el ultimo numero sea 99 verifico si la letra es la ultima de mi lista de letras y si es asi
                nuevo_codigo = 'A-01' # si la letra es la ultima el nuevo codigo sera el primero
                pausar02()
                nombre_completo_paciente = input('Ingrese el nombre completo del paciente: ')
                lista_pacientes.append(nuevo_codigo + ' ' + nombre_completo_paciente)
                codigo_paciente = nuevo_codigo
                pausar1()
                print()
                input('enter para continuar')
            else: # si la letra no es la ultima de mi lista de letras
                letra = lista_letras.index(letra_codigo) # si la letra no es la ultima de la lista de letras averiguo su posicion
                nueva_letra = lista_letras[letra+1] # tomo la letra que sigue
                nuevo_codigo = nueva_letra + '-01' 
                pausar02()
                nombre_completo_paciente = input('Ingrese el nombre completo del paciente: ')
                lista_pacientes.append(nuevo_codigo + ' ' + nombre_completo_paciente)
                codigo_paciente = nuevo_codigo
                pausar1()
                print()
                input('enter para continuar')

                
    elif opcion == '2':
        clear()
        print()
        if len(lista_pacientes) > 0:
            pausar02()
            print(f'paciente {lista_pacientes[0]} atendido') # informo que el paciente fue atendido
            lista_pacientes.pop(0) # elimino el primero de la lista
            pausar1()
            print()
            input('enter para continuar')
        else:
            pausar02()
            print('no hay pacientes para atender')
            pausar1()
            print()
            input('enter para continuar')


    elif opcion == '3':
        clear()
        print()
        if len(lista_pacientes) > 0:
            for paciente in lista_pacientes:
                pausar02()
                print(paciente) # muestro los pacientes
            pausar1() 
            print()   
            input('enter para continuar')
        else:
            pausar02()
            print('No hay pacientes agendados')
            pausar1()
            print()
            input('enter para continuar')


    else:
        pausar02()
        print('solo se puede elegir 1, 2, 3 o 0') # en caso de no elegir una opcion del menu

