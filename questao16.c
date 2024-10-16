Suponha que as seguintes declarações tenham sido realizadas:
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
Identifique quais dos seguintes comandos é válido ou inválido:

aloha[2] = value; //válido

scanf("%f", &aloha); //inválido: seria errado por não ter um endereçamento em float
                  //sugestão: scanf("%f", *aloha);

aloha = "value"; //inválido: aloha está em float, não em string

printf("%f", aloha); //válido; aloha[0] 

coisas[4][4] = aloha[3]; //válido

coisas[5] = aloha; //pode ser que coisas[5][0] = aloha[0]

pf = value; //inválido: &value; 
                            //Array não pode ser atribuído diretamente, pois seu nome é tratado 
                            //como um ponteiro para o 1° elemento

pf = aloha; //válido: pode ser tratado como um ponteiro para o 1° elemento
