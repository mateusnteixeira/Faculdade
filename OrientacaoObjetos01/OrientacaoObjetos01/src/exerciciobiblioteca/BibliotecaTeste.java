package exerciciobiblioteca;

public class BibliotecaTeste {
	public static void main(String[] args) {
		Biblioteca biblioteca = new Biblioteca();
		
		// Livro(String titulo, String autor, String anoPublicacao, String editora, int numeroPaginas)
		Livro livro1 = new Livro("1984", "George Orwell", "1949", "Companhia das Letras", 352);
		Livro livro2 = new Livro("A Revolução dos Bichos", "George Orwell", "1945", "Companhia das Letras", 152);
		Livro livro3 = new Livro("O Pequeno Príncipe", "Antoine de Saint-Exupéry", "1943", "Agir", 96);
		Livro livro4 = new Livro("Harry Potter e a Pedra Filosofal", "J.K. Rowling", "1997", "Rocco", 264);
		
		biblioteca.adicionarLivro(livro1);
		biblioteca.adicionarLivro(livro2);
		biblioteca.adicionarLivro(livro3);
		biblioteca.adicionarLivro(livro4);
		
		biblioteca.emprestar("1984", 0);
		biblioteca.emprestar("A Revolução dos Bichos", 0);
		biblioteca.devolver("A Revolução dos Bichos", 8);
		biblioteca.devolver("Harry Potter e a Pedra Filosofal", 15);
		
	}
}
