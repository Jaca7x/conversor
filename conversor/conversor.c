//Biblioteas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#ifdef _WIN32
    #include <windows.h>
#endif

#define COTACAO_DOLAR 5.76
#define CAMBIO_EURO 0.85
#define CAMBIO_EURO_DOLAR 1.0844
#define COTACAO_EURO 6.20

int main()
{
    // Definir idioma e codificação UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Configurar console para UTF-8
#endif /* ifdef MACRO */

    // Opções
    int opcao, opcaoMoedas, opcaoDolar, opcaoReal, opcaoEuro, opcaoMedidas, opcaoMetro, opcaoQuilo, opcaoVolume,
        opcaoTempo, opcaoTemp;

    // Dólar
    float dolarReal, dolar, dolarEuro;

    // Real
    float real, realDolar, realEuro;

    // Euro
    float euro, euroDolar, euroReal;

    // Metro             //Milímetros //Polegadas
    float metros, metrosCm, metrosMm, metrosIn;

    // Quilograma                 //Onças
    float quilo, quiloG, quiloLb, quiloOz;

    // Horas
    float horas, min, seg;

    // Temperatura
    float celsius, fahrenheit, kelvin;

    // Volume
    float litros, mililitros, galao, xicara;

    printf("Selecione uma opção\n");
    printf("1 - Conversão de moedas\n");
    printf("2 - Conversão de medidas\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Selecione uma opção\n");
        printf("1 - Dólar\n");
        printf("2 - Real\n");
        printf("3 - Euro\n");
        scanf("%d", &opcaoMoedas);

        switch (opcaoMoedas)
        {
        case 1: //Dólar
            printf("Selecione uma opção\n");
            printf("1 - Dólar para real\n");
            printf("2 - Dólar para euro\n");
            scanf("%d", &opcaoDolar);

            switch (opcaoDolar)
            {
            case 1: // Dólar para Real
                printf("Cotação do dólar hoje, %.2f \n", COTACAO_DOLAR);
                printf("Digite a quantia de dolar que deseja converter para real (UTILIZE PONTOS NOS LUGARES DAS VÍRGULAS)\n");
                scanf("%f", &dolar);
                dolarReal = dolar * COTACAO_DOLAR;
                printf("%.2f dólares são %f reais", dolar, dolarReal);
                break;
            case 2: // Dólar para Euro
                printf("Cotação do dólar hoje, %.2f \n", COTACAO_DOLAR);
                printf("Digite a quantia de dolar que deseja converter para euro (UTILIZE PONTOS NOS LUGARES DAS VÍRGULAS)\n");
                scanf("%f", &dolar);
                dolarEuro = dolar * CAMBIO_EURO;
                printf("%.2f dólares são %f euros ", dolar, dolarEuro);
                break;
            default:
                printf("Selecione uma opção válida\n");
                break;
            }
            break;
        case 2: //Real
            printf("Selecione uma opção\n");
            printf("1 - Real para dólar\n");
            printf("2 - Real para euro\n");
            scanf("%d", &opcaoReal);

            switch (opcaoReal)
            {
            case 1: // Real para Dólar
                printf("Cotação do dólar hoje, %.2f \n", COTACAO_DOLAR);
                printf("Digite a quantia de reais que deseja converter para dólar (UTILIZE PONTOS NOS LUGARES DAS VÍRGULAS)\n");
                scanf("%f", &real);
                realDolar = real / COTACAO_DOLAR;
                printf("%.2f reais são %f em dólares", real, realDolar);
                break;
            case 2: // Real para Euro
                printf("Cotação do euro hoje, %.2f \n", COTACAO_EURO);
                printf("Digite a quantia de reais que deseja converter para euro (UTILIZE PONTOS NOS LUGARES DAS VÍRGULAS)\n");
                scanf("%f", &real);
                realEuro = real / COTACAO_EURO;
                printf("%.2f reais são %f em dólares", real, realEuro);
                break;
            default:
                printf("Selecione uma opção válida\n");
                break;
            }
            break;

        case 3: //Euro
            printf("Selecione uma opção\n");
            printf("1 - Euro para real\n");
            printf("2 - Euros para dólar\n");
            scanf("%d", &opcaoEuro);

            switch (opcaoEuro)
            {
            case 1: //Euro para Real
                printf("Digite o valor em euros que deseja coverter para reais (UTILIZE PONTOS NOS LUGARES DAS VÍRGULAS)");
                scanf("%f", &euro);
                euroReal = euro * COTACAO_EURO;
                printf("%f euros são %f em reais", euro, euroReal);
                break;
            case 2: //Euro para Dólar
                printf("Digite o valor em euros que deseja coverter para dólares (UTILIZE PONTOS NOS LUGARES DAS VÍRGULAS)");
                scanf("%f", &euro);
                euroDolar = euro * CAMBIO_EURO_DOLAR;
                printf("%f euros são %f em dólar", euro, euroDolar);
                break;
            default:
                printf("Selecione uma opção válida\n");
                break;
            }
        default:
            printf("Selecione uma opção válida\n");
            break;
        }
        break;
    case 2:
        printf("Selecione uma opção\n");
        printf("1 -  Conversões de Comprimento\n");
        printf("2 - Conversões de Peso/Massa\n");
        printf("3 - Conversões de Tempo\n");
        printf("4 - Conversões de Temperatura\n");
        printf("5 - Conversões de Volume\n");
        scanf("%d", &opcaoMedidas);

        switch (opcaoMedidas)
        {
        case 1: //Comprimento
            printf("Selecione uma opção\n");
            printf("1 - Metros para centímetros\n");
            printf("2 - Metros para milímetros\n");
            printf("3 - Metros para polegadas\n");
            scanf("%d", &opcaoMetro);
            switch (opcaoMetro)
            {
            case 1: //Metros para centímetros
                printf("Digite quantos metros que você quer converter para centímetros\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &metros);
                metrosCm = metros * 100;
                printf("%f são %f cm\n", metros, metrosCm);
                break;
            case 2: //Metros para milímetros
                printf("Digite quantos metros que você quer converter para milímetros\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &metros);
                metrosMm = metros * 1000;
                printf("%f metros são %f mm", metros, metrosMm);
                break;
            case 3: //Metros para polegadas
                printf("Digite a quantidade de metros que você quer converter para polegadas\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &metros);
                metrosIn = metros * 39.37;
                printf("%f metros são %f in", metros, metrosIn);
                break;
            default:
                printf("Selcione uma opção válida\n");
                break;
            }
        break;
        case 2: //Massa/Peso
            printf("Selecione uma opção\n");
            printf("1 - Quilogramas para gramas\n");
            printf("2 - Quilogramas para libras\n");
            printf("3 - Quilogramas para onças\n");
            scanf("%d", &opcaoQuilo);

            switch (opcaoQuilo)
            {
            case 1: //Quilograma para grama
                printf("Digite a quantidade de quilogramas que deseja converter para gramas\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &quilo);
                quiloG = quilo * 1000;
                printf("%f quilogramas são %f g", quilo, quiloG);
                break;
            case 2: //Quilograma para libras
                printf("Digite a quantidade de quilogramas que deseja converter para libras\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &quilo);
                quiloLb = quilo * 2.2046;
                printf("%f quilogramas são %f lb", quilo, quiloLb);
                break;
            case 3: //Quilograma para onças
                printf("Digite a quantidade de quilogramas que deseja converter para onças\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &quilo);
                quiloOz = quilo * 35.274;
                printf("%f quilogramas são %f oz", quilo, quiloOz);
                break;
            default:
                printf("Selecione uma opção válida\n");
                break;
            }
        break;
        case 3: //Tempo
            printf("Selecione uma opção\n");
            printf("1 - Horas para minutos\n");
            printf("2 - Horas para segundos\n");
            scanf("%d", &opcaoTempo);

            switch (opcaoTempo)
            {
            case 1: //Horas para minutos
                printf("Escreva quantidade de horas que deseja converter para minutos\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &horas);
                min = horas * 60;
                printf("%f horas são %f minutos\n", horas, min);
                break;
            case 2: //Horas para segundos
                printf("Escreva quantidade de horas que deseja converter para minutos\n");
                printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
                scanf("%f", &horas);
                seg = horas * 3600;
                printf("%f horas são %f segundos", horas, seg);
                break;
            default:
                printf("Selcione uma opção válida");
                break;
            }
        }
        break;
    case 4: //Temperatura
        printf("Selecione uma opção:\n");
        printf("1 - Celsius para Fahrenheit\n");
        printf("2 - Celsius para Kelvin\n");
        scanf("%d", &opcaoTemp);

        switch (opcaoTemp)
        {
        case 1: //Celsius para Fahrenheit
            printf("Digite a temperatura em Celsius(°C) para converte para fahrenheit\n");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 1.8) + 32;
            printf("%f Celsius são %f fahrenheit", celsius, fahrenheit);
            break;
        case 2: //Celsius para Kelvin
            printf("Digite a temperatura em Celsius(°C) para converte para kelvin\n");
            scanf("%f", &celsius);
            kelvin = celsius + 273.15;
            printf("%f Celsius são %f kelvin", celsius, kelvin);
            break;
        default:
            printf("Selecione uma opção válida\n");
            break;
        }
    case 5: //Volume
        printf("Selecione uma opção\n");
        printf("1 - Litros para mililitros\n");
        printf("2 - Litros para galões (EUA)\n");
        printf("3 - Litros para xícaras (EUA)\n");
        scanf("%d", &opcaoVolume);

        switch (opcaoVolume)
        {
        case 1: //Litros para mililitros
            printf("Digite a quantidade de litros deseja converter em mililitros\n");
            printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
            scanf("%f", &litros);
            mililitros = litros * 1000;
            printf("%f litros são %f mililitros", litros, mililitros);
            break;
        case 2: //Litros para galões(EUA)
            printf("Digite a quantidade de litros deseja converter para galões(EUA)\n");
            printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
            scanf("%f", &litros);
            galao = litros / 3.785;
            printf("%f litros são %f galões", litros, galao);
            break;
        case 3: //Litros para xícaras(EUA)
            printf("Digite a quantidade de litros deseja converter para xícaras(EUA)\n");
            printf("(CASO SEJA UM VALOR COM VÍRGULA UTILIZE PONTOS)\n");
            scanf("%f", &litros);
            xicara = litros * 4.167;
            printf("%f litros são %f xícaras", litros, xicara);
            break;
        default:
            printf("Selecione uma opção válida\n");
            break;
        }
        break;
    default:
        printf("Selecione uma opção válida\n");
        break;
    }
}
