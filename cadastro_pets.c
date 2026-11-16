
#include <stdio.h>

struct pet
{
	char nome[50];
	char raca[50];
	int dia;
	int mes;
	int ano;
	int adotado;
	};

int main()
{
	struct pet pets[100];
	int totalpet = 0;
	int i;
	
	char nome[50];
	char raca[50];
	int dia, mes, ano;
	int opcao;
	int cadastrado = 0;
	int numeropet;
	
	do
	{
		
	printf("\n ==== ACOLHE PET====\n");
	printf("1 - Cadastrar pet\n");
	printf("2 - Consultar pet\n");
	printf("3 - Registrar adocao\n");
	printf("4 - sair\n");
	printf("==================\n");
	
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	
	switch(opcao){
		case 1:
		if(totalpet >= 100)
		{
			printf("Limite de cadastros atingindo!\n");
			break;
		}
		printf("\nCadastrar pet\n");
		
		
    printf("\n=== CADASTRO DE PETS ===\n");
    
    printf("\nDigite o nome do pet: ");
    scanf("%49s",pets[totalpet].nome);
    
    printf("Digite a raca do pet: ");
    scanf("%49s",pets[totalpet].raca);
    
    printf("Digite data de cadastro (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &pets[totalpet].dia, &pets[totalpet].mes, &pets[totalpet].ano);
    
    
    printf("\n ==== DADOS DO PET ====\n");
    
    printf("\nNome: %s\n",pets[totalpet].nome);
    printf("raca: %s\n", pets[totalpet].raca);
    printf("Data de cadastro: %02d/%02d/%04d\n",
    
    pets[totalpet].dia,
    pets[totalpet].mes,
    pets[totalpet].ano);
    pets[totalpet].adotado = 0;
    
    totalpet++;
		
		break;
		
		case 2:
		if(totalpet > 0)
		{
			printf("\n===== Pets cadastrados =====\n");
			
			for(i =0; i < totalpet; i++)
			{
			printf("\nPet numero: %d\n" , i + 1);
			printf("Nome: %s\n",pets[i].nome);
			printf("Raca: %s\n",pets[i].raca);
			printf("Data do Cadastro: %02d/%02d/%04d\n",pets[i].dia, pets[i].mes,pets[i].ano);
			}
		}
		else
		{
			printf("\nPet Não Cadastrado!\n");
		}
		break;
		
		case 3:
		if(totalpet ==0)
		{
			printf("\nNenhum pet cadastrado!\n");
		break;
	     }
	     
	     printf("\n====== REGISTRAR ADOCAO =====\n");
	     
	     printf("Digite o numero do pet: ");
	     scanf("%d", &numeropet);
	     
	     if(numeropet < 1 || numeropet > totalpet)
	     {
			 printf("\nNumero de Pet invalido!\n");
	     break;
	     }
	     
	     if(pets[numeropet - 1].adotado == 1)
	     {
			 printf("\nEste pet ja foi adotado!\n");
			 break;
		 }
		 
		 pets[numeropet -1].adotado = 1;
		 
		 printf("\nAdocao registrada com sucesso!\n");
		 printf("PET ADOTADO: %s\n", pets[numeropet -1].nome);
		 
		 break;

		case 4:
		printf("Sair do Sistema...\n");
		break;
		
		default:
		printf("Opcao invalida!\n");
		
		}
	}
	while(opcao !=4);
	

    return 0;
}
