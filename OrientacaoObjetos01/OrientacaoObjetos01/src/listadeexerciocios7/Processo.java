package listadeexerciocios7;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Processo {

	private String numero;
    private LocalDate dataCriacao;
    private String descricao;

    public Processo(String numero, LocalDate dataCriacao, String descricao) {
        this.numero = numero;
        this.dataCriacao = dataCriacao;
        this.descricao = descricao;
    }

    public String getNumero() {
        return numero;
    }

    public String toString() {
        return String.format("Número: %s, Data: %s, Descrição: %s", numero, dataCriacao, descricao);
    }
	
}
