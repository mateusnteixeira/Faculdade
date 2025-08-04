package exerciciobiblioteca;
import java.util.List;
import java.util.ArrayList;

	public class Biblioteca {
		private List <Livro> livros;
		private int diaDevolucao;
		
		

	public Biblioteca() {
	
		this.livros = new ArrayList<Livro>();
		this.diaDevolucao= 0;
	
	}
	public void adicionarLivro(Livro livro) {
		livros.add(livro);
	}
	
	public void emprestar( String titulo, int diaEmprestimo) {
		boolean encontrado = false;
		for (Livro livro : livros) {
			if(livro.getTitulo().equals(titulo)){
				encontrado = true;
				if(livro.isEmprestado()==true) {
					System.out.println("Livro já emprestado");
					System.out.println("===========================================");
					return;
				}else {
					livro.setEmprestado(true);
					livro.setDiaEmprestimo(diaEmprestimo);
					System.out.println("Livro "+ titulo +" emprestado com sucesso");
					System.out.println("Dia de emprestimo: "+diaEmprestimo);
					System.out.println("===========================================");
					return;
				}
			}
		}
		if(!encontrado) {
			System.out.println("Livro não encontrado.");
			System.out.println("===========================================");
		}
	}
	public void devolver(String titulo, int diaDevolucao) {
		for (Livro livro : livros) {
			if(livro.getTitulo().equals(titulo)&& livro.isEmprestado()) {
			livro.setEmprestado(false);
			System.out.println("Livro "+ titulo +" devolvido com sucesso");
			calcularValor(livro.getDiaEmprestimo(), diaDevolucao);
			System.out.println("===========================================");
			return;
			}
		}System.out.println("Livro não encontrado ou não emprestado ainda, portanto não pode ser devolvido");
	}
	public void calcularValor(int diaEmprestimo,int diaDevolucao) {
		double resultado;
		double diasAtraso;
		int totalDias = diaDevolucao-diaEmprestimo;
		if((totalDias)>7) {
			diasAtraso = totalDias-7;
			resultado =  diasAtraso * 1.50;
			System.out.println("Valor a ser pago pelo atraso de "+diasAtraso+" dias é de: "+resultado+"$");
			return;
		}else {
			System.out.println("Como o livro foi entregue dentro do prazo(7 dias) "
			+ "não foi gerada uma taxa de devolução");
		}
	}
}