while True:
    print("\n--- Calculo de Pontos ---")
    
    try:
        # ENTRADA DE DADOS
        # input() lê texto, int() converte para número inteiro
        p = int(input("Paes vendidos: "))
        d = int(input("Doces vendidos: "))
        b = int(input("Bolos vendidos: "))

        # PROCESSAMENTO
        pontuacao = (p * 1) + (d * 2) + (b * 3)

        # SELEÇÃO (IF - ELIF - ELSE)
        if pontuacao >= 150:
            print("Saida: B")
        elif pontuacao >= 120:
            print("Saida: D")
        elif pontuacao >= 100:
            print("Saida: P")
        else:
            print("Saida: N")

    except ValueError:
        print("Erro: Por favor digite apenas numeros inteiros.")

    # REPETIÇÃO
    # Pergunta ao usuário se deseja continuar
    continuar = input("Deseja continuar? (S/N): ").strip().upper()
    if continuar != 'S':
        break # Sai do loop se a resposta não for S