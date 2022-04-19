programa
{
	
	funcao inicio()
	{
		real peso, multa, excesso

		escreva("Digite o peso do peixe: ")
		leia(peso)

		se (peso > 50) {
			excesso = peso - 50
			multa = excesso * 4			
			} 
			senao {
				multa = 0
				excesso = 0
				}
			
		escreva("Excesso de peso é: " + excesso + " KG" + "\nMulta de: R$ " + multa)
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 274; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */