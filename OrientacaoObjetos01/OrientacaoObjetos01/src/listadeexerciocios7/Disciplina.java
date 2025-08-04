package listadeexerciocios7;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Disciplina {

		private String codigo;
	    private String nome;
	    private String ementa;
	    private int cargaHoraria;

	    public Disciplina(String codigo, String nome, String ementa, int cargaHoraria) {
	        this.codigo = codigo;
	        this.nome = nome;
	        this.ementa = ementa;
	        this.cargaHoraria = cargaHoraria;
	    }

	    public String getCodigo() {
	        return codigo;
	    }

	    public int getCargaHoraria() {
	        return cargaHoraria;
	    }

	    public String toString() {
	        return String.format("Código: %s, Nome: %s, Carga Horária: %dh, Ementa: %s", codigo, nome, cargaHoraria, ementa);
	    }
	
}
