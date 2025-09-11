package exercícioaula06;

public class LetraTeste {
	public static void main(String[] args){
		try {
			Letra letra1 = new Letra();

			
			System.out.println("-----------");
			letra1.exibirLetras();
			letra1.converterMaiusculo("BBBBB");
				

			letra1.exibirLetras();
			letra1.compararStrings();
			
			
		}catch(NullPointerException n) {
			System.out.println("Você deve ter duas strings para compara-las");
			
		}catch (Exception e){
		
			System.out.println("Excessão detectada");
			
		}
		finally {
			System.out.println("fim do try ");
			}
	} 
}
