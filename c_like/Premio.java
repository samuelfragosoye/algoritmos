package c_like;
import java.util.Scanner;

public class Premio {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Entrada de dados
        int p = scanner.nextInt();
        int d = scanner.nextInt();
        int b = scanner.nextInt();

        // Processamento
        int pontuacao = (p * 1) + (d * 2) + (b * 3);

        // Seleção do prêmio baseada na pontuação
        if (pontuacao >= 150) {
            System.out.println("B");
        } else if (pontuacao >= 120) {
            System.out.println("D");
        } else if (pontuacao >= 100) {
            System.out.println("P");
        } else {
            System.out.println("N");
        }
        
        scanner.close();
    }
}
