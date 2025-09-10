package sistema_iptu;

public class Secretariafazenda {

    public static void main(String[] args){
        Municipio brasilia = new Municipio ( nome: "Brasilia", estado: "DF", precoM2: 65.5);

        Apartamento aptc= new Apartamento(brasilia, areaM2:52.0, vagas:1, possuiElevador:true);

        System.out.print ln("IPTU RS: " + apt.calcularIPTU());
    }
    
}
