package exercicio1lista2;

public class Sessao {
	//a data, horário e número de ingressos//
	private String data;
	private String horario;
	private int numIngressos;
	private Sala sala;
	private Filme filme;
	
	public Sessao(String data, String horario, Sala sala, Filme filme) {
		
		this.data = data;
		this.horario = horario;
		this.sala = sala;
		this.filme = filme;
		this.numIngressos = sala.getCapacidade();
	}
	public boolean venderIngressos(int quantidade) {
			if(quantidade<=numIngressos) {
				numIngressos -= quantidade;
				System.out.println("Venda realizada");
				System.out.println("Total de ingressos disponiveis é de: "+ numIngressos);
				return true;
			}else {
				System.out.println("Quantidade de ingressos insuficiente!");
				if(numIngressos == 0 ) {
					System.out.println("Todos os ingressos já foram vendidos");
					return false;
				}
				System.out.println("Total de ingressos disponiveis é de: "+ numIngressos);
			}
			
		return false;
	}
	public void exibirRelatorio() {
		
		System.out.println("Data da sessão: " + this.data);
		System.out.println("Horário da sessão: "+ this.horario);
		System.out.println("Total de ingressos vendidos: ");calcularIngressosVendidos();
		System.out.println("Ingressos ainda disoniveis: "+this.numIngressos);
		System.out.println("Numero da sala: "+ sala.getNumSala());
		System.out.println("Nome do filme: "+ filme.getTitulo());
		System.out.println("Duração: "+ filme.getDuracao()+ " min");
		
	}
	public void calcularIngressosVendidos() {
		int resultado = sala.getCapacidade() - this.numIngressos;
		System.out.println(resultado);
	}
	
	
}
