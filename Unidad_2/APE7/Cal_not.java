import java.util.Scanner;

public class Cal_not{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double ind = 0.0, grup = 0.0, fin = 0.0, nota = 0.0;
        String nivel = "", estado = "";

        System.out.println("Ingrese la nota de la evaluacion individual (0 a 10):");
        ind = scanner.nextDouble();
        System.out.println("Ingrese la nota del trabajo grupal (0 a 10):");
        grup = scanner.nextDouble();
        System.out.println("Ingrese la nota de la evaluacion final (0 a 10):");
        fin = scanner.nextDouble();

        if (ind < 0 || ind > 10 || grup < 0 || grup > 10 || fin < 0 || fin > 10) {
            System.out.println("Error: Una o mas calificaciones estan fuera del rango permitido (0 a 10).");
        } else {
            nota = (ind * 0.30) + (grup * 0.30) + (fin * 0.40);

            if (nota >= 9.00 && nota <= 10.00) {
                estado = "Aprobado";
                nivel = "Excelente";
                System.out.println("¡Felicitaciones! Rendimiento sobresaliente.");

            } else if (nota >= 8.00 && nota <= 8.99) {
                estado = "Aprobado";
                nivel = "Muy bueno";
            } else if (nota >= 7.00 && nota <= 7.99) {
                estado = "Aprobado";
                nivel = "Bueno";
            } else if (nota >= 5.00 && nota <= 6.99) {
                estado = "reprobado";
                nivel = "Regular";
                System.out.println("Aviso: El estudiante requiere refuerzo académico.");
            } else {
                estado = "reprobado";
                nivel = "Deficiente";
                System.out.println("Aviso: El estudiante requiere refuerzo académico.");
            }

            System.out.println("Evaluacion Individual: " + ind);
            System.out.println("Trabajo Grupal: " + grup);
            System.out.println("Evaluacion Final: " + fin);
            System.out.printf("Promedio ponderado: %.2f\n", nota);
            System.out.println("Nivel de desempenio: " + nivel);
            System.out.println("Estado final: " + estado);
           }
            scanner.close();
    }
}