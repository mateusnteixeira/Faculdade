package exercicioveiculos;

public class EstacionamentoTeste {
	    public static void main(String[] args) {
	        Estacionamento estacionamento = new Estacionamento();

	        // Estacionando veículos
	        estacionamento.estacionarVeiculo("ABC1234", "Gol", "Prata", 8);
	        estacionamento.estacionarVeiculo("DEF5678", "Civic", "Preto", 9);
	        estacionamento.estacionarVeiculo("GHI9012", "Uno", "Branco", 10);

	        // Tentando remover um veículo que ficou 5 horas
	        estacionamento.retirar("DEF5678", 14);

	        // Estacionando outro veículo depois da saída
	        estacionamento.estacionarVeiculo("JKL3456", "Fiesta", "Vermelho", 15);

	        // Tentando remover veículo que não existe
	        estacionamento.retirar("XXX0000", 16);

	        // Retirando outro veículo que ficou 2 horas (abaixo do mínimo)
	        estacionamento.retirar("ABC1234", 10);

	        // Retirando o último
	        estacionamento.retirar("GHI9012", 13);
	    }
	}
