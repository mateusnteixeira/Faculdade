package listadeexerciocios7;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Professor extends Funcionario {
	
	private Titulacao titulacao;
    private List<Disciplina> disciplinas;

    public Professor(String registro, String nome, LocalDate dataAdmissao, double salarioBase, Titulacao titulacao) {
        super(registro, nome, dataAdmissao, salarioBase);
        this.titulacao = titulacao;
        this.disciplinas = new ArrayList<>();
    }

    public void adicionarDisciplina(Disciplina d) {
        disciplinas.add(d);
    }

    public void removerDisciplina(String codigo) {
        disciplinas.removeIf(d -> d.getCodigo().equals(codigo));
    }

    @Override
    public double calcularSalario() {
        double gratificacao = (titulacao == Titulacao.MESTRE) ? 1000.0 : 2000.0;
        int totalHoras = 0;
        for (Disciplina d : disciplinas) {
			 totalHoras	+= d.getCargaHoraria();
		}
        return salarioBase + gratificacao + (totalHoras * 15);
    }

    @Override
    public void exibirDados() {
        System.out.println("===== Professor =====");
        System.out.println("Registro: " + registro);
        System.out.println("Nome: " + nome);
        System.out.println("Data de Admissão: " + dataAdmissao);
        System.out.println("Titulação: " + titulacao);
        System.out.println("Salário Base: R$" + salarioBase);
        System.out.println("Disciplinas:");
        for (Disciplina d : disciplinas) {
            System.out.println("  - " + d);
        }
        System.out.println("Salário Total: R$" + calcularSalario());
    }
	
}
