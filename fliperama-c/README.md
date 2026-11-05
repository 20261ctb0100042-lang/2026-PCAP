# Fliperama em C (MeuApp v3.0)

## O que e
Programa em C feito para gerenciar o cadastro de jogadores e um jogo de adivinhação de números num fliperama, desenvolvido para a aula de programação.

## Como compilar e rodar
gcc -Wall fliperama.c -o fliperama
./fliperama

## Arquivos
- fliperama.c: código principal do programa em C com todas as funções de menu, cadastro e ficheiros
- jogadores.csv: arquivo de texto que guarda o registo com o nome e a pontuação dos jogadores salvos

## Python x C: o que mudou
| O que | No modulos.py (linha) | No fliperama.c (linha) |
|---|---|---|
| guardar um jogador | não tem pois nao terminei o fliperama em python | strcpy(apelidos[qtd], novo) (l. 76) |
| comparar apelidos | não tem pois nao terminei o fliperama em python | strcmp(apelidos[i], procurado) == 0 (l. 53) |
| abrir sem arquivo | não tem pois nao terminei o fliperama em python | if (arquivo == NULL) (l. 139) |

## O que o C me obrigou a decidir
O C me obrigou a definir o tamanho máximo do vetor de jogadores com o `#define CAPACIDADE` e a fechar os arquivos manualmente com a função `fclose`.

## Autoavaliacao
| Criterio | Conceito que espero | Onde se prova (arquivo e linha) |
|---|---|---|
| 1. Estrutura, compilacao e Git | A | fliperama.c (l. 1) |
| 2. Cadastro: menu, funcoes e vetores | A | fliperama.c (l. 60) |
| 3. Jogo e partidas | A | fliperama.c (l. 95) |
| 4. Persistencia | A | fliperama.c (l. 125) |
| 5. Documentacao e comparacao | A | README.md (l. 1) |,