package exercicioloja;
import java.util.ArrayList;
import java.util.List;

public class Loja {
	
	private String nome;
	private String cnpj;
	private List<Produto> produtos;
	
	public Loja(String nome, String cnpj) {
		this.produtos = new ArrayList<Produto>();//cria a lista Produto
		this.nome = nome;
		this.cnpj = cnpj;
	}
	public void cadastrar(int cod, String nome, String marca, 
			String modelo, int quantidadeEstoque,double valorUnitario) {
			if(verificarExistencia(cod,nome,marca, modelo)){			
				//deve retornar true para entrar no for, ou seja, o produto existe
				for (Produto produto : produtos) {	
					//quando achar o produto igual apenas adiciona a quantidade em estoque
					if(produto.getCod()== cod && 
						produto.getNome().equals(nome) && 
						produto.getModelo().equals(modelo) && 
						produto.getMarca().equals(marca)){
						adquirirProdutos(cod, quantidadeEstoque,valorUnitario);
						}
				}
			}else {//se o produto não for repetido ele cadastra o novo produto
				adicionarItem(cod,nome,marca, modelo, quantidadeEstoque, valorUnitario);
			}
	}
	public void adquirirProdutos(int cod, int quantidadeEstoque, double vakorUnitario) {
		for (Produto produto : produtos) {
			if(produto.getCod()==cod) {
				produto.setQuantidadeEstoque(produto.getQuantidadeEstoque()+ quantidadeEstoque);
				System.out.println("O produto: "+produto.getNome());
				System.out.println("Agora tem em estoque: "+ produto.getQuantidadeEstoque());
				System.out.println("=================================================");
			}
		}
	}
	public boolean verificarExistencia(int cod, String nome, String marca, 
			String modelo) {//se retornar true quer dizer que já tem o produto cadastrado
		for (Produto produto : produtos) {
			if(produto.getCod()== cod && //verifica se tem o produto ou não
					produto.getNome().equals(nome) && 
					produto.getModelo().equals(modelo) && 
					produto.getMarca().equals(marca)){
				return true;//retorna o resultado
			}
		}
		return false;
	}
	
	public void exibirProdutos() {
		System.out.println("Lista de Produtos:");
		for (Produto produto : produtos) {
			System.out.println("Código: "+ produto.getCod());
			System.out.println("Nome: "+ produto.getNome());
			System.out.println("Marca: "+ produto.getMarca());
			System.out.println("Modelo: "+ produto.getModelo());
			System.out.println("Quantidade em estoque: "+produto.getQuantidadeEstoque());
			System.out.println("Valor da Unidade: "+produto.getValorUnitario());
			System.out.println("__________________________________________");
		}
		
	}
	public void vender(int cod, int quantidadeVenda) {
		for (Produto produto : produtos) {
			if(produto.getCod()==cod) {
				if(verificarEstoque(produto.getQuantidadeEstoque(),  quantidadeVenda)) {//verifica se tem no estoque a quantidade a ser vendida
					produto.setQuantidadeEstoque(produto.getQuantidadeEstoque()-quantidadeVenda);//reduz do estoque a quantidade vendida
					System.out.println("Venda realizada com sucesso");
				}else {
					System.out.println("Não tem itens o suficiente do produto no estoque");
				}
				return;//sai do método após encontrar o produto
			}
		}
		System.out.println("Produto não encontrado");
	}
	public boolean verificarEstoque(int quantidadeEstoque, int quantidadeVenda) {
		if(quantidadeEstoque>= quantidadeVenda) {//verifica se o estoque tem o nescessario para vender o produto
			return true;//retorna o valor obtido
		}else {
			return false;
		}
	}
	public void adicionarItem(int cod, String nome, String marca, 
			String modelo, int quantidadeEstoque,double valorUnitario) {
		
		Produto novoProduto = new Produto(cod,nome,marca, modelo, quantidadeEstoque, valorUnitario);	
		
		produtos.add(novoProduto);//adiciona o produto a lista
		System.out.println("Produto "+ nome +" adicionado com sucesso");
	}
	
}
