num1 = prompt("Digite o primeiro número intenrio: ")
num2 = prompt("Digite o segundo número intenrio: ")
num3 = prompt("Digite o terceiro número real: ")

dobro = ((num1 * 2) * (num2 / 2))
soma = (num1 * 3 + parseFloat(num3))
cubo = Math.pow(num3,3)

alert(`O produto do dobro do primeiro com metade do segundo: ${dobro}
A soma do triplo do primeiro com o terceiro: ${soma}      
O terceiro elevado ao cubo: ${cubo}

` )