package listadeexercicios01;

public class Ex01FuncionarioTeste {
	public static void main(String[] args) {
		
		 // Criando os endereços
        Ex01FuncionarioEndereco endereco1 = new Ex01FuncionarioEndereco("Rua Flores", 123, "Bairro Jardim", "Curitiba", "Paraná");
        Ex01FuncionarioEndereco endereco2 = new Ex01FuncionarioEndereco("Avenida Brasil", 456, "Bairro Central", "São Paulo", "São Paulo");
        Ex01FuncionarioEndereco endereco3 = new Ex01FuncionarioEndereco("Rua do Sol", 789, "Bairro Sol", "Rio de Janeiro", "Rio de Janeiro");

        // Criando os funcionários com seus respectivos endereços
        Ex01Funcionario funcionario1 = new Ex01Funcionario(8964, "Carlos", "15/11/2006", "Masculino", "Segurança", 41739303L, endereco1);
        Ex01Funcionario funcionario2 = new Ex01Funcionario(1045, "Ana", "12/03/1992", "Feminino", "Recepção", 11987654321L, endereco2);
        Ex01Funcionario funcionario3 = new Ex01Funcionario(2107, "Mateus", "05/07/1985", "Masculino", "TI", 21345678901L, endereco3);
          //Relatório inicial dos funcionarios
        funcionario1.emitirRelatorio();
        System.out.println("---------------------------------------------");
        funcionario2.emitirRelatorio();
        System.out.println("---------------------------------------------");
        funcionario3.emitirRelatorio();
        System.out.println("---------------------------------------------");
     // Usando os setters para alterar os dados
        System.out.println("\nAlterando os dados dos funcionários...");
        funcionario1.setSetor("Gerência");
        funcionario1.setTelefone(987654321L);

        funcionario2.setSetor("Marketing");
        funcionario2.setTelefone(987654322L);

        funcionario3.setSetor("Desenvolvimento");
        funcionario3.setTelefone(987654323L);

        // Emitindo os relatórios após as alterações
        System.out.println("\nRelatório após alteração dos dados:\n");
        funcionario1.emitirRelatorio();
        System.out.println("---------------------------------------------");
        funcionario2.emitirRelatorio();
        System.out.println("---------------------------------------------");
        funcionario3.emitirRelatorio();
    }
}
