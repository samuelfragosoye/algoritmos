# Leitura dos dados (Python lê string por padrão, necessário converter para int)
p = int(input())
d = int(input())
b = int(input())

# Cálculo da pontuação total
pontuacao = (p * 1) + (d * 2) + (b * 3)

# Estrutura condicional (if/elif/else)
if pontuacao >= 150:
    print("B")
elif pontuacao >= 120:
    print("D")
elif pontuacao >= 100:
    print("P")
else:
    print("N")