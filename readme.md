# Implementação do Passo a Passo para Usar `printf` e `scanf` em C

Este projeto demonstra a implementação prática do uso dos comandos `printf` e `scanf` na linguagem C, seguindo o guia descrito neste repositório.

## O que foi feito?

1. **Inclusão da Biblioteca `<stdio.h>`**  
   A biblioteca padrão foi incluída para permitir o uso das funções `printf` e `scanf`.

2. **Uso do `printf`**  
   O comando `printf` foi utilizado para exibir mensagens no console, como solicitações de entrada e resultados formatados.

3. **Uso do `scanf`**  
   O comando `scanf` foi utilizado para capturar entradas do usuário, como idade, altura, nome e matrícula.

## Código Implementado

O código implementado está no arquivo [exercicio/treino.c](exercicio/treino.c) e segue o exemplo descrito no guia. Aqui está o código completo:

```c
#include <stdio.h>

int main() {
    int idade;
    float altura;
    char nome[50];
    int matricula;

    printf("\n Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("nome: %s , matricula: %d, idade: %d , altura: %f", nome, matricula, idade, altura);

    return 0;
}
```

## Como Executar

1. Certifique-se de que o compilador GCC está configurado no seu ambiente.
2. Compile o código usando o comando:
   ```sh
   gcc treino.c -o treino.exe
   ```
3. Execute o programa:
   ```sh
   ./treino.exe
   ```

## Resultado Esperado

O programa solicitará as seguintes informações ao usuário:
- Idade
- Altura
- Nome
- Matrícula


Em seguida, exibirá os dados formatados no console.

Agora você pode usar este exemplo como base para aprender e implementar os comandos `printf` e `scanf` em seus próprios projetos!