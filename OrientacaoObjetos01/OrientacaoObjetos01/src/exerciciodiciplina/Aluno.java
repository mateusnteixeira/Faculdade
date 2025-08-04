package exerciciodiciplina;
import java.util.ArrayList;
import java.util.List;

public class Aluno {
	private String ra;
	private String nome;
	private List<Nota> notas;

	public Aluno(String ra, String nome) {
		this.ra = ra;
		this.nome = nome;
		this.notas = new ArrayList<>();
	}

	public void adicionarNota(double valor) {
		notas.add(new Nota(valor));
	}

	public double calcularMedia() {
		double soma = 0;
		for (Nota nota : notas) {
			soma += nota.getValor();
		}
		double media = soma / notas.size();

		String situacao = (media >= 6.0) ? "Aprovado" : "Reprovado";
		System.out.printf("RA: %s | Nome: %s  | Média: %.2f | Situação: %s\n", ra, nome, media, situacao);

		return media;
	}

	public String getRa() {
		return ra;
	}

	public String getNome() {
		return nome;
	}

	public List<Nota> getNotas() {
		return notas;
	}
}
