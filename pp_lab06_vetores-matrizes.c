#include <stdio.h>
#include <stdlib.h>





/*
4. Leia uma matriz 5 × 5. Leia também um valor X. O programa deverá fazer uma busca desse
valor na matriz e, ao final, escrever a localização (linha e coluna) ou uma mensagem de “não
encontrado”.
*/

int main()
{
	int lin=0, col=0, nvet=3;
	int mat[nvet][nvet], x; 
	
			//montando a matriz-entrada de dados
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			printf("Digite o valor da mat[%d][%d] = ", lin+1, col+1);
			scanf("%d", &mat[lin][col]);
		}
	}	
	
			//encontrando x
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			
		}
	}	
	



	return 0;

}




/*
3. Leia uma matriz 4 × 4, imprima a matriz e retorne a localização (linha e a coluna) do maior
valor.
*/
/*
int main()
{
	int lin=0, col=0, nvet=4;
	int mat[nvet][nvet], maior=mat[0][0];
	int mlin=1, mcol=1;
	
		//montando a matriz-entrada de dados
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			printf("Digite o valor da mat[%d][%d] = ", lin+1, col+1);
			scanf("%d", &mat[lin][col]);
		}
	}	
			
			//testando o maior valor
	printf("\n");
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			if((mat[lin][col]) > maior)
			{
				maior=mat[lin][col];
				mlin=lin+1;
				mcol=col+1;
			}
			printf("%2d ", mat[lin][col]);
		}
		printf("\n");
	}		

	
	
	printf("\nO maior valor está na posicao mat[%d][%d] = %d\n\n", mlin, mcol, maior);
		
	return 0;

}
*/

/*
2. Declare uma matriz 5 × 5. Preencha com 1 a diagonal principal e com 0 os demais elementos.
Escreva ao final a matriz obtida.
*/

/*
int main()
{
	int lin=0, col=0, nvet=5;
	int mat[nvet][nvet], i = 0;
	
		//montando a matriz-entrada de dados
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			printf("Digite o valor da mat[%d][%d] = ", lin+1, col+1);
			scanf("%d", &mat[lin][col]);
		}
	}
	printf("\n");
	
		//montando a diagonal principal
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			if(lin==col)
			{
				mat[lin][col]=1;
				
			}
			printf("%2d ", mat[lin][col]);
		}
		printf("\n");
	}
	
	printf("\n");



 return 0;

}

*/

/*
---------------------- Matrizes-----------------------
1. Leia uma matriz 4 × 4, conte e escreva quantos valores maiores que 10 ela possui.
*/

/*
int main()
{
	int lin=0, col=0, nvet=4;
	int mat[nvet][nvet], i = 0;

		//montando a matriz-leitura de valores
	for(lin=0; lin<nvet; lin++)
	{
		for(col=0; col<nvet; col++)
		{
			printf("linha %d, coluna %d = ", lin+1, col+1);
			scanf("%d", &mat[lin][col]);
		}
	}

		//contando numeros maiores que 10
	for(lin=0; lin<nvet; lin++)
	for(col=0; col<nvet; col++)
	if(mat[lin][col] > 10)
	i++;


	printf("\n\nExistem %d números maiores que 10.\n\n", i);

return 0;
}
*/





/*
8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os
dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso
o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para
ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no
vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o
vetor final que foi digitado.
*/
/*
int main()
{
	int i, j, nvet, vet[nvet];
	
	//entrada de dados
	for(i=0; i<nvet; i++)
	{
		printf("Digite o numero para ser armazenado na posicao %d:", i);
		scanf("%d", &vet[i]);

		for(j=0; j==vet[i]; j++)
		{
			

		printf("O valor ja existe no vetor digite outro!"); 
	}



	return 0;
}
*/


/*
7. Faça um programa que receba 6 números inteiros e mostre:
 Os números pares digitados;
 A soma dos números pares digitados;
 Os números ímpares digitados;
 A quantidade de números ímpares digitados;
*/

/*
 int main() 
 {     
 	int nvet=6, vet[nvet], sumpar=0, sumimp=0, i=0;     
 	
 			//entrada valores
 	for(i=0;i<nvet;i++)
 	{      
 		printf("Digite o valor para a posicao %d: ", i);      
 		scanf("%d",&vet[i]);     
 	}     
 	    
 	
 			//teste para par
 	printf("\n\nValores par e suas posicoes:\n");
 	for(i=0; i<nvet; i++)
 	{      
 		if(vet[i]%2==0)
 		{       
 			sumpar=sumpar+vet[i];       
 			printf("vet[%d] = %d\n", i, vet[i]);      
 		}    
 	}
 	
 	
 	 			//soma valores par
 	printf("Soma dos valores par: %d\n",sumpar); 
 	
 	
 			//teste para impar  
 	printf("\nValores impares e suas posicoes\n");
 	for(i=0; i<nvet; i++)
 	{      
 		if(vet[i]%2!=0)
 		{
 			sumimp=sumimp+vet[i];      
 			printf("vet[%d] = %d\n", i, vet[i]);      
 		}     
 	}   
 	
 	  
 			//soma valores impar    
 	printf("Soma dos valores impar: %d\n\n",sumimp);   
 	
 	   
 	return 0; 
 }
*/




