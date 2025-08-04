package exercicioveiculos;

public class Vaga {
		private int numVaga;
		private Veiculo veiculo;
		private boolean livre;
		private int horaEntrada;
		
		public Vaga(int numVaga) {
			
			this.numVaga = numVaga;
			this.veiculo = null;
			this.livre = true;
		}
	public void ocupar(Veiculo veiculo, int horaEntrada) {
		this.veiculo = veiculo;
		this.horaEntrada = horaEntrada;
		this.livre = false;
	}
	public void desocupar(int horaSaida) {
		double custo = calcularCusto(horaSaida);
		
		System.out.println("Veiculo com a placa "+veiculo.getPlaca()+" retirado da vaga "+numVaga);
		System.out.println("Tempo de permanencia: "+(horaSaida-horaEntrada)+"horas");
		System.out.println("Total a pagar é de: "+custo+"$");
		this.veiculo=null;
		this.livre = true;
		this.horaEntrada = 0;
	}
	public double calcularCusto(int horaSaida) {
		int horas = horaSaida - horaEntrada;
		if(horas<=3) {
			return 2.00;
		}
		return 2.00+ ((horas-3)*0.50);
	}
	public int getNumVaga() {
		return numVaga;
	}
	public void setNumVaga(int numVaga) {
		this.numVaga = numVaga;
	}
	public Veiculo getVeiculo() {
		return veiculo;
	}
	public void setVeiculo(Veiculo veiculo) {
		this.veiculo = veiculo;
	}
	public boolean isLivre() {
		return livre;
	}
	public void setLivre(boolean livre) {
		this.livre = livre;
	}
}
