package listadeexercicios01;

public class Ex01Funcionario {
	//Atributos dos funcionarios
	private int numRegistro;
	private String nome;
	private String dataNascimento;
	private String sexo;
	private String setor;
	private long telefone;
	private Ex01FuncionarioEndereco endereco;
	
	//Metodo Construtor
	public Ex01Funcionario(int numRegistro,String nome,String dataNascimento,String sexo,String setor,long telefone,Ex01FuncionarioEndereco endereco) {
		this.numRegistro=numRegistro;
		this.nome=nome;
		this.dataNascimento=dataNascimento;
		this.sexo=sexo;
		this.setor=setor;
		this.telefone=telefone;
		this.endereco=endereco;
	}	
	//Metodos Setters
	public void setSetor(String setor) {
		this.setor = setor;
	}
	 public void setTelefone(long telefone) {
		 this.telefone = telefone;
	 }
	
	public void chamarEndereco() {
		
		System.out.println("\nEndereço");
		System.out.println("Rua:" + endereco.getNomeRua());
		System.out.println("Numero da casa: " + endereco.getNumeroCasa());
		System.out.println("Bairro: " + endereco.getBairro());
		System.out.println("Cidade: " + endereco.getCidade());
		System.out.println("Estado: " + endereco.getEstado());
		
	}
	
	public void emitirRelatorio() {
		System.out.println("Numero de Registro do Funcionario: "+this.numRegistro);
		System.out.println("Nome: "+this.nome);
		System.out.println("Data de Nascimento: "+this.dataNascimento);
		System.out.println("Sexo: "+this.sexo);
		System.out.println( "Setor: "+this.setor);
		System.out.println("Telefone: "+this.telefone);
		chamarEndereco();
		
	}
	
	
}
