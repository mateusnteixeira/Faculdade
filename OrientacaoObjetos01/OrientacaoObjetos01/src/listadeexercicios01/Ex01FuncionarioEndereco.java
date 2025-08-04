package listadeexercicios01;

public class Ex01FuncionarioEndereco {
	
	//Atributos do endereço
	private String nomeRua;
	private int numeroCasa;
	private String bairro;
	private String cidade;
	private String estado;
	
	
	//Metodo Construtor para o endereço
	public Ex01FuncionarioEndereco(String nomeRua,int numeroCasa,String bairro,String cidade,String estado) {
		this.nomeRua=nomeRua;
		this.numeroCasa=numeroCasa;
		this.bairro=bairro;
		this.cidade=cidade;
		this.estado=estado;
	}
	//Getters dos Atributos
	public String getNomeRua() {
		return nomeRua;
	}
	public int getNumeroCasa() {
		return numeroCasa;
	}
	public String getBairro() {
		return bairro;
	}
	public String getCidade() {
		return cidade;
	}
	public String getEstado() {
		return estado;
	}
}
