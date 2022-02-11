programa
{
	inclua biblioteca Matematica --> mat  // Inclui a biblioteca Matemática
	
	funcao inicio() 
	{
		real lado, dobro, area
		
		escreva("Qual o tamanho do lado do quadrado: ") 
		leia(lado)

		area = mat.potencia (lado, 2.0) 	
		dobro = area * 2
		// Exibe os resultados
				
		escreva("A area do quadrado é: ", area, "\n")
		escreva("O dobro do quadrado é: ", dobro)
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 382; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */