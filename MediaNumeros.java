import java.util.Scanner;

public class MediaNumeros {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Solicita e lê o primeiro número
        System.out.print("Digite o primeiro numero: ");
        double x = scanner.nextDouble();

        // Solicita e lê o segundo número
        System.out.print("Digite o segundo numero: ");
        double y = scanner.nextDouble();

        // Calcula a média
        double media = (x + y) / 2;

        // Exibe a média com duas casas decimais
        System.out.printf("A media dos numeros %.2f e %.2f e: %.2f%n", x, y, media);

        scanner.close();
    }
}
