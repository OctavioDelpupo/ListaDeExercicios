programa
{
	inclua biblioteca Matematica --> mat 
	
	funcao inicio()
	{
		inteiro num1,num2, dobro

		real num3, soma, cubo


		escreva("Digite o primeiro número intenrio: ")
		leia(num1)

		escreva("Digite o segundo número intenrio: ")
		leia(num2)

		escreva("Digite o terceiro número real: ")
		leia(num3)

		dobro = ((num1 * 2) * (num2 / 2))		
		escreva("O produto do dobro do primeiro com metade do segundo: ", dobro)

		soma = (3 * num1) + num3
		escreva("\nA soma do triplo do primeiro com o terceiro: ", soma)

		cubo = mat.potencia(num3, 3)
		escreva("\nO terceiro elevado ao cubo: ", cubo)
		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 523; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */