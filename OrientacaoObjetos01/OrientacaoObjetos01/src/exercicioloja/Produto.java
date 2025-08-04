package exercicioloja;

public class Produto {
	private int cod;
	private String nome;
	private String marca;
	private String modelo;
	private int quantidadeEstoque;
	private double valorUnitario;
	
	public Produto(int cod, String nome, String marca, 
			String modelo, int quantidadeEstoque, double valorUnitario) {
		
		this.cod = cod;
		this.nome = nome;
		this.marca = marca;
		this.modelo = modelo;
		this.quantidadeEstoque = quantidadeEstoque;
		this.valorUnitario = valorUnitario;
	}
	public int getCod() {
		return cod;
	}
	public String getNome() {
		return nome;
	}
	public String getMarca() {
		return marca;
	}
	public String getModelo() {
		return modelo;
	}
	public int getQuantidadeEstoque() {
		return quantidadeEstoque;
	}
	public double getValorUnitario() {
		return valorUnitario;
	}
	public void setQuantidadeEstoque(int quantidadeEstoque) {
		this.quantidadeEstoque = quantidadeEstoque;
	}
}
