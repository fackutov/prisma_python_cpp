'''
frase = "personalmente"

letras = 0


for letra in frase:
    if letra.lower() == "e":
        letras = letras + 1

print(f"La frase {frase} tiene {letras} letras ")


# pedir al usaurio un mail
# validar que ese mail sea correcto
# @ , servidor, no puede empezar con numero

mail = input('ingrese e-mail: ')

servidores_validos = (
                'hotmail.es',
                'gmail.com',
                'adinet.com.uy',
                'hotmail.com',
                'yahoo.es',
                'yahoo.com'
            )

if mail[0].isdigit():
    print('mail incorrecto no puede empezar con un numero')

    cont = 0
    for caracter in mail:
        if caracter == '@':
            cont += 1

    if cont == 0 or cont > 1:
        print('mail incorrecto debe de contener un simbolo @')

    mailLista = mail.split('@')

    for servidor in servidores_validos:
        if servidor == mailLista[-1]:#
            print('servidor correcto')
    
    print('el servidor de su email no existe o no lo conoce nadie')
else:
    print('su email es lo mejorcito que hay')  
'''


# validacion de contraseña

# debe de ser de al menos d e8 caracteres
# debe contener al menos un digito
# no puede comenzar con digito
# debe tener al menos 1 caracter en mayuscula
# al menos un caracter extraño (# $ % @ _ ? !)
# 3 intentos

intentos = 0
caracter_extranio = ('#', '$', '%', '@', '_', '?', '!')

while intentos <= 3:

    password = input('Ingrese su contraseña: ')
    intentos +=1

    if len(password) < 8:
        print('La contraseña debe tener al menos 8 caracteres')
    elif password[0].isdigit():
        print('La contraseña no puede empezar con un digito')
    elif password.islower():
        print('La contraseña debe de tener al menos un caracter en mayusculas')
    elif ' ' in password:
        print('La contraseña no puede contener espacios en blanco')
    else:
        tiene_caracter_extranio = False
        for caracter in password:
            if caracter in caracter_extranio:
                tiene_caracter_extranio = True
                break
        if tiene_caracter_extranio:
            print('contraseña correcta')
            break
        else:
            print('la contraseña debe contener al menosun caracter extraño')
else:
    print('Demasiados intentos')

