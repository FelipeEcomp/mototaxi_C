#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


struct cliente {
                                                
               char cpf_cl[20];                                                
               char nome_cl[20];
               char end_cl[20];
               char end_dest_cl[20];
               char tel_cl[10];
               
               }typedef cliente;
                                                        
                                                        
                                                        
                                                        
                                                        
                                                        
struct pre_agendada {
                      char nome_agend[20];
                      char end_saida[20];
                      char hor_saida[6];
                      char end_dest[20];
                      char tel_agend[10];
                      char pag_agend[10];
               
               }typedef pre_agendada; 



struct cooperado {
                                                
                   char cpf_co[20];                                                
                   char nome_co[20];
                   char end_co[20];
                   char cart_co[20];
                   char tel_co[10];
                   char tipo_ve[5];
                   char placa[10];
                   char modelo[10];
                   char cor[10];
                   char data_ent[10];
                   char data_said[10]; 
                   char status[10];
                     
                     }typedef cooperado;

struct corr_norm {
                   char nome_norm[20];
                   char end_said_norm[20];
                   char hor_said_norm[10];                
                   char end_dest_norm[20];
                   char tel_norm[10];
                   char pag_norm[10]; 
                      
                      }typedef corr_norm;

struct recibo {
                char tipo[10];      
                char nome_cl[20];
                char nome_co[20];
                char cpf[10];
                char end_said[20];
                char end_dest[20];
                char data[10];
                char quilom[10];
                char horario[10];
                char veic[10];
                char valor[5];
                }typedef recibo;










int cont=0, cont2=0;


