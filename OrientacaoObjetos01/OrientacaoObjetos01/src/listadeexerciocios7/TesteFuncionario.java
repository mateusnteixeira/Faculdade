package listadeexerciocios7;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class TesteFuncionario {

	 public static void main(String[] args) {
	        Professor prof = new Professor("P123", "João da Silva", LocalDate.of(2015, 3, 10), 5000.0, Titulacao.DOUTOR);
	        prof.adicionarDisciplina(new Disciplina("INF101", "Programação", "Lógica, Laços, Variáveis", 60));
	        prof.adicionarDisciplina(new Disciplina("INF202", "POO", "Classes, Objetos, Herança", 60));

	        prof.exibirDados();

	        System.out.println();

	        TecnicoAdministrativo tec = new TecnicoAdministrativo("T456", "Maria Souza", LocalDate.of(2018, 8, 20), 3500.0, 800.0);
	        tec.adicionarProcesso(new Processo("PRC001", LocalDate.of(2023, 1, 10), "Processo de Compras"));
	        tec.adicionarProcesso(new Processo("PRC002", LocalDate.of(2024, 5, 15), "Processo de Licitação"));

	        tec.exibirDados();
	    }
	
}
