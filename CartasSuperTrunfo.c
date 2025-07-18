#include <stdio.h>

int main(){

    //declarando e inicializando as variáveis das cartas do projeto: Super Trunfo.

    char estado[20] = "Para";
    char codigo[4] = "P01";
    char nome[50] = "RiodeJaneiro";
    int populacao = 200;
    float area = 1234.45;
    float pib = 123.12;
    int ptsturisticos = 30; 

    char estado2[20] = "RiodeJaneiro";
    char codigo2[4] = "R01";
    char nome2[50] = "RiodeJaneiro";
    int populacao2 = 300;
    float area2 = 1234567.45;
    float pib2 = 123456.12;
    int ptsturisticos2 = 50;


    printf("Digite um estado(sem acentuação e junto, Ex.: SaoPaulo): \n");
    scanf("%s", estado); //carta 1

    printf("Digite o segundo estado(sem acentuação e junto, Ex.: RiodeJaneiro): \n");
    scanf("%s", estado2); //carta 2
    
    /*
    usei especificadores como o "%s" para o "scanf" ler corretamente
    o tipo da variável da palavra.
    */

    printf("Digite inicial do primeiro estado que escolheu e em seguida um número de 01 a 04(Ex.: S01): \n");
    scanf("%s", codigo); //carta 1

    printf("Digite inicial do segundo estado que escolheu e em seguida um número de 01 a 04(Ex.: R01): \n");
    scanf("%s", codigo2); //carta 2
    
    printf("Digite o nome da cidade do primeiro estado escolhido(sem acentuação e junto, Ex.: SaoPaulo): \n");
    scanf("%s", nome); //carta 1

    printf("Digite o nome da cidade do segundo estado escolhido(sem acentuação e junto, Ex.: RiodeJaneiro): \n");
    scanf("%s", nome2); //carta 2

    printf("Digite a população da primeira cidade escolhida: \n");
    scanf("%d", &populacao); //carta 1

    printf("Digite a população da segunda cidade escolhida: \n");
    scanf("%d", &populacao2); //carta 2

    /*
    "&" usei apenas quando necessário, como nos tipos int e float.
    Não há preciso usar nos tipos que tem strings.
    */

    printf("Digite a área da primeira cidade escolhida(em KM²): \n");
    scanf("%f", &area); //carta 1

    printf("Digite a área da segunda cidade escolhida(em KM²): \n");
    scanf("%f", &area2); //carta 2

    printf("Digite o PIB da primeira cidade escolhida: \n");
    scanf("%f", &pib); //carta 1

    printf("Digite o PIB da segunda cidade escolhida: \n");
    scanf("%f", &pib2); //carta 2

    printf("Digite a quantidade de pontos turísticos tem a primeira cidade escolhida: \n");
    scanf("%d", &ptsturisticos); //carta 1

    printf("Digite a quantidade de pontos turísticos tem a segunda cidade escolhida: \n");
    scanf("%d", &ptsturisticos2); //carta 2

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", ptsturisticos);

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ptsturisticos2);


    return 0;

    /*
    Neste fim de código, eu usei 14 vezes o comando "printf" para exibir uma mensagem na tela, pedindo informações
    que terá nas cartas deste jogo Super Trufo, com características específicas das duas cidades que o usuário escolheu.
    Após isso, usei o comando "scanf" para ler o que o usuário escreveu para ser exibido de forma organizada
    com o comando "printf", assim como seria uma carta de Super Trufo.
    */
}