package listadeexerciocios7;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class TecnicoAdministrativo extends Funcionario{

	 private double adicionalNoturno;
	    private List<Processo> processos;

	    public TecnicoAdministrativo(String registro, String nome, LocalDate dataAdmissao, double salarioBase, double adicionalNoturno) {
	        super(registro, nome, dataAdmissao, salarioBase);
	        this.adicionalNoturno = adicionalNoturno;
	        this.processos = new ArrayList<>();
	    }

	    public void adicionarProcesso(Processo p) {
	        processos.add(p);
	    }

	    public void removerProcesso(String numero) {
	        processos.removeIf(p -> p.getNumero().equals(numero));
	    }

	    @Override
	    public double calcularSalario() {
	        return salarioBase + adicionalNoturno;
	    }

	    @Override
	    public void exibirDados() {
	        System.out.println("===== Técnico Administrativo =====");
	        System.out.println("Registro: " + registro);
	        System.out.println("Nome: " + nome);
	        System.out.println("Data de Admissão: " + dataAdmissao);
	        System.out.println("Salário Base: R$" + salarioBase);
	        System.out.println("Adicional Noturno: R$" + adicionalNoturno);
	        System.out.println("Processos:");
	        for (Processo p : processos) {
	            System.out.println("  - " + p);
	        }
	        System.out.println("Salário Total: R$" + calcularSalario());
	    }
	
}
