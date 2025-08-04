package exerciciobiblioteca;

public class Livro {
	private String titulo;
	private String autor;
	private String anoPublicacao;
	private String editora;
	private int numeroPaginas;
	private boolean emprestado;
	private int diaEmprestimo;

	
	public Livro(String titulo, String autor, String anoPublicacao, String editora, int numeroPaginas) {
		
		this.titulo = titulo;
		this.autor = autor;
		this.anoPublicacao = anoPublicacao;
		this.editora = editora;
		this.numeroPaginas = numeroPaginas;
		this.emprestado = false;
		this.diaEmprestimo = 0;
	}
	public String getTitulo() {
		return titulo;
	}
	public boolean isEmprestado() {
		return emprestado;
	}
	public void setEmprestado(boolean emprestado) {
		this.emprestado = emprestado;
	}
	public int getDiaEmprestimo() {
		return diaEmprestimo;
	}
	public void setDiaEmprestimo(int diaEmprestimo) {
		this.diaEmprestimo = diaEmprestimo;
	}
	
	
}
