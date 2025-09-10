package exercicio1lista2;

public class CinemaTeste {
	public static void main(String[] args) {
		Filme filme1 = new Filme("Vingadores: Ultimato", 180);
		Filme filme2 = new Filme("Interestelar", 169);

		Sala sala1 = new Sala(1, 5); 
	     Sala sala2 = new Sala(2, 3);

	     Sessao sessao1 = new Sessao("10/09/2025", "19:30", sala1, filme1);    
	        Sessao sessao2 = new Sessao("11/09/2025", "21:00", sala2, filme2);

	        Cinema cinema = new Cinema();
	        cinema.adicionarSessao(101, sessao1);
	        cinema.adicionarSessao(102, sessao2);

	        // Mostrar todas as sessões do cinema
	        cinema.exibirSessoes();

	        cinema.buscarSessoes(101);
	       
	                   
       sessao1.exibirRelatorio();

        System.out.println("\n--- Tentando vender ingressos ---");
        sessao1.venderIngressos(2); // deve vender
        sessao1.exibirRelatorio();
        sessao1.venderIngressos(3); // deve vender
        sessao1.exibirRelatorio();
        sessao1.venderIngressos(1); // deve dar erro, não tem mais ingressos
	        
	}
}

