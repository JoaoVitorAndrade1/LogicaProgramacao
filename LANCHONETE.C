#include <stdio.h>

int main() {
    // Declaração de variáveis
    int pedido = 0,quantidade = 0;
    double preco = 0.0, numero = 0.0, total = 0.0;
	char nome[20];


    printf("BEM VINDO AO CHEESE BURGUER!\n");
	printf("Informe o seu nome:");
	scanf("%s",nome);
    do
    {
        // Exibição do menu
        
        printf("CARDAPIO:\n");
        printf("01---------- X SALADA ------------- = 12,00 |\n");
        printf("02---------- X BACON -------------- = 14,00 |\n");
        printf("03---------- X CALABRESA ---------- = 14,00 |\n");
        printf("04---------- DOGAO ---------------- = 10,00 |\n");
        printf("05---------- AGUA/SEM GUAS -------- = 4,00 |\n");
        printf("06---------- AGUA COM GAS --------- = 5,00 |\n");
        printf("07---------- COCA COLA ------------ = 7,00 |\n");
		printf("08----------------- SAIR ----------------- |\n");
        printf("\n");
        printf("ESCOLHA SEU PEDIDO:(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
        scanf("%d", &pedido);
        if(pedido == 1)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            scanf("%d",&quantidade);
            total = total + (12*quantidade);
        }
        else if(pedido == 2)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            
            scanf("%d",&quantidade);
            total = total + (14*quantidade);
        }
        else if(pedido == 3)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            scanf("%d",&quantidade);
            total = total + (14*quantidade);   
        }
        else if(pedido == 4)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            scanf("%d",&quantidade);
            total = total + (10*quantidade);
        }   
        else if(pedido == 5)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            scanf("%d",&quantidade);
            total = total + (4*quantidade);            
        }
        else if(pedido == 6)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            scanf("%d",&quantidade);
            total = total + (5*quantidade);            
        }
        else if(pedido == 7)
        {
            printf("QUANTAS UNIDADES?(SE QUISER ENCERAR O PEDIDO DIGITE 8.)\n");
            scanf("%d",&quantidade);
            total = total + (7*quantidade);            
        }
    }while(pedido != 8);
    
    printf("O VALOR DO SEU PEDIDO E: %.2lf\n",total);
	printf("Muito Obrigado %s volte sempre\n",nome);
	
    
    return(0);
}
    