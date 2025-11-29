// Se estiver numa pasta 'c_like', mantenha a linha abaixo. Se não, remova.
package c_like; 

import java.util.Scanner;

public class Premio {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        char continuar;

        // INÍCIO DA REPETIÇÃO
        do {
            System.out.println("\n--- Avaliacao de Desempenho ---");

            // ENTRADA DE DADOS
            System.out.print("Qtd Paes: ");
            int p = leitor.nextInt();
            
            System.out.print("Qtd Doces: ");
            int d = leitor.nextInt();
            
            System.out.print("Qtd Bolos: ");
            int b = leitor.nextInt();

            // PROCESSAMENTO LÓGICO
            int pontuacao = (p * 1) + (d * 2) + (b * 3);

            // ESTRUTURA DE SELEÇÃO (IF-ELSE IF-ELSE)
            System.out.print("Premio Merecido: ");
            if (pontuacao >= 150) {
                System.out.println("B (Bolo)");
            } else if (pontuacao >= 120) {
                System.out.println("D (Doce)");
            } else if (pontuacao >= 100) {
                System.out.println("P (Pao)");
            } else {
                System.out.println("N (Nenhum)");
            }

            // Pergunta para controle do loop
            System.out.print("Analisar outro colaborador? (S/N): ");
            continuar = leitor.next().charAt(0);

        } while (continuar == 'S' || continuar == 's');

        leitor.close();
    }
}