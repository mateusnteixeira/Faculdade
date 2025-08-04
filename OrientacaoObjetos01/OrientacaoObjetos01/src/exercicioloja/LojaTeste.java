package exercicioloja;

public class LojaTeste {
	public static void main(String[] args) {
		Loja loja = new Loja("Mateus's","12345-2");
		
		loja.cadastrar(101, "Celular", "Samsung", "Galaxy S21", 10, 2500.00);
		loja.cadastrar(102, "Notebook", "Dell", "Inspiron 15", 5, 3500.00);
		loja.cadastrar(103, "Fone de Ouvido", "Sony", "WH-1000XM4", 15, 1200.00);

		loja.cadastrar(101,"Celular", "Samsung", "Galaxy S21", 10, 2500.00);
		loja.adquirirProdutos(101, 10, 2500.00);
		loja.exibirProdutos();
		loja.vender(101, 50);
	}
}
