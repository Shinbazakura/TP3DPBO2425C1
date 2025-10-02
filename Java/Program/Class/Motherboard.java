package Class;

public class Motherboard extends PartKomputer {
    private String socket;
    private int DDR_Ver;
    private String chipset;

    public Motherboard() {
        super();
        this.socket = "";
        this.DDR_Ver = 0;
        this.chipset = "";
    }

    public Motherboard(int id, String nama, int harga, int stok,
                       String noPart, String manufaktur, String kondisi,
                       String socket, int DDR_Ver, String chipset) {
        super(id, nama, harga, stok, noPart, manufaktur, kondisi);
        this.socket = socket;
        this.DDR_Ver = DDR_Ver;
        this.chipset = chipset;
    }

    public String getSocket() { return socket; }
    public void setSocket(String socket) { this.socket = socket; }

    public int getDDRVer() { return DDR_Ver; }
    public void setDDRVer(int DDR_Ver) { this.DDR_Ver = DDR_Ver; }

    public String getChipset() { return chipset; }
    public void setChipset(String chipset) { this.chipset = chipset; }
}
