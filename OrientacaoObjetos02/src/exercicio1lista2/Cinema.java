package exercicio1lista2;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class Cinema {
	private Map<Integer, Sessao>sessoes;
	
	public Cinema() {
		
		this.sessoes = new HashMap<>();
	}
	
	public void adicionarSessao(int id, Sessao sessao) {
		sessoes.put(id, sessao);
		System.out.println("Sessão adicionada com ID: " + id);
		
	}
	public Sessao buscarSessoes(int id) {
		return sessoes.get(id);
	}
	
	public void exibirSessoes() {
		System.out.println("======Lista de Sessões======");
		
		for (Map.Entry<Integer, Sessao> entry : sessoes.entrySet()) {
			System.out.println("ID: "+ entry.getKey());
			entry.getValue().exibirRelatorio();
			System.out.println("");
				
			}
			
		}
	}
	

