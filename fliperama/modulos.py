# ==============================================================
# ARQUIVO    : modulos.py
# Conceitos  : <o que este arquivo usa>
# ==============================================================


def ler_opcao(mensagem, validas):
    resposta = input(mensagem + ':').strip()
    while resposta not in validas:
        print("Opção inválida. Tente novamente.")
        resposta = input(mensagem + ':').strip()
    return resposta

def ler_numero(mensagem, minimo, maximo):
    numeros = []

    for n in range(minimo, maximo + 1):
        numeros.append(str(n))
    return int(ler_opcao(mensagem, numeros))