int main () {

int num, tipo, cadcl=0, cadcoo=0, norm, agend, padrao, esc, esco, dadcl, dadco, reci;
int cli_conf, coo_conf;    
int cli_cad, coo_cad, rec; 
char cpfdigitado_cl[20], cpfdigitado_co[20];  
char coop_vez;
  
  
cliente cl_1[5];
cooperado coo_1[5];  
pre_agendada agend_1[5];
corr_norm corr_norm1[5];
recibo recibo_1[5];

 system("color 0e"); 
  
  
  
  
  
  while (num!=7){     /*MENU*/
    printf ("²²²²²²²²   ²²²²²²²²   ²²²²²²²²   ²²²²²²²²                          \n");
    printf ("²          ²      ²   ²      ²   ²      ²                 \n");
    printf ("²          ²      ²   ²      ²   ²²²²²²²²              \n");
    printf ("²          ²      ²   ²      ²   ²                \n");
    printf ("²²²²²²²²   ²²²²²²²²   ²²²²²²²²   ²                 \n\n\n");
    printf ("BY FELIPE PINHEIRO\n"); 
    printf ("\n\n\n  ²²²²²\n");
    printf ("²²²²²²²²²\n");
    printf (" O     O\n\n"); 
    printf ("=======================COOP MOTO & TAXI===========================");
    printf ("\n[1]CADASTRAR NOVO CLIENTE\n");
    printf ("[2]CADASTRAR NOVO COOPERADO\n");
    printf ("[3]CORRIDAS\n");
    printf ("[4]BUSCAR CLIENTE CADASTRADO\n");
    printf ("[5]BUSCAR COOPERADO CADASTRADO\n");  
    printf ("[6]RECIBO\n");
    printf ("[7]SAIR\n");    
          
     scanf("%d", &num);



    system("cls"); 


/*Escolha do tipo de corrida*/
    if (num==3) {
    
    printf ("============TIPO DE CORRIDA=================\n");
    printf ("[1]NORMAL\n");
    printf ("[2]PRE-AGENDADA\n");
    scanf ("%d", &tipo);
    
    system("cls");
    
    
/*Corrida normal*/    
    if (tipo==1) {
                
              
                           do {     
                                for (norm=0; norm<=5; norm++) {     
                                    /*Fila*/                                                          
                                 for (cadcoo=cont; cadcoo<=5; cadcoo++) {
                                
                                   
                                    
                                printf ("===============CORRIDA NORMAL===============\n");
                                fflush(stdin);
                                printf ("CPF do cooperado: %s\n", coo_1[cadcoo].cpf_co);
                                printf ("Digite o CPF do cliente: ");
                                gets (cl_1[cadcl].cpf_cl);fflush(stdin);                                
                                printf ("Digite o endereco de saida: ");
                                gets (corr_norm1[norm].end_said_norm);fflush(stdin);
                                printf ("Digite o horario de saida: ");
                                gets (corr_norm1[norm].hor_said_norm);fflush(stdin);
                                printf ("Digite o endereco de destino: ");
                                gets (corr_norm1[norm].end_dest_norm);fflush(stdin);
                                printf ("Digite o telefone: ");
                                gets (corr_norm1[norm].tel_norm);fflush(stdin);
                                printf ("Digite a forma de pagamento: ");
                                gets (corr_norm1[norm].pag_norm);fflush(stdin);
                                
                                
                                
                                system ("cls");
                               
                                                                
/*Mostrar registro na tela*/
                               printf ("===============CORRIDA NORMAL===============\n");
                               printf ("CPF do cooperado: %s\n", coo_1[cadcoo].cpf_co);
                               printf ("CPF do cliente: %s\n", cl_1[cadcl].cpf_cl);
                               printf ("Endereco de Saida: %s\n", corr_norm1[norm].end_said_norm);
                               printf ("Horario de Saida: %s\n", corr_norm1[norm].hor_said_norm);
                               printf ("Endereco de Destino: %s\n", corr_norm1[norm].end_dest_norm);
                               printf ("Telefone: %s\n", corr_norm1[norm].tel_norm);
                               printf ("Forma de Pagamento: %s\n", corr_norm1[norm].pag_norm);
                               printf ("\n\n[1]CADASTRAR NOVA CORRIDA NORMAL\n");
                               printf ("[2]RETORNAR AO MENU PRINCIPAL\n");
                               scanf ("%d", &esc);
                               
                               
                                cont=cadcoo+1;
                                 
                               system ("cls");
                               break;   
                                       }                                                       
                                       }
                                       }while(esc==1 && esc!=2);
                                       }  
    
    
/*Corrida pre agendada*/    
    if (tipo==2) {
                      
                  do { 
                               for (agend=0; agend<=5; agend++) {
                                   /*Fila*/
                                   for (cadcoo=cont; cadcoo<=5; cadcoo++) {
                               printf ("==========CORRIDA PRE-AGENDADA==========\n");
                               fflush(stdin);
                               printf ("CPF do cooperado: %s\n", coo_1[cadcoo].cpf_co);
                               printf ("Digite o CPF do cliente: ");
                               gets (cl_1[cadcl].cpf_cl);fflush(stdin);
                               printf ("Digite o endereco de saida: ");
                               gets (agend_1[agend].end_saida);fflush(stdin);
                               printf ("Digite o horario de saida: ");
                               gets (agend_1[agend].hor_saida);fflush(stdin);
                               printf ("Digite o endereco de destino: ");
                               gets (agend_1[agend].end_dest);fflush(stdin);
                               printf ("Digite o telefone: ");
                               gets (agend_1[agend].tel_agend);fflush(stdin);
                               printf ("Digite a forma de pagamento: ");
                               gets (agend_1[agend].pag_agend);fflush(stdin);
                               
    
                               system ("cls");
                               
                               /*Mostrar registro na tela*/
                               printf ("===============CORRIDA PRE-AGENDADA===============\n");
                               printf ("CPF do cooperado: %s\n", coo_1[cadcoo].cpf_co);
                               printf ("CPF do cliente: %s\n", cl_1[cadcl].cpf_cl);
                               printf ("Endereco de Saida: %s\n", agend_1[agend].end_saida);
                               printf ("Horario de Saida: %s\n", agend_1[agend].hor_saida);
                               printf ("Endereco de Destino: %s\n", agend_1[agend].end_dest);
                               printf ("Telefone: %s\n", agend_1[agend].tel_agend);
                               printf ("Forma de Pagamento: %s\n", agend_1[agend].pag_agend);
                               printf ("\n\nOBS1: Apos 30 minutos verificar Cooperados em transito.");
                               printf ("\nOBS2: Ligar para o Cliente informando o nome do Cooperado.");
                               printf ("\n\n[1]CADASTRAR NOVA CORRIDA PRE-AGENDADA\n");
                               printf ("[2]RETORNAR AO MENU PRINCIPAL\n");
                               scanf ("%d", &esc);
                               
                               cont=cadcoo+1;
                               
                               system ("cls");                                                           
                               break;
                               
                               
                               
               }              
               }
               }while(esc==1 && esc!=2);
               }
      
    
}
    
    
/*Cadastro de clientes*/                                 
if (num==1) {
            do {
            
                    
                    for (cadcl=cont; cadcl<=5; cadcl++) {
                                                         
                    printf ("==========CADASTRO DE CLIENTES==========");                                    
                    printf ("\nCadastro de Cliente N§%d\n", cadcl+1);
                    fflush(stdin);
                    printf ("Digite o CPF: ");
                    gets (cl_1[cadcl].cpf_cl);fflush(stdin);
                    printf ("Digite o nome: ");
                    gets (cl_1[cadcl].nome_cl);fflush(stdin);
                    printf ("Digite o endereco do cliente: ");
                    gets (cl_1[cadcl].end_cl);fflush(stdin);
                    printf ("Digite o endereco de destino: ");
                    gets (cl_1[cadcl].end_dest_cl);fflush(stdin);
                    printf ("Digite o telefone: ");
                    gets (cl_1[cadcl].tel_cl);fflush(stdin);
                    
                    system ("cls");                 
                                     
                    /*Mostrar o registro na tela*/       
                    printf ("==========CADASTRO DE CLIENTES==========\n");             
                    printf ("CPF: %s\nNome: %s\nEndereco do cliente: %s\nEndereco de destino: %s\nTelefone: %s",cl_1[cadcl].cpf_cl, cl_1[cadcl].nome_cl, cl_1[cadcl].end_cl, cl_1[cadcl].end_dest_cl, cl_1[cadcl].tel_cl);
                    printf ("\n\n[1]CADASTRAR NOVO CLIENTE\n");
                    printf ("[2]RETORNAR AO MENU PRINCIPAL\n");
                    scanf ("%d", &esc);
                    
                    
                    /*Caso o CPF ja tenha sido cadastrado anteriormente*/
                    if (strcmp(cl_1[cadcl].cpf_cl,cl_1[cadcl-1].cpf_cl)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcl--;
                                                           }
                    
                    if (strcmp(cl_1[cadcl].cpf_cl,cl_1[cadcl-2].cpf_cl)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcl--;
                                                           }
                    if (strcmp(cl_1[cadcl].cpf_cl,cl_1[cadcl-3].cpf_cl)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcl--;
                                                           }
                    if (strcmp(cl_1[cadcl].cpf_cl,cl_1[cadcl-4].cpf_cl)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcl--;
                                                           }
                    
                    
                    
                                        cont=cadcl+1;
                    
                    
                    system ("cls");
                                 
                    break;             
                                       }             
                               }while(esc==1 && esc!=2);        
                               }
               
             
               
               
               
               
               
               
/*Cadastro de cooperados*/               
if (num==2) {    
             do{      
                   
                             
                              for (cadcoo=cont2; cadcoo<=5; cadcoo++){
                                 
                              printf ("==========CADASTRO DE COOPERADOS==========");          
                              printf ("\nCadastro de Cooperado N§%d\n", cadcoo+1);
                              fflush(stdin);
                              printf ("Digite o CPF: ");
                              gets(coo_1[cadcoo].cpf_co);fflush(stdin);
                              printf ("Digite o nome: ");
                              gets (coo_1[cadcoo].nome_co);fflush(stdin);
                              printf ("Digite o endereco: ");
                              gets (coo_1[cadcoo].end_co);fflush(stdin);
                              printf ("Digite o numero da carteira de motorista: ");
                              gets (coo_1[cadcoo].cart_co);fflush(stdin);
                              printf ("Digite o telefone: ");
                              gets (coo_1[cadcoo].tel_co);fflush(stdin);
                              printf ("Digite o tipo de veiculo: ");
                              gets (coo_1[cadcoo].tipo_ve);fflush(stdin);
                              printf ("Digite a placa do veiculo: ");
                              gets (coo_1[cadcoo].placa);fflush(stdin);
                              printf ("Digite o modelo do veiculo: ");
                              gets(coo_1[cadcoo].modelo);fflush(stdin);
                              printf ("Digite a cor do veiculo: ");
                              gets (coo_1[cadcoo].cor);fflush(stdin);
                              printf ("Digite a data de entrada do veiculo: ");
                              gets (coo_1[cadcoo].data_ent);fflush(stdin);
                              printf ("Digite a data de saida do veiculo: ");
                              gets (coo_1[cadcoo].data_said);fflush(stdin);
                              
                              system("cls");
                              
                              /*Mostrar o registro na tela*/
                              printf ("==========CADASTRO DE COOPERADOS==========\n");  
                              printf ("CPF: %s\nNome: %s\nEndereco: %s\nNumero da Carteira de Motorista: %s\n", coo_1[cadcoo].cpf_co, coo_1[cadcoo].nome_co, coo_1[cadcoo].end_co, coo_1[cadcoo].cart_co);
                              printf ("Telefone: %s\nTipo de Veiculo: %s\nPlaca do Veiculo: %s\nModelo do Veiculo: %s\nCor do Veiculo: %s\n", coo_1[cadcoo].tel_co, coo_1[cadcoo].tipo_ve, coo_1[cadcoo].placa, coo_1[cadcoo].modelo, coo_1[cadcoo].cor);
                              printf ("Data de Entrada do Veiculo: %s\nData de Saida do Veiculo: %s", coo_1[cadcoo].data_ent, coo_1[cadcoo].data_said); 
                              printf ("\n\n[1]CADASTRAR NOVO COOPERADO\n");
                              printf ("[2]RETORNAR AO MENU PRINCIPAL\n");
                              scanf ("%d", &esco);
                              
                              /*Caso o CPF ja tenha sido cadastrado anteriormente*/
                    if (strcmp(coo_1[cadcoo].cpf_co,coo_1[cadcoo-1].cpf_co)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcoo--;
                                                           }
                    
                    if (strcmp(coo_1[cadcoo].cpf_co,coo_1[cadcoo-2].cpf_co)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcoo--;
                                                           }
                    if (strcmp(coo_1[cadcoo].cpf_co,coo_1[cadcoo-3].cpf_co)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcoo--;
                                                           }
                    if (strcmp(coo_1[cadcoo].cpf_co,coo_1[cadcoo-4].cpf_co)==0) {
                    
                                                           printf ("CPF ja cadastrado");
                                                           cadcoo--;
                                                           }
                              
                              
                              
                              
                              cont2=cadcoo+1;
                              
                              system ("cls");
                              
                              break;
                              
}                             
}while(esco==1 && esco!=2);
}           




/*======================RECIBO======================*/
if (num==6) {

do {

for (rec=0; rec<=5; rec++){
printf ("==============RECIBO=============\n");
printf ("Nome do Cliente: ");
fflush(stdin);
gets (recibo_1[rec].nome_cl);fflush(stdin);
printf ("CPF do Cliente: ");
gets (recibo_1[rec].cpf);fflush(stdin);
printf ("Nome do Cooperado: ");
gets (recibo_1[rec].nome_co);fflush(stdin);
printf ("Tipo de Veiculo: ");
gets (recibo_1[rec].veic);fflush(stdin);
printf ("Tipo de corrida: ");
gets (recibo_1[rec].tipo);fflush(stdin);
printf ("Data: ");
gets (recibo_1[rec].data);fflush(stdin);
printf ("Horario de saida: ");
gets (recibo_1[rec].horario);fflush(stdin);
printf ("Endereco de Saida: ");
gets (recibo_1[rec].end_said);fflush(stdin);
printf ("Endereco de Destino: ");          
gets (recibo_1[rec].end_dest);fflush(stdin);      
printf ("Quilometragem: ");
gets (recibo_1[rec].quilom);fflush(stdin);
printf ("Valor da corrida: ");
gets (recibo_1[rec].valor);fflush(stdin);




system ("cls");


printf ("==============RECIBO=============\n");
printf ("Nome do Cliente: %s", recibo_1[rec].nome_cl);
printf ("\nCPF do Cliente: %s", recibo_1[rec].cpf);
printf ("\nNome do Cooperado: %s", recibo_1[rec].nome_co);
printf ("\nTipo de Veiculo: %s", recibo_1[rec].veic);
printf ("\nTipo de corrida: %s", recibo_1[rec].tipo);
printf ("\nData: %s", recibo_1[rec].data);
printf ("\nHorario de saida: %s", recibo_1[rec].horario);
printf ("\nEndereco de Saida: %s", recibo_1[rec].horario);
printf ("\nEndereco de Destino: %s", recibo_1[rec].end_dest);
printf ("\nQuilometragem: %s", recibo_1[rec].quilom);
printf ("\nValor da corrida: %s", recibo_1[rec].valor);
printf ("\n\n[1]NOVO RECIBO\n");
printf ("[2]RETORNAR AO MENU PRINCIPAL\n");
scanf ("%d", &esc);


system ("cls");




break;          
}
}while(esc==1 && esc!=2);     
}





/*==============BUSCA POR CLIENTES E COOPERADOS=========================*/           

/*======================Busca por clientes cadastrados====================================*/
if (num==4) {


            printf ("==========BUSCA DE CLIENTES==========");
            printf ("\nDigite o CPF do Cliente: ");
            scanf ("%s", &cpfdigitado_cl);
            
            for (cadcl=0; cadcl<=5; cadcl++); {
                
            if (strcmp(cl_1[0].cpf_cl,cpfdigitado_cl)==0) {          
            
            printf ("CPF: %s\n", cl_1[0].cpf_cl);
            printf ("Nome: %s\n", cl_1[0].nome_cl);
            printf ("Endereco: %s\n", cl_1[0].end_cl);
            printf ("Telefone: %s\n", cl_1[0].tel_cl);                               
            printf ("\n\n[1]ALTERAR DADOS");
            printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
            scanf ("%d", &dadcl);
            
            system("cls");
            
/*Alteração de dados cadastrados*/            
            if (dadcl==1) {
                    printf ("=================ALTERACAO DE DADOS================\n");     
                    fflush(stdin);
                    printf ("Digite o CPF: ");
                    gets (cl_1[0].cpf_cl);fflush(stdin);
                    printf ("Digite o nome: ");
                    gets (cl_1[0].nome_cl);fflush(stdin);
                    printf ("Digite o endereco do cliente: ");
                    gets (cl_1[0].end_cl);fflush(stdin);
                    printf ("Digite o endereco de destino: ");
                    gets (cl_1[0].end_dest_cl);fflush(stdin);
                    printf ("Digite o telefone: ");
                    gets (cl_1[0].tel_cl);fflush(stdin);
            
            
            }           
            } 
            
            if (strcmp(cl_1[1].cpf_cl,cpfdigitado_cl)==0) {          
            
            printf ("CPF: %s\n", cl_1[1].cpf_cl);
            printf ("Nome: %s\n", cl_1[1].nome_cl);
            printf ("Endereco: %s\n", cl_1[1].end_cl);
            printf ("Telefone: %s\n", cl_1[1].tel_cl);
            printf ("\n\n[1]ALTERAR DADOS");
            printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
            scanf ("%d", &dadcl);
            
            system("cls");
            
/*Alteração de dados cadastrados*/             
            if (dadcl==1) {
                    printf ("=================ALTERACAO DE DADOS================\n");  
                    fflush(stdin);
                    printf ("Digite o CPF: ");
                    gets (cl_1[1].cpf_cl);fflush(stdin);
                    printf ("Digite o nome: ");
                    gets (cl_1[1].nome_cl);fflush(stdin);
                    printf ("Digite o endereco do cliente: ");
                    gets (cl_1[1].end_cl);fflush(stdin);
                    printf ("Digite o endereco de destino: ");
                    gets (cl_1[1].end_dest_cl);fflush(stdin);
                    printf ("Digite o telefone: ");
                    gets (cl_1[1].tel_cl);fflush(stdin);
            
            }
            }
            
            
            if (strcmp(cl_1[2].cpf_cl,cpfdigitado_cl)==0) {          
            
            printf ("CPF: %s\n", cl_1[2].cpf_cl);
            printf ("Nome: %s\n", cl_1[2].nome_cl);
            printf ("Endereco: %s\n", cl_1[2].end_cl);
            printf ("Telefone: %s\n", cl_1[2].tel_cl);
            printf ("\n\n[1]ALTERAR DADOS");
            printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
            scanf ("%d", &dadcl);
            
            system("cls");
            
/*Alteração de dados cadastrados*/            
            if (dadcl==1) {
                    printf ("=================ALTERACAO DE DADOS================\n");     
                    fflush(stdin);
                    printf ("Digite o CPF: ");
                    gets (cl_1[2].cpf_cl);fflush(stdin);
                    printf ("Digite o nome: ");
                    gets (cl_1[2].nome_cl);fflush(stdin);
                    printf ("Digite o endereco do cliente: ");
                    gets (cl_1[2].end_cl);fflush(stdin);
                    printf ("Digite o endereco de destino: ");
                    gets (cl_1[2].end_dest_cl);fflush(stdin);
                    printf ("Digite o telefone: ");
                    gets (cl_1[2].tel_cl);fflush(stdin);
            
            }           
            }
            
            
            if (strcmp(cl_1[3].cpf_cl,cpfdigitado_cl)==0) {          
            
            printf ("CPF: %s\n", cl_1[3].cpf_cl);
            printf ("Nome: %s\n", cl_1[3].nome_cl);
            printf ("Endereco: %s\n", cl_1[3].end_cl);
            printf ("Telefone: %s\n", cl_1[3].tel_cl);
            printf ("\n\n[1]ALTERAR DADOS");
            printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
            scanf ("%d", &dadcl);
            
            system("cls");
            
/*Alteração de dados cadastrados*/            
            if (dadcl==1) {
                    printf ("=================ALTERACAO DE DADOS================\n");    
                    fflush(stdin);
                    printf ("Digite o CPF: ");
                    gets (cl_1[3].cpf_cl);fflush(stdin);
                    printf ("Digite o nome: ");
                    gets (cl_1[3].nome_cl);fflush(stdin);
                    printf ("Digite o endereco do cliente: ");
                    gets (cl_1[3].end_cl);fflush(stdin);
                    printf ("Digite o endereco de destino: ");
                    gets (cl_1[3].end_dest_cl);fflush(stdin);
                    printf ("Digite o telefone: ");
                    gets (cl_1[3].tel_cl);fflush(stdin);
            
            }            
            }
            
            
            if (strcmp(cl_1[4].cpf_cl,cpfdigitado_cl)==0) {          
            
            printf ("CPF: %s\n", cl_1[4].cpf_cl);
            printf ("Nome: %s\n", cl_1[4].nome_cl);
            printf ("Endereco: %s\n", cl_1[4].end_cl);
            printf ("Telefone: %s\n", cl_1[4].tel_cl);
            printf ("\n\n[1]ALTERAR DADOS");
            printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
            scanf ("%d", &dadcl);
            
            system("cls");
            
/*Alteração de dados cadastrados*/            
            if (dadcl==1) {
                    printf ("=================ALTERACAO DE DADOS================\n");     
                    fflush(stdin);
                    printf ("Digite o CPF: ");
                    gets (cl_1[4].cpf_cl);fflush(stdin);
                    printf ("Digite o nome: ");
                    gets (cl_1[4].nome_cl);fflush(stdin);
                    printf ("Digite o endereco do cliente: ");
                    gets (cl_1[4].end_cl);fflush(stdin);
                    printf ("Digite o endereco de destino: ");
                    gets (cl_1[4].end_dest_cl);fflush(stdin);
                    printf ("Digite o telefone: ");
                    gets (cl_1[4].tel_cl);fflush(stdin);
            
            }            
            }
            
            
         if  ((strcmp(cpfdigitado_cl,cl_1[0].cpf_cl)!=0) && (strcmp(cpfdigitado_cl,cl_1[1].cpf_cl)!=0) && (strcmp(cpfdigitado_cl,cl_1[2].cpf_cl)!=0) && (strcmp(cpfdigitado_cl,cl_1[3].cpf_cl)!=0) && (strcmp(cpfdigitado_cl,cl_1[4].cpf_cl)!=0)){  
            printf ("Cliente nao cadastrado");
           
           printf ("\n\n[2]RETORNAR AO MENU PRINCIPAL\n");
           scanf ("%d", &dadcl);
            }
            
                                   
         system ("cls");   
            
            }
            }



/*===================================Busca por cooperados cadastrados===================*/          
if (num==5) {
             
             printf ("==========BUSCA DE COOPERADOS==========");
             printf ("\nDigite o CPF do Cooperado: ");
             scanf ("%s", &cpfdigitado_co);
             
             for (cadcoo=0; cadcoo<=5; cadcoo++); {
                
                 if (strcmp(coo_1[0].cpf_co,cpfdigitado_co)==0) {
                 
                 printf ("CPF: %s\n", coo_1[0].cpf_co);
                 printf ("Nome: %s\n", coo_1[0].nome_co);
                 printf ("Endereco: %s\n", coo_1[0].end_co);
                 printf ("Numero da carteira de motorista: %s\n", coo_1[0].cart_co);
                 printf ("Telefone: %s\n", coo_1[0].tel_co);
                 printf ("Tipo de Veiculo: %s\n", coo_1[0].tipo_ve);
                 printf ("Placa do Veiculo: %s\n", coo_1[0].placa);
                 printf ("Modelo do Veiculo: %s\n", coo_1[0].modelo);
                 printf ("Cor do Veiculo: %s\n", coo_1[0].cor);
                 printf ("Data de entrada do veiculo: %s\n", coo_1[0].data_ent);
                 printf ("Data de saida do veiculo: %s", coo_1[0].data_said);       
                 
                 printf ("\n\n[1]ALTERAR DADOS");
                 printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
                 scanf ("%d", &dadco);
                 
                 system("cls");
                 
/*Alteração de dados cadastrados*/                
                  if (dadco==1) {           
                              printf ("=================ALTERACAO DE DADOS================\n");
                              fflush(stdin);
                              printf ("Digite o CPF: ");
                              gets(coo_1[0].cpf_co);fflush(stdin);
                              printf ("Digite o nome: ");
                              gets (coo_1[0].nome_co);fflush(stdin);
                              printf ("Digite o endereco: ");
                              gets (coo_1[0].end_co);fflush(stdin);
                              printf ("Digite o numero da carteira de motorista: ");
                              gets (coo_1[0].cart_co);fflush(stdin);
                              printf ("Digite o telefone: ");
                              gets (coo_1[0].tel_co);fflush(stdin);
                              printf ("Digite o tipo de veiculo: ");
                              gets (coo_1[0].tipo_ve);fflush(stdin);
                              printf ("Digite a placa do veiculo: ");
                              gets (coo_1[0].placa);fflush(stdin);
                              printf ("Digite o modelo do veiculo: ");
                              gets(coo_1[0].modelo);fflush(stdin);
                              printf ("Digite a cor do veiculo: ");
                              gets (coo_1[0].cor);fflush(stdin);
                              printf ("Digite a data de entrada do veiculo: ");
                              gets (coo_1[0].data_ent);fflush(stdin);
                              printf ("Digite a data de saida do veiculo: ");
                              gets (coo_1[0].data_said);fflush(stdin);
                              
                 
                 
                 }                                
                 }
                 
                 
                 
                 
           if (strcmp(coo_1[1].cpf_co,cpfdigitado_co)==0) {
                 
                 printf ("CPF: %s\n", coo_1[1].cpf_co);
                 printf ("Nome: %s\n", coo_1[1].nome_co);
                 printf ("Endereco: %s\n", coo_1[1].end_co);
                 printf ("Numero da carteira de motorista: %s\n", coo_1[1].cart_co);
                 printf ("Telefone: %s\n", coo_1[1].tel_co);
                 printf ("Tipo de Veiculo: %s\n", coo_1[1].tipo_ve);
                 printf ("Placa do Veiculo: %s\n", coo_1[1].placa);
                 printf ("Modelo do Veiculo: %s\n", coo_1[1].modelo);
                 printf ("Cor do Veiculo: %s\n", coo_1[1].cor);
                 printf ("Data de entrada do veiculo: %s\n", coo_1[1].data_ent);
                 printf ("Data de saida do veiculo: %s", coo_1[1].data_said);       
                 
                 printf ("\n\n[1]ALTERAR DADOS");
                 printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
                 scanf ("%d", &dadco);
                 
                 system("cls");                 
                 
/*Alteração de dados cadastrados*/    
                  if (dadco==1){
                              printf ("=================ALTERACAO DE DADOS================\n");      
                              fflush(stdin);
                              printf ("Digite o CPF: ");
                              gets(coo_1[1].cpf_co);fflush(stdin);
                              printf ("Digite o nome: ");
                              gets (coo_1[1].nome_co);fflush(stdin);
                              printf ("Digite o endereco: ");
                              gets (coo_1[1].end_co);fflush(stdin);
                              printf ("Digite o numero da carteira de motorista: ");
                              gets (coo_1[1].cart_co);fflush(stdin);
                              printf ("Digite o telefone: ");
                              gets (coo_1[1].tel_co);fflush(stdin);
                              printf ("Digite o tipo de veiculo: ");
                              gets (coo_1[1].tipo_ve);fflush(stdin);
                              printf ("Digite a placa do veiculo: ");
                              gets (coo_1[1].placa);fflush(stdin);
                              printf ("Digite o modelo do veiculo: ");
                              gets(coo_1[1].modelo);fflush(stdin);
                              printf ("Digite a cor do veiculo: ");
                              gets (coo_1[1].cor);fflush(stdin);
                              printf ("Digite a data de entrada do veiculo: ");
                              gets (coo_1[1].data_ent);fflush(stdin);
                              printf ("Digite a data de saida do veiculo: ");
                              gets (coo_1[1].data_said);fflush(stdin);
                              
                  system ("cls");
                              
                 printf ("=================ALTERACAO DE DADOS================\n");             
                 printf ("CPF: %s\n", coo_1[1].cpf_co);
                 printf ("Nome: %s\n", coo_1[1].nome_co);
                 printf ("Endereco: %s\n", coo_1[1].end_co);
                 printf ("Numero da carteira de motorista: %s\n", coo_1[1].cart_co);
                 printf ("Telefone: %s\n", coo_1[1].tel_co);
                 printf ("Tipo de Veiculo: %s\n", coo_1[1].tipo_ve);
                 printf ("Placa do Veiculo: %s\n", coo_1[1].placa);
                 printf ("Modelo do Veiculo: %s\n", coo_1[1].modelo);
                 printf ("Cor do Veiculo: %s\n", coo_1[1].cor);
                 printf ("Data de entrada do veiculo: %s\n", coo_1[1].data_ent);
                 printf ("Data de saida do veiculo: %s", coo_1[1].data_said);
                 
                 printf ("\n\nPRESSIONE QUALQUER TECLA PARA RETORNAR AO MENU PRINCIPAL\n");
                 scanf ("%d", &esco);
                              
                                                 
                 }
                 }
                 
                 
                 
           if (strcmp(coo_1[2].cpf_co,cpfdigitado_co)==0) {
                 
                 printf ("CPF: %s\n", coo_1[2].cpf_co);
                 printf ("Nome: %s\n", coo_1[2].nome_co);
                 printf ("Endereco: %s\n", coo_1[2].end_co);
                 printf ("Numero da carteira de motorista: %s\n", coo_1[2].cart_co);
                 printf ("Telefone: %s\n", coo_1[2].tel_co);
                 printf ("Tipo de Veiculo: %s\n", coo_1[2].tipo_ve);
                 printf ("Placa do Veiculo: %s\n", coo_1[2].placa);
                 printf ("Modelo do Veiculo: %s\n", coo_1[2].modelo);
                 printf ("Cor do Veiculo: %s\n", coo_1[2].cor);
                 printf ("Data de entrada do veiculo: %s\n", coo_1[2].data_ent);
                 printf ("Data de saida do veiculo: %s", coo_1[2].data_said);       
                 
                 printf ("\n\n[1]ALTERAR DADOS");
                 printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
                 scanf ("%d", &dadco);
                 
                 system("cls");
                 
/*Alteração de dados cadastrados*/                 
                 if (dadco==1) {
                               printf ("=================ALTERACAO DE DADOS================\n");
                              fflush(stdin);
                              printf ("Digite o CPF: ");
                              gets(coo_1[2].cpf_co);fflush(stdin);
                              printf ("Digite o nome: ");
                              gets (coo_1[2].nome_co);fflush(stdin);
                              printf ("Digite o endereco: ");
                              gets (coo_1[2].end_co);fflush(stdin);
                              printf ("Digite o numero da carteira de motorista: ");
                              gets (coo_1[2].cart_co);fflush(stdin);
                              printf ("Digite o telefone: ");
                              gets (coo_1[2].tel_co);fflush(stdin);
                              printf ("Digite o tipo de veiculo: ");
                              gets (coo_1[2].tipo_ve);fflush(stdin);
                              printf ("Digite a placa do veiculo: ");
                              gets (coo_1[2].placa);fflush(stdin);
                              printf ("Digite o modelo do veiculo: ");
                              gets(coo_1[2].modelo);fflush(stdin);
                              printf ("Digite a cor do veiculo: ");
                              gets (coo_1[2].cor);fflush(stdin);
                              printf ("Digite a data de entrada do veiculo: ");
                              gets (coo_1[2].data_ent);fflush(stdin);
                              printf ("Digite a data de saida do veiculo: ");
                              gets (coo_1[2].data_said);fflush(stdin); 
                              
                              
                 
                              
                              
                                                  
                 }
                 }
                 
                 
                 
           if (strcmp(coo_1[3].cpf_co,cpfdigitado_co)==0) {
                 
                 printf ("CPF: %s\n", coo_1[3].cpf_co);
                 printf ("Nome: %s\n", coo_1[3].nome_co);
                 printf ("Endereco: %s\n", coo_1[3].end_co);
                 printf ("Numero da carteira de motorista: %s\n", coo_1[3].cart_co);
                 printf ("Telefone: %s\n", coo_1[3].tel_co);
                 printf ("Tipo de Veiculo: %s\n", coo_1[3].tipo_ve);
                 printf ("Placa do Veiculo: %s\n", coo_1[3].placa);
                 printf ("Modelo do Veiculo: %s\n", coo_1[3].modelo);
                 printf ("Cor do Veiculo: %s\n", coo_1[3].cor);
                 printf ("Data de entrada do veiculo: %s\n", coo_1[3].data_ent);
                 printf ("data de saida do veiculo: %s", coo_1[3].data_said);       
                 
                 printf ("\n\n[1]ALTERAR DADOS");
                 printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
                 scanf ("%d", &dadco);
                        
                 system("cls");   
                                
/*Alteração de dados cadastrados*/    
             if (dadco==1) {
                              printf ("=================ALTERACAO DE DADOS================\n");
                              fflush(stdin);
                              printf ("Digite o CPF: ");
                              gets(coo_1[3].cpf_co);fflush(stdin);
                              printf ("Digite o nome: ");
                              gets (coo_1[3].nome_co);fflush(stdin);
                              printf ("Digite o endereco: ");
                              gets (coo_1[3].end_co);fflush(stdin);
                              printf ("Digite o numero da carteira de motorista: ");
                              gets (coo_1[3].cart_co);fflush(stdin);
                              printf ("Digite o telefone: ");
                              gets (coo_1[3].tel_co);fflush(stdin);
                              printf ("Digite o tipo de veiculo: ");
                              gets (coo_1[3].tipo_ve);fflush(stdin);
                              printf ("Digite a placa do veiculo: ");
                              gets (coo_1[3].placa);fflush(stdin);
                              printf ("Digite o modelo do veiculo: ");
                              gets(coo_1[3].modelo);fflush(stdin);
                              printf ("Digite a cor do veiculo: ");
                              gets (coo_1[3].cor);fflush(stdin);
                              printf ("Digite a data de entrada do veiculo: ");
                              gets (coo_1[3].data_ent);fflush(stdin);
                              printf ("Digite a data de saida do veiculo: ");
                              gets (coo_1[3].data_said);fflush(stdin);  
                              
                              
                
                                                  
                 }
                 }
                 
                 
                 
           if (strcmp(coo_1[4].cpf_co,cpfdigitado_co)==0) {
                 
                 printf ("CPF: %s\n", coo_1[4].cpf_co);
                 printf ("Nome: %s\n", coo_1[4].nome_co);
                 printf ("Endereco: %s\n", coo_1[4].end_co);
                 printf ("Numero da carteira de motorista: %s\n", coo_1[4].cart_co);
                 printf ("Telefone: %s\n", coo_1[4].tel_co);
                 printf ("Tipo de Veiculo: %s\n", coo_1[4].tipo_ve);
                 printf ("Placa do Veiculo: %s\n", coo_1[4].placa);
                 printf ("Modelo do Veiculo: %s\n", coo_1[4].modelo);
                 printf ("Cor do Veiculo: %s\n", coo_1[4].cor);
                 printf ("Data de entrada do veiculo: %s\n", coo_1[4].data_ent);
                 printf ("data de saida do veiculo: %s", coo_1[4].data_said);       
                 
                 printf ("\n\n[1]ALTERAR DADOS");
                 printf ("\n[2]RETORNAR AO MENU PRINCIPAL\n");
                 scanf ("%d", &dadco);
                 
                 system("cls");
                 
/*Alteração de dados cadastrados*/                
                 if (dadco==1) {
                              printf ("=================ALTERACAO DE DADOS================\n");
                              fflush(stdin);
                              printf ("Digite o CPF: ");
                              gets(coo_1[4].cpf_co);fflush(stdin);
                              printf ("Digite o nome: ");
                              gets (coo_1[4].nome_co);fflush(stdin);
                              printf ("Digite o endereco: ");
                              gets (coo_1[4].end_co);fflush(stdin);
                              printf ("Digite o numero da carteira de motorista: ");
                              gets (coo_1[4].cart_co);fflush(stdin);
                              printf ("Digite o telefone: ");
                              gets (coo_1[4].tel_co);fflush(stdin);
                              printf ("Digite o tipo de veiculo: ");
                              gets (coo_1[4].tipo_ve);fflush(stdin);
                              printf ("Digite a placa do veiculo: ");
                              gets (coo_1[4].placa);fflush(stdin);
                              printf ("Digite o modelo do veiculo: ");
                              gets(coo_1[4].modelo);fflush(stdin);
                              printf ("Digite a cor do veiculo: ");
                              gets (coo_1[4].cor);fflush(stdin);
                              printf ("Digite a data de entrada do veiculo: ");
                              gets (coo_1[4].data_ent);fflush(stdin);
                              printf ("Digite a data de saida do veiculo: ");
                              gets (coo_1[4].data_said);fflush(stdin);  
                              
                              system ("cls");
                              
                 
                              
                                                             
                 }                                                                                                                             
                 }
                             
                             
           if  ((strcmp(cpfdigitado_co,coo_1[0].cpf_co)!=0) && (strcmp(cpfdigitado_co,coo_1[1].cpf_co)!=0) && (strcmp(cpfdigitado_co,coo_1[2].cpf_co)!=0) && (strcmp(cpfdigitado_co,coo_1[3].cpf_co)!=0) && (strcmp(cpfdigitado_co,coo_1[4].cpf_co)!=0)){  
            printf ("Cooperado nao cadastrado");
            printf ("\n\n[2]RETORNAR AO MENU PRINCIPAL\n");
            scanf ("%d", &dadco);
         
            }

         system ("cls");   
                      
}
 }
  } 
}







