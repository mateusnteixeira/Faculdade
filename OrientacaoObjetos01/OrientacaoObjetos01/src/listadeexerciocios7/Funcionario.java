package listadeexerciocios7;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public abstract class Funcionario {
	
	 protected String registro;
	    protected String nome;
	    protected LocalDate dataAdmissao;
	    protected double salarioBase;

	    public Funcionario(String registro, String nome, LocalDate dataAdmissao, double salarioBase) {
	        this.registro = registro;
	        this.nome = nome;
	        this.dataAdmissao = dataAdmissao;
	        this.salarioBase = salarioBase;
	    }

	    public abstract double calcularSalario();
	    public abstract void exibirDados();
	
}
