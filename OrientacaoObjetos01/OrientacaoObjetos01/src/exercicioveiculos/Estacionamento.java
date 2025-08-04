package exercicioveiculos;
import java.util.ArrayList;
import java.util.List;

public class Estacionamento {
	private List<Vaga> vagas;

	public Estacionamento() {
		this.vagas = new ArrayList<>();
		for(int i=1;i<=5;i++) {//inicializa com 5 vagas disponiveis
			this.vagas.add(new Vaga(i));
		}
	}
	
	public void estacionarVeiculo(String placa, String modelo, String cor, int horaEntrada) {
		for (Vaga vaga : vagas) {
			if(vaga.isLivre()) {
				Veiculo v = new Veiculo(placa, modelo, cor);
				vaga.ocupar(v, horaEntrada);
				return;
			}
		}
	}
	public void retirar(String placa, int horaSaida ) {
		for (Vaga vaga : vagas) {
			if(!vaga.isLivre()&&vaga.getVeiculo().getPlaca().equals(placa)) {
				vaga.desocupar(horaSaida);
				return;
			}
		}System.out.println("Veiculo não encontrado");
	}
	
	
	public List<Vaga> getVagas() {
		return vagas;
	}
}
