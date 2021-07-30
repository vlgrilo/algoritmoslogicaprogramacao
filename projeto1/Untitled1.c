#include<stdio.h>

void pause(void); //Funcao para pausar prog no windows e no GNU/linux
void cls(void); //Funcao para limpar tela no windows e no linux

struct nome
{
    char nome[150];
};

int main()
{
    FILE *fp;
    float preco[150], preconf, nfpreco_produto[150]; //Vetores e variáveis de preço
	int a=0, x=0, v=0, rel=0, y, i, w, aux, cod_exclui, troca; //Variáveis utilizadas para leitura, gravação, exlclusão e ordenar vetores
	int codigo[150], estoque[150], nfcod_produto[150], nfcod[150], nfestoque_produto[150], procura_cod, procura_est, vetor_ref; //Vetores diversos
	int op_principal, op_estoque, op_relatorio, op_geral, teste, teste_est, op_rel_estoque; //Variavéis de Menus e condições
	struct nome p[150];

	do //Do voltado para repetição geral do programa, voltando sempre ao menu principal em alguma hora
	{
	    printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nInforme o que voce deseja fazer:\n[1] - Gerenciar Estoque\n[2] - Registrar Venda\n[3] - Relatorios\n[4] - Sair\nSua escolha: "); //Interface com o usuário
	    scanf ("%d", &op_principal); //Captura de variável do menu principal
	    cls();
	    switch (op_principal) //Leitura de variável para aplicação da condição
	    {
	        case 1: // GERENCIAMENTO DE ESTOQUE
	            do //Repetição com objetivo de poder voltar a este menu após alguma alteração de dados dentro do mesmo
                {
                    printf ("GERENCIAMENTO DE ESTOQUE\n\nO que voce desejar fazer:\n[1] - Incluir novo cadastro\n[2] - Alterar cadastro\n[3] - Excluir cadastro\n[4] - Voltar\nSua escolha: "); //Interface com o usuário
                    scanf ("%d", &op_estoque); //Captura da variável do menu Estoque
                    cls();
                    switch (op_estoque)  //Leitura de variável para aplicação da condição
                    {
                        case 1: //NOVO CADRASTRO
                            do // Repetição com objetivo para informar novo cadastro
                            {
                                printf ("GERENCIAMENTO DE ESTOQUE\n\nINCLUSAO DE NOVO CADASTRO\n\n");
                                teste=0;
                                do //Voltada para teste de condição CÓDIGO se o código existir informa erro e repete
                                {
                                    teste=0;
                                    printf ("Informe o codigo do produto: ");
                                    scanf ("%d", &codigo[x]);
                                    for (i=0; i<x; i++)
                                    {
                                        if (codigo[x]==codigo[i])
                                        {
                                            printf ("ERRO - O codigo ja existe\n");
                                            teste=1;
                                        }
                                    }
                                }while(teste==1); //Fim de condição CÓDIGO
                                printf("Informe o nome do produto: ");
                                gets(p[i].nome);
                                gets(p[i].nome); //GABIARRA PRA FUNCINAR GETS
                                do //Voltada para teste de condição PREÇO se - ou = 0 informa erro e repete
                                {
                                    teste=0;
                                    printf ("Informe o preco unitario: ");
				                    scanf ("%f", &preco[x]);
                                    if (preco[x]<=0)
                                    {
                                        printf ("ERRO - Preco invalido\n");
					                    teste=1;
                                    }
                                }while (teste==1); //Fim de condição PREÇO
                                do //Voltada para teste de condição QUANTIDADE EM ESTOQUE se negativo informa erro e repete
                                {
                                    teste=0;
				                    printf ("Informe a quantidade de produtos no estoque: ");
				                    scanf ("%d", &estoque[x]);
					                if (estoque[x]<0)
					                {
					                    printf ("ERRO - Estoque negativo\n");
					                    teste=1;
					                }
                                }while (teste==1);//Fim de condição QUANTIDADE EM ESTOQUE
                                printf ("\n\nDeseja incluir novo produto?\n[1] - Sim\n[2] - Nao\nSua Escolha: ");
			                    scanf ("%d", &teste); //Captura de variável para repetição de inclusao
                                x++; //Incrementada para mudar a posição de gravação dos vetores
                                rel++; //Incrementada para a geração de relatórios
                                cls();
                            }while (teste==1); //Fim da repetição para inclusão de novo produto
                            cls();
			                printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
			                scanf ("%d", &op_geral); //Decide voltar ao menu principal ou ao menu anterior
			                break;
		                case 2://ALTERACAO DE CADRASTRO
		                    do //Repetição com objetivo para alterar algum cadastro
                            {
                                printf ("GERENCIAMENTO DE ESTOQUE\n\nALTERACAO DE CADASTRO");
			                    teste=0;
				                if (x==0) //Procura se possui alguma coisa em estoque
				                {
				                    printf ("Nenhum produto em estoque\n");
				                }
                                else
                                {
                                    printf ("\n\nInforme o codigo do produto: ");
		   			                scanf ("%d", &procura_cod);
					                for (i=0; i<x; i++)
					                {
					                    teste=0;
                                        if (procura_cod==codigo[i])
                                        {
                                            printf("Produto %s\n", p[i].nome);
                                            do //Voltada para teste de condição PREÇO se - ou = 0  informa erro e repete
                                            {
                                                teste=0;
				 		                        printf ("Informe o preco unitario: ");
				 		                        scanf ("%f", &preco[i]);
							                    if (preco[x]<0)
						 	                    {
						 	                        printf ("ERRO - Preco invalido\n");
						 	                        teste=1;
						 	                    }
                                            }while (teste==1); //Fim de condição PREÇO
                                            do //Voltada para teste de condição QUANTIDADE EM ESTOQUE se negativo informa erro e repete
                                            {
                                                teste=0;
                                                printf ("Informe a quantidade de produtos no estoque: ");
				 		                        scanf ("%d", &estoque[i]);
						 		                if (estoque[x]<0)
                                                {
                                                    printf ("ERRO - Estoque negativo\n");
		     				   	                    teste=1;
			    			   	                }
                                             }while (teste==1);//Fim de condição QUANTIDADE EM ESTOQUE
				 	    	                teste=1;
                                            i=x;
                                        }
                                    }
                                    if (teste==0)
                                    {
                                        printf ("\nERRO - Codigo nao encontrado\n");
				                    }
                                }
                                printf ("\nDeseja alterar outro cadastro?\n[1] - Sim\n[2] - Nao\nSua escolha: ");
			                    scanf ("%d", &teste); //Captura de variável para repetição de alteração
			                    cls();
                            }while (teste==1); //Fim da repetição para alterção de cadastro
                            cls();
			                printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
			                scanf ("%d", &op_geral);
                            break;

		                case 3://EXCLUIR CADRASTRO
		                    do  //Voltada a repetição e exclusão
			                {
			                    printf ("GERENCIAMENTO DE ESTOQUE\n\nEXCLUSAO DE CADASTRO\n");
			                    printf ("Informe o codigo a ser excluido: ");
			                    scanf ("%d", &procura_cod);
			                    teste=0;
				                for (i=0; i<x; i++) //Procura o código
				                {
				                    if (procura_cod==codigo[i])
			   		                {
			   		                    printf ("Codigo Encontrado!\nExcluido com sucesso!");
                                        teste=1;
                      	 				cod_exclui=i;
	 				                    i=x;
					                    for (i=cod_exclui; i<x; i++) //Reordena os vetores e exclui o selecionado
   					                    {
   					                        codigo[i]=codigo[i+1]; //Exclui o código selecionado
					                        preco[i]=preco[i+1]; //Exclui o preço referente ao código selecionado
					                        estoque[i]=estoque[i+1]; //Exclui a quantidade de estoque referente ao codigo selecionado
                                        }
					                    rel=rel-1; //Atualiza o vetor porque tem um item a menos
                                        x=x-1;  //Atualiza o vetor porque tem um item a menos
                                    }
                                }
                                if (teste==0)
                                {
                                    printf ("Codigo nao encontrado!");
				                }
				                printf ("\n\nDeseja excluir outro cadastro?\n[1] - Sim\n[2] - Nao\nSua Escolha:");
			                    scanf ("%d", &teste);
			                    cls();
                            }while (teste==1); //Condiciona se vai excluir outro ou não
			                cls();
                            printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de Estoque\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
			                scanf ("%d", &op_geral);
		                    break;
		                case 4://VOLTA
		                    op_geral=2; //volta ao menu principal
		                    break;
                        default:
                            printf ("Opcao Invalida\n\n");
                            printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao Gerenciador de estoque\n[2] - Voltar ao menu pricipal\nSua escolha: ");
			                scanf ("%d", &op_geral);
                            break;
		            }
		            cls();
                }while (op_geral==1);
                break;
            case 2://REGISTRA VENDA
                do
                {
                    printf ("VENDAS\n\nREGISTRAR VENDA\n");
                    do //Repetição de procura e gravação do número da NF
                    {
                        teste=0;
                        printf ("Informe o codigo da NF: ");
                        scanf ("%d", &procura_cod);
                        for (i=0; i<=v; i++)
                        {
                            if (procura_cod==nfcod[i])
                            {
                                teste=1;
                                i=v+1;
                            }
                            else
                            {
                                if (i==v)
                                {
                                    nfcod[v]=procura_cod;
                                    teste=0;
                                }
                            }
                        }
                        if (teste==1)
                        {
                            printf ("ERRO - O codigo ja existe\n");
                        }
                    }while(teste==1); //Voltada para teste de condição (Se o código da NF já existir, informa erro e repete)
                    do
                    {
                        printf ("\nInforme o codigo do produto: ");
                        scanf ("%d", &procura_cod);
                        for (i=0; i<x; i++)
                        {
                            if (procura_cod==codigo[i])
                            {
                                printf ("Codigo encontrado!!\n");
                                printf("Produto: %s\n", p[i].nome);
                                vetor_ref=i;
                                i=x;
                                teste=0;
                                nfcod_produto[v]=procura_cod;  //Grava no vetor o código do produto vendido, para futuras consultas
                            }
                            else
                            {
                                teste=1;
                            }
                        }
                        if (teste==1)
                        {
                            printf ("Codigo nao encontrado!!\n");
                        }
                    }while(teste==1); //Fim da condição de teste de CÓDIGO DE NF
                    do //Verifica se o numero de produtos vendidos tem em estoque (se nao tiver informa erro)
                    {
                        teste_est=0;
                        printf ("Informe a quantidade de produtos vendidos: ");
                        scanf ("%d", &procura_est);
                        if (procura_est<0)
                        {
                            printf ("ERRO - Estoque invalido\n");
                            teste_est=1;
                        }
                        else
                        {
                            if (procura_est>estoque[vetor_ref])
                            {
                                printf ("ERRO - Nao ha esta quantidade em estoque\n");
                                teste_est=1;
                            }
                            else
                            {
                                estoque[vetor_ref]=estoque[vetor_ref]-procura_est;
                                nfestoque_produto[v]=procura_est;  //Grava no vetor a quantidade vendida, para futuras consultas
                            }
                        }
                    }while (teste_est==1); //Fim da condição TESTE DE ESTOQUE
                    preconf=procura_est*preco[vetor_ref]; //Gera o preço da VENDA
                    printf ("O total da nota e de: %.2f\n\n", preconf);
                    nfpreco_produto[v]=preconf; //Grava no vetor o preço, para futuras consultas
                    v++;	//Atualiza V que é utilizado para mudar o local de gravação no vetor, caso seja feito uma nova venda. O uso dela está relacionado a geração das NF´s*/
                    printf ("\nDeseja registrar outra venda?\n[1] - Sim\n[2] - Nao\nSua escolha: ");
                    scanf ("%d", &teste);
                    cls();
                }while (teste==1);
                break;
            case 3://RELATORIOS
                do
		        {
		            printf ("RELATORIOS\n\nQual tipo de relatorio que voce deseja gerar:\n[1] - Relatorio de Estoque\n[2] - Relatorio de vendas\n[3] - Relatorio em texto\n[4] - Voltar\nSua escolha: ");
		            scanf ("%d", &op_relatorio); //Captura de variável do menu relatorios
		            cls();
		            switch (op_relatorio)//Leitura de variável para aplicação da condição
                    {
                    case 1:
                        printf ("RELATORIOS\n\nQual tipo de relatorio que voce deseja gerar:\n[1] - Estoque Completo\n[2] - Estoque Zerado\n[3] - Voltar\nSua escolha: ");
                        scanf ("%d", &op_rel_estoque); //Captura de variável do menu relatorios
                        cls();
                        switch(op_rel_estoque)
                        {
                            do
                            {
                                case 1://ESTOQUE COMPLETO
                                    printf ("RELATORIO COMPLETO DE ESTOQUE\n\n");
                                    if (x==0)
                                    {
                                        printf ("Nenhum produto em estoque\n");
                                    }
                                    else
                                    {
                                        do //Metodo bolha, para ordenar os codigos
                                        {
                                            troca=0;
                                            for (i=0; i<rel; i++)
                                            {
                                                if (codigo[i]>codigo[i+1])
                                                {
                                                    aux=codigo[i+1];
                                                    codigo[i+1]=codigo[i];
                                                    codigo[i]=aux;

                                                    aux=preco[i+1];
                                                    preco[i+1]=preco[i];
                                                    preco[i]=aux;

                                                    aux=estoque[i+1];
                                                    estoque[i+1]=estoque[i];
                                                    estoque[i]=aux;
                                                    troca=1;
                                                }
                                            }
                                        }while (troca==1); //Fim do uso do metodo bolha
                                        for (i=0; i<rel; i++) //Geração do relatório utilizando pesquisa em vetores
                                            {
                                        printf ("||Codigo Produto: %d\t||Nome: %s\t||Preco: R$ %.2f\t||QT. em Estoque: %d\n", codigo[i], p[i].nome, preco[i], estoque[i]);
                                        }
                                    }
                                    printf ("\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                                    scanf ("%d", &op_geral);
                                    break;
                                case 2://ESTOQUE ZERADO
                                    printf ("RELATORIO DE PRODUTOS COM ESTOQUE ZERADO\n\n");
                                    teste=0;
                                    if (x==0)
                                    {
                                        printf ("Nenhum produto com estoque zerado\n");
                                    }
                                    else
                                    {
                                        printf ("Produtos com estoque zerado:\n");
                                        do //Metodo bolha, para ordenar os codigos
                                        {
                                            troca=0;
                                            for (i=0; i<rel; i++)
                                            {
                                                if (codigo[i]>codigo[i+1])
                                                {
                                                    aux=codigo[i+1];
                                                    codigo[i+1]=codigo[i];
                                                    codigo[i]=aux;

                                                    aux=preco[i+1];
                                                    preco[i+1]=preco[i];
                                                    preco[i]=aux;
                                                }
                                            }
                                        }while (troca==1); //Fim do uso do metodo bolha
                                        for (i=0; i<rel; i++) //Procura produtos com estoque igual a 0 e os informa
                                        {
                                            if (estoque[i]==0)
                                            {
                                                printf ("||Codigo Produto: %d\t||Nome: %s\t||Preco: %.2f\n", codigo[i], p[i].nome, preco[i]);
                                                teste=1;
                                            }
                                        }
                                        if (teste==0)
                                        {
                                            printf ("Nao ha nenhum produto com estoque zerado\n");
                                        }
                                    }
                                    printf ("\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
                                    scanf ("%d", &op_geral);
                                    break;
                                case 3:
                                    op_geral== 2;
                                    break;
                            }while(op_geral == 1);
                        }
                        break;
                        case 2://RELATORIO DE VENDA
		                    do //Uso do metodo bolha para ordenar codigos
                            {
                                troca=0;
                                for (i=0; i<v; i++)
                                {
                                    if (nfcod[i]>nfcod[i+1])
				   	                {
				   	                    aux=nfcod[i+1];
				 	                    nfcod[i+1]=nfcod[i];
				 	                    nfcod[i]=aux;
                                        troca=1;
                                    }
                                }
                            }while (troca==1); //Fim do uso do metodo bolha
                            printf ("RELATORIO DE VENDAS\n\n");
                            teste=0;
                            for (i=0; i<v; i++)
			                {
			                    printf ("||Numero NF: %d\t||Codigo Produto: %d\t||Nome: %s\t||QT. Vendida: %d\t||Preco: %.2f\n", nfcod[i], nfcod_produto[i],p[i].nome, nfestoque_produto[i], nfpreco_produto[i]);
			                    teste=1;
			                }
			                if(teste==0)
                            {
                                printf ("Nao ha nenhuma venda");
                            }
			                printf ("\n\nO que deseja fazer:\n[1] - Voltar ao menu Relatorio\n[2] - Voltar ao menu pricipal\nSua escolha: ");
			                scanf ("%d", &op_geral);
		                    break;
                        case 3://RELATORIO DE TEXTO
                            fp = fopen("relatorio.txt","a+");
                            if(fp == NULL)
                            {
                                printf("\nArquivo nao pode ser lido");
                            }
                            else
                            {
                                fprintf(fp,"##############################\n");
                                fprintf(fp,"\nDATA: %s -- HORA: %s\n\n",__DATE__,__TIME__);//data e hora atual
                                fprintf(fp,"Estoque Completo:\n\n");//estoque completo
                                if(rel==0)
                                {
                                    fprintf(fp,"Nenhum produto em estoque\n");
                                }
                                else
                                {
                                    for (i=0; i<rel; i++) //Geração do relatório utilizando pesquisa em vetores
                                    {
                                        fprintf(fp,"||Codigo Produto: %d\t||Nome: %s\t||Preco: R$ %.2f\t||QT. em Estoque: %d\n", codigo[i], p[i].nome, preco[i], estoque[i]);
                                    }
                                }
                                fprintf(fp,"\nEstoque Zerado:\n\n");//estoque zerado
                                for (i=0; i<rel; i++) //Procura produtos com estoque igual a 0
					            {
					                if (estoque[i]==0)
					                {
					                    teste=1;
                                    }
                                }
                                if (teste==1)
                                {
                                    for (i=0; i<rel; i++) //Procura produtos com estoque igual a 0 e os informa
                                    {
                                        if (estoque[i]==0)
                                        {
                                            fprintf(fp,"||Codigo Produto: %d\t||Nome: %s\t||Preco: %.2f\n", codigo[i], p[i].nome, preco[i]);
                                            teste=1;
                                        }
                                    }
                                }
                                else
                                {
                                     fprintf(fp,"Nenhum produto com estoque zerado\n");
                                }

					            fprintf(fp,"\nVendas:\n\n");//vendas
                                if(v==0)
                                {
                                    fprintf(fp,"Nenhuma venda realizada\n");
                                }
                                else
                                {
                                    for (i=0; i<v; i++)
                                    {
                                        if (nfcod[i]>nfcod[i+1])
                                        {
                                            aux=nfcod[i+1];
                                            nfcod[i+1]=nfcod[i];
                                            nfcod[i]=aux;
                                            troca=1;
                                        }
                                    }
                                    for (i=0; i<v; i++)
                                    {
                                        fprintf(fp,"||Codigo NF: %d\t||Codigo Produto: %d\t||Nome: %s\t||QT. Vendida: %d\t||Preco: %.2f\n", nfcod[i], nfcod_produto[i], p[i].nome, nfestoque_produto[i], nfpreco_produto[i]);
                                    }
                                }
                                fprintf(fp,"\n##############################\n");
                            }
                            fclose(fp);
                            printf("Relatorio gerado com sucesso\n");
                            printf ("\nO que deseja fazer:\n[1] - Voltar ao Menu Relatorio\n[2] - Voltar ao Menu Pricipal\nSua escolha: ");
		                    scanf ("%d", &op_geral);
                            break;
                        case 4:
                            op_geral = 2;
                            break;
                        default:
                            printf ("Opcao Invalida\n\n");
                            printf ("SISTEMA DE GERENCIAMENTO DE VENDAS, ESTOQUE E RELATORIOS\n\nO que deseja fazer:\n[1] - Voltar ao menu Relatorio\n[2] - Voltar ao menu pricipal\nSua escolha: ");
			                scanf ("%d", &op_geral);
                            break;
                    }
		            cls();
                }while (op_geral==1);
	            break;
            case 4://SAIR
                return(0);
            default:
                printf ("Opcao Invalida\n");
                op_geral=2;
                pause();
                cls();
                break;
        }
	}while (op_geral==2);   //Fim do Do-While para repetição geral do prog (vota ao menu principal)
}

void pause(void) // Para o prog caso seja digitado opçao invalida
{
    char c;
    printf("\nPressione ENTER para continuar...");
    scanf("%c%*c", &c);
}

void cls(void) // Limpa tela
{
    #ifdef LINUX // GNU / linux
    system ("clear");

    #elif defined WIN32 // Windows
    system ("cls");

    #else // Outros
    printf("\e[H\e[2J");

    #endif
}
