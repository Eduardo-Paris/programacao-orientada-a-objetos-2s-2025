public class Radar {
    public Integer limiteVelocidade;
    public String modelo;
    public String localizacao;
    
    public void emitirNotificacao(String placa, Integer velocidadeAvaliada){
  System.out.println("Limite de Velociade: "+ this.limiteVelocidade);
  System.out.println("Velocidade avaliada:  "+ velocidadeAvaliada);
  System.out.println("placa: "+placa);

    }

    public void avaliarVelocidade(Carro c){
        if (c.velocidade > this.limiteVelocidade) {
             emitirNotificacao(c.placa, c.velocidade);
          }
    }
}