/*
6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que
são primos e suas respectivas posições no vetor.
*/

/*
int main()  // esse não está rodando
{
	int i=0, j=0, verifica, nvet=1;
	int vet[nvet];
	
	
				//entrada de valores
	for (i=0; i<nvet; i++)    
	{
		printf("Digite um valor para a posicao %d: ",i);
		scanf("%d", &vet[i]);
	}
	
	
				//monta e mostra o vetor
	printf("\nOs valores digitados foram:\n");
	printf("vet[%d] = { ", nvet);    

		for (i=0; i<nvet; i++)
		{
			printf("%d ", vet[i]);			
		}
		
	printf("}\n");
	
				//relacionando os valores que sao primos
	
	printf("\nOs valores primos e suas respectivas posicoes sao:\n");
	
	
    	for (i=0; i<nvet; i++) 
    	{ 
    		for (j=2; i<vet[i]; j++)
       		{
   	 		if(vet[i]%j!=0)
   	 		{
   	 			printf("vet[%d] = %d\n", i, vet[i]); 	
               		}
               	}
        {	


	printf("\n\n");
	return 0;
}
*/

/*
5. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i
a posição do elemento no vetor. Em seguida imprima o vetor na tela.
*/

/*
int  main ()
{
	printf("\n");
	int vet[ 50 ],i;
	for (i = 0 ; i < 50 ; i++)
	{
		vet[i] = (i + 5 * i) %(i+ 1 );
	}

	for (i = 0 ; i < 50 ; i++)
	{
		printf ( " [%d] " , vet[i]);
	}
	printf("\n\n");
	return  0 ;
	
}
*/

/*
4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
o maior e o menor valor.
*/

/*
int main()
{
	int i, maior=0, vmaior, nvet=3;
	float vet[nvet];
	
	printf("\n");
				//entrada de valores
	for(i=0; i<nvet; i++)    
	{
		printf("Digite um valor para a posicao %d: ",i);
		scanf("%f", &vet[i]);
	}
	
				//mostra o vetor com a ordem dos valores
	printf("\nOs valores digitados foram: vet[%d] = { ", nvet);    
		for(i=0; i<nvet; i++)
		{
			printf("%.2f ", vet[i]);
			
		}
	printf("}");
	
	
				 //encontra o maior valor
 	maior = vet[0];
  	vmaior = 0;
	for (i=1; i<nvet; i++) 
	{
		if (vet[i] > maior) 
		{
			maior = vet[i];
			vmaior = i;
        	}
    	}
	
	
	
	printf("\nO maior valor esta na posicao vet[%d] = %d", vmaior, maior);

			
	
		printf("\n\n");

	return 0;	
}	
*/

/*
3.Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na
ordem inversa.
*/
/*
int main()
{
	int i, nvet=6;
	float vet[nvet];
	
	printf("\n");
	
	for(i=0; i<nvet; i++)
	{
		printf("Digite um valor para a posicao %d: ", i);
		scanf("%f", &vet[i]);
	}
	
		printf("\nOs valores digitados foram: vet[%d] = { ", nvet);
		for(i=0; i<nvet; i++)
		{
			printf("%.2f ", vet[nvet-1-i]); //tentativa de simplificar o programa salvando o valor na ultima posição do vetor
		}		
		printf("}");
			
	printf("\n\n");

	return 0;	
}
*/

/*
2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá
escrever a soma dos valores encontrados nas respectivas posições X e Y.
*/

/*
int main()
{
	int i, x, y, tvet=8;
	float vet[tvet];


	printf("\n");
	for(i=0; i<tvet; i++)
	{
		printf("Digite o valor da posicao %d: ", i);
		scanf("%f", &vet[i]);
	}

	printf("\n");

	do
	{
		printf("Digite uma posicao para x: ");
		scanf("%d", &x);
		if(x<0 || x > tvet)
		{
			printf("\nPosicao invalida!!\n");
			printf("\nDigite outras posicoes para x e y\n");
		}
	}while(x<0 || x > tvet);

	do{
		printf("Digite uma posicao para y: ");
		scanf("%d", &y);
		if(y < 0 || y > tvet)
		{
			printf("\nPosicao invalida!!\n");
			printf("\nDigite outras posicoes para x e y\n");
		}

	}while(y < 0 || y > tvet);
	
	printf("\n\n");
	
	printf("O vetor digitado foi: vet[%d] = { ", tvet);
	for(i=0; i<tvet; i++)
	{
		printf("%.2f ", vet[i]);
	}
	printf("}");

	printf("\nA soma dos valores na posicao vet[%d] e vet[%d] e igual a: %.2f\n\n", x, y, vet[x]+vet[y]);

	return 0;
}
*/


/*
1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
d) Mostre na tela cada valor do vetor A, um em cada linha.
*/
/*
int main()
    {

    int soma, i, n, A[6] = {1,0,5,-2,-5,7};
    soma = i = n = 0;

    soma = A[0] + A[1] + A[5];

    printf("\nA soma dos valores %d, %d, e %d eh igual a: %d\n\n", A[0], A[1], A[5], soma);

    A[4] = 100;

    for(i=0; i<6; i++){
            n = A[i];
        printf("A posicao A[%d] eh igual a: %d\n", i, n);
    }


    return 0;
}
*/
