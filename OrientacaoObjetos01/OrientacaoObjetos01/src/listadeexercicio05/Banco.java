package listadeexercicio05;
import java.util.ArrayList;
import java.util.List;

public class Banco {
	
	private List <Conta> contas;	
	private double valor;
	
	public Banco() {
		
		this.contas = new ArrayList<Conta>();
	}
	public void criarConta(int numConta, String cpf, String nome) {
		for (Conta conta : contas) {
		    if (conta.getNumConta() == numConta) {
		        System.out.println("Número de conta já existe. Não foi possível criar a conta.");
		        return;
		    }
		}
		Cliente cliente = new Cliente(cpf,nome);
		Conta novaConta = new Conta(numConta, cliente);
		contas.add(novaConta);
		System.out.println("Conta de número "+ numConta +" criada com sucesso");
		return;
	}
	public void sacar(int numConta, double valor) {
		for (Conta conta : contas) {
			if (conta.getNumConta() == numConta && conta.getSaldo()>= valor) {
				conta.setSaldo(conta.getSaldo()-valor);
				System.out.println("====================");
				System.out.println("Realização do saque de " +valor+ " bem sucedido.");
				System.out.println("Saldo tual de: "+conta.getSaldo());
				return;
		    }
		}
		
			System.out.println("====================");
	    	System.out.println("Conta " +numConta+ " não encontrada ou o saldo de " +valor+ "$ é insuficiente.");
	    	System.out.println("====================");
	    }
		
	public void depositar(int numConta, double valor) {
		for (Conta conta : contas) {
			if(conta.getNumConta() == numConta) {
				conta.setSaldo(conta.getSaldo()+ valor);
				System.out.println("====================");
				System.out.println("Deposito de "+valor+" realizado com sucesso");
				System.out.println("Saldo atual de: "+ conta.getSaldo());
				return;
			}
			
		}
		System.out.println("====================");
    	System.out.println("Conta " +numConta+ " não encontrada");
    	System.out.println("====================");

	}
	public void verificarSaldo(int numConta) {
		for (Conta conta : contas) {
			if(conta.getNumConta() == numConta) {
				System.out.println("====================");
				System.out.println("Conta de numero: " + numConta);
				System.out.println("Nome: "+ conta.getTitular().getNome());
				System.out.println("CPF: "+conta.getTitular().getCpf());
				System.out.println("Saldo: "+conta.getSaldo());
				System.out.println("====================");
			}
		}
		
	}
}
