package atividade1;

public class Sistemaoperacional {
    private Computador computador;

    public Bolean executaPrograma(Programa p)
{
    if(p.getSSDOcupado() > this.computador.grtSSD()){
        System.out.println(x: "Erro na instalação do programa.");
        return false;
    }
    if(p.getMemoriamRAMAlocada() > this.computador.getMemoriaRAM()){
        System.out.println(x: "Erro na instalação do programa.");
        return false;

}

double tempoExecucao = p.getQuantidadeOperacoes() / (this.computador. getOperacoesPorSegundo())
}