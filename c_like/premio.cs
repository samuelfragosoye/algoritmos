using System;

class Program {
    static void Main() {
        // Leitura e conversão das entradas (cada uma em uma linha)
        int p = int.Parse(Console.ReadLine());
        int d = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());

        // Cálculo da pontuação
        int pontuacao = (p * 1) + (d * 2) + (b * 3);

        // Lógica de decisão
        if (pontuacao >= 150) {
            Console.WriteLine("B");
        } else if (pontuacao >= 120) {
            Console.WriteLine("D");
        } else if (pontuacao >= 100) {
            Console.WriteLine("P");
        } else {
            Console.WriteLine("N");
        }
    }
}