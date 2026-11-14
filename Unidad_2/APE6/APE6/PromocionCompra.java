import java.util.Scanner;

public class PromocionCompra {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Declaración de variables
        double Mon_com = 0.0;
        int can_prod = 0;
        char dia = ' ';
        double Mon_pro = 0.0;
        double Des_dia = 0.0;
        double total = 0.0;
        char L = 'L';
        char V = 'V';
        int Umb_cant = 3;
        double prom_2x1 = 0.5;
        double prom_3x2 = 0.67;
        double des_L = 0.90;
         double des_V = 0.85;
        double des_5 = 0.95;

        // Pedimos los datos al usuario
        System.out.println("Ingrese el monto de su compra:");
        Mon_com = scanner.nextDouble();
        System.out.println("Ingresar la cantidad de productos comprados:");
        can_prod = scanner.nextInt();
        System.out.println("Ingrese la inicial del dia de la semana que compro (L/V):");
        dia = scanner.next().charAt(0);
        // Sin promocion el monto promocional es el monto completo
        Mon_pro = Mon_com;
        // Evaluamos el tipo de promoción según la cantidad
        if (can_prod >= Umb_cant) {
            if (can_prod % 3 == 0) {
                System.out.println("La promocion aplicada sera 3x2.");
                Mon_pro = Mon_com * prom_3x2;
            } else if (can_prod % 2 == 0) {
                System.out.println("La promocion aplicada sera 2x1.");
                Mon_pro = Mon_com * prom_2x1;
        } else {
            System.out.println("No cumple con la cantidad minima para las promociones.");
            Mon_pro= Mon_com;
        }
        // Evaluamos el descuento según el día
        if (dia == L) {
            Des_dia = Mon_pro * des_L;
        } else if (dia == V) {
            Des_dia = Mon_pro * des_V;
        } else {
            Des_dia = Mon_pro; }
        }
        total = Des_dia * des_5;
    // Salidas en pantalla 
        System.out.printf("El total con la promocion es: %.2f\n", Mon_pro);
        System.out.printf("El total con descuento de dia es: %.2f\n", Des_dia);
        System.out.printf("El total a pagar con descuento del 5 por ciento es: %.2f\n", total);

        scanner.close();
    }
}
