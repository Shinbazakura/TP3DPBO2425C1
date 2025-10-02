package Class;

public class GPU extends PartKomputer {
    private int memory;
    private int TDP;
    private int pcieGen;

    public GPU() {
        super();
        this.memory = 0;
        this.TDP = 0;
        this.pcieGen = 0;
    }

    public GPU(int id, String nama, int harga, int stok,
               String noPart, String manufaktur, String kondisi,
               int memory, int TDP, int pcieGen) {
        super(id, nama, harga, stok, noPart, manufaktur, kondisi);
        this.memory = memory;
        this.TDP = TDP;
        this.pcieGen = pcieGen;
    }

    public int getMemory() { return memory; }
    public void setMemory(int memory) { this.memory = memory; }

    public int getTDP() { return TDP; }
    public void setTDP(int TDP) { this.TDP = TDP; }

    public int getPcieGen() { return pcieGen; }
    public void setPcieGen(int pcieGen) { this.pcieGen = pcieGen; }
}
