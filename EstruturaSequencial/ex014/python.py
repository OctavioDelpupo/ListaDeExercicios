
peso = float(input("Digite o peso do peixe:"))

if peso > 50:
    excesso = peso - 50
    multa = excesso * 4
else:
    excesso = "ZERO"
    multa = "ZERO"

print('Excesso de peso é:', str(excesso), ' KG Multa de: R$ ', str(multa)) 
