package Class;

public class Ram extends PartKomputer {
    private int DDR_Ver;
    private int memory;
    private int speed;

    public Ram() {
        super();
        this.DDR_Ver = 0;
        this.memory = 0;
        this.speed = 0;
    }

    public Ram(int id, String nama, int harga, int stok,
               String noPart, String manufaktur, String kondisi,
               int DDR_Ver, int memory, int speed) {
        super(id, nama, harga, stok, noPart, manufaktur, kondisi);
        this.DDR_Ver = DDR_Ver;
        this.memory = memory;
        this.speed = speed;
    }

    public int getDDRVer() { return DDR_Ver; }
    public void setDDRVer(int DDR_Ver) { this.DDR_Ver = DDR_Ver; }

    public int getMemory() { return memory; }
    public void setMemory(int memory) { this.memory = memory; }

    public int getSpeed() { return speed; }
    public void setSpeed(int speed) { this.speed = speed; }
}
