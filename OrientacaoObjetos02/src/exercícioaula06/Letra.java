package exercícioaula06;
import java.util.*;
public class Letra {
	private String str1;
	private String str2;
	
			
	public void solicitarString() {
		Scanner input = new Scanner(System.in);
		System.out.println("Digite uma letra ou palavra");
		String entrada1 = input.next();
		armazenarPrimeiraString(entrada1);
		System.out.println("Digite outra letra ou palavra");
		String entrada2 = input.next();
		armazenarSegundaString(entrada2);
		input.close();
		
	}
	
	public void exibirLetras() {
		System.out.println("String 1: " + str1);
		System.out.println("String 2: " + str2);
		System.out.println("------------------");
	}
	
	public void compararStrings()throws NullPointerException {
		if(str1.equals(str2))
			System.out.println("Strings iguais");
		else
			System.out.println("Strings diferentes");
	}
	
	public void contarCaracteres(String str) {
		int quantidade = str.length();
		System.out.println("Quantidades de caracteres na string: "+ str);
		System.out.println("É de: "+ quantidade + " caracteres");
	}
	
	public void converterMinusculo(String str) {
		String convertidamin = str.toLowerCase();
		System.out.println("A string: "+ str );
		System.out.println("Foi convertida para " + convertidamin);
	}
	
	public void converterMaiusculo(String str) {
		String convertidamax = str.toUpperCase();
		System.out.println("A string: "+ str );
		System.out.println("Foi convertida para " + convertidamax);
	}
	
	private String armazenarPrimeiraString(String str1) {
		this.str1 = str1;
		System.out.println("String "+ str1 + " armazanada");
		return str1;
	}
	private String armazenarSegundaString(String str2) {
		this.str2 = str2;
		System.out.println("String "+ str2 + " armazanada");
		return str2;
	}
}
