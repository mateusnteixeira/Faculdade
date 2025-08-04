package listadeexercicio05;
import java.util.ArrayList;
import java.util.List;

public class Conta {
	private int numConta;
	private double saldo;
	private Cliente titular;
	
	
	public Conta(int numConta, Cliente titular) {
		
		this.numConta = numConta;
		this.titular = titular;
		this.saldo = 00.00;
	}
	
	public int getNumConta() {
		return numConta;
	}
	public double getSaldo() {
		return saldo;
	}
	public void setNumConta(int numConta) {
		this.numConta = numConta;
	}
	public void setSaldo(double saldo) {
		this.saldo = saldo;
	}

	public Cliente getTitular() {
		return titular;
	}

}
