package listadeexercicio05;
import java.util.ArrayList;
import java.util.List;
public class BancoTeste {
	
	public static void main(String[] args) {
	
		Banco banco = new Banco();
		banco.criarConta(111, "12345", "Vinicius");
		banco.verificarSaldo(111);
		banco.depositar(111, 150);
		banco.verificarSaldo(111);
		banco.criarConta(112, "34567", "Mateus");
		banco.sacar(111, 150);
	}
}
