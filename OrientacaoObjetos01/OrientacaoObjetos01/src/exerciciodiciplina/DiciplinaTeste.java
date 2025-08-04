package exerciciodiciplina;

public class DiciplinaTeste {
    public static void main(String[] args) {
        // Criando a disciplina
        Diciplina disciplina = new Diciplina("Programação Java");

        // Matriculando alunos
        disciplina.matricular("123", "João");
        disciplina.matricular("456", "Maria");
        disciplina.matricular("789", "Carlos");

        // Lançando notas para João (RA: 123)
        disciplina.lancarNota("123", 7.0);
        disciplina.lancarNota("123", 8.5);

        // Lançando notas para Maria (RA: 456)
        disciplina.lancarNota("456", 5.0);
        disciplina.lancarNota("456", 4.5);

        // Lançando notas para Carlos (RA: 789)
        disciplina.lancarNota("789", 9.0);
        disciplina.lancarNota("789", 10.0);
        disciplina.lancarNota("789", 8.5);

        // Finalizando semestre
        System.out.println("\n=== RESULTADO FINAL DO SEMESTRE ===");
        disciplina.finalizarSemestre();
    }
}
