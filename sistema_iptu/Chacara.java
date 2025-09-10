package sistema_iptu;

public class Chacara extends Imovel {
    
    private Boolean possuiPocoarrtesiano;


    public Chacara(Municipio municipio, Double area M2, Integer vagas, Boolean possuiPocoArtesiano){
        super(municipio, areaM2, vagas);
        this.possuiPocoartesiano = possuiPocoArtesiano;
        
    }
    

}
