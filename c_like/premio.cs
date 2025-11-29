using System;

class Premio {
    static void Main() {
        string opcao;

        // REPETIÇÃO (DO-WHILE)
        // Garante que o bloco rode e depois verifique a condição
        do {
            Console.WriteLine("\n--- Sistema de Premios ---");

            // ENTRADA DE DADOS
            // Lê a linha, converte para Inteiro e armazena
            Console.Write("Numero de Paes: ");
            int p = int.Parse(Console.ReadLine());
            
            Console.Write("Numero de Doces: ");
            int d = int.Parse(Console.ReadLine());
            
            Console.Write("Numero de Bolos: ");
            int b = int.Parse(Console.ReadLine());

            // PROCESSAMENTO
            int pontuacao = (p * 1) + (d * 2) + (b * 3);

            // SELEÇÃO
            // Decide o output baseado no valor da pontuação
            Console.Write("Resultado: ");
            if (pontuacao >= 150) {
                Console.WriteLine("B");
            } else if (pontuacao >= 120) {
                Console.WriteLine("D");
            } else if (pontuacao >= 100) {
                Console.WriteLine("P");
            } else {
                Console.WriteLine("N");
            }

            // Controle de fluxo
            Console.Write("Deseja novo calculo? (S/N): ");
            opcao = Console.ReadLine();

        } while (opcao.ToUpper() == "S"); 
        // ToUpper garante que 's' minusculo também funcione
    }
}