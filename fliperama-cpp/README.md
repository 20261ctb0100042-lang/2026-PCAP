# Fliperama em C++ (MeuApp v4.0)

## O que e
Um sistema de fliperama feito em C++ que cadastra jogadores, registra partidas jogadas no jogo "Adivinhe o Numero" e salva os dados em um arquivo CSV. O projeto foi desenvolvido como evolução da versao em C na disciplina 2026-PCAP[cite: 1, 4].

## Como compilar e rodar
g++ -Wall fliperama.cpp -o fliperama
./fliperama

## Arquivos
- fliperama.cpp: Codigo-fonte principal contendo toda a logica do menu, cadastro, jogo e manipulacao de arquivos[cite: 1, 2, 3].
- jogadores.csv: Arquivo de texto separado por virgulas que guarda o apelido do jogador na primeira coluna e a quantidade de partidas na segunda[cite: 1].

## C x C++: o que mudou
| O que | No fliperama.c (linha) | No fliperama.cpp (linha) |
|---|---|---|
| guardar um jogador | strcpy(apelidos[qtd], novo) (l. 76) | apelidos.push_back(novo) (l. 96) |
| comparar apelidos | strcmp(...) == 0 (l. 53) | == (l. 58) |
| a funcao que cadastra | int cadastrar(..., int qtd) (l. 60) | void cadastrar(... &apelidos, ...) (l. 86) |

## O que o C++ decidiu por mim
Em C, eu precisava definir um limite fixo de jogadores no vetor e controlar manualmente a variavel `qtd` a cada novo cadastro[cite: 4, 6]. Em C++, o `std::vector` gerencia a memoria e cresce dinamicamente sozinho usando `.push_back()`, alem de saber seu proprio tamanho atraves do metodo `.size()`[cite: 1, 2].

## Autoavaliacao
| Criterio | Conceito que espero | Onde se prova (arquivo e linha) |
|---|---|---|
| 1. Estrutura, compilacao e Git | A | fliperama.cpp (l. 1-17) e repositorio Git (branch main)[cite: 1, 6] |
| 2. Cadastro: vectors e referencia | A | fliperama.cpp (l. 86-97 e l. 152-153) |
| 3. Jogo e partidas | A | fliperama.cpp (l. 109-138) |
| 4. Persistencia | A | fliperama.cpp (l. 65-84, l. 158 e l. 174)[cite: 1, 2, 3] |
| 5. Documentacao e comparacao | A | README.md (l. 1-31)[cite: 4] |