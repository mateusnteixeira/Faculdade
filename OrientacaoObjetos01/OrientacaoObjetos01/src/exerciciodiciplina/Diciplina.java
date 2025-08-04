package exerciciodiciplina;
import java.util.ArrayList;
import java.util.List;

public class Diciplina {

	private String nome;
	private List<Aluno> alunos;

	public Diciplina(String nome) {
		this.nome = nome;
		this.alunos = new ArrayList<>();
	}

	public void matricular(String ra, String nomeAluno) {
		Aluno novoAluno = new Aluno(ra, nomeAluno);
		alunos.add(novoAluno);
		System.out.println("Aluno adicionado com sucesso: " + nomeAluno);
	}

	public void lancarNota(String ra, double valorNota) {
		for (Aluno aluno : alunos) {
			if (aluno.getRa().equals(ra)) {
				aluno.adicionarNota(valorNota);
				System.out.println("Nota registrada com sucesso para o aluno com RA: " + ra);
				return;
			}
		}
		System.out.println("Aluno com RA: " + ra + " não encontrado");
	}

	public void finalizarSemestre() {
		double somaMedias = 0.0;

		for (Aluno aluno : alunos) {
			somaMedias += aluno.calcularMedia();
		}

		double mediaTurma = somaMedias / alunos.size();
		System.out.printf("Disciplina: %s | Média geral da turma: %.2f%n", nome, mediaTurma);
	}
}
