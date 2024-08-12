using System;

namespace MediaNumeros
{
    class Program
    {
        static void Main()
        {
            // Solicita e lê o primeiro número
            Console.Write("Digite o primeiro numero: ");
            double x = Convert.ToDouble(Console.ReadLine());

            // Solicita e lê o segundo número
            Console.Write("Digite o segundo numero: ");
            double y = Convert.ToDouble(Console.ReadLine());

            // Calcula a média
            double media = (x + y) / 2;

            // Exibe a média com duas casas decimais
            Console.WriteLine($"A media dos numeros {x:F2} e {y:F2} e: {media:F2}");

            

Console.ReadLine();

        }
    }
}

