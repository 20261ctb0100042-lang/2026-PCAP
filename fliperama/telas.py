# ==============================================================
# ARQUIVO    : telas.py 
# Disciplina : 2026-PCAP
# Aula       : 20
# Autor      : Pedro Felipe 
# Data       : 2026.08.04 
# Conceitos  : <o que este arquivo usa>
# ==============================================================

# Definição da Moldura Caracteres e tamanho 
CAR = '='
TAM = 40

# Função para desenhar uma linha na tela
def linha():
    print(CAR * TAM)

def titulo(texto):
    linha()
    print(texto.center(TAM))
    linha()

