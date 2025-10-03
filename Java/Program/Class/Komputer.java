package Class;

public class Komputer extends Barang {
    private Motherboard motherboard;
    private Processor processor;
    private Ram ram;
    private GPU gpu;

    // Default constructor
    public Komputer() {
        super();
        this.motherboard = new Motherboard();
        this.processor = new Processor();
        this.ram = new Ram();
        this.gpu = new GPU();
    }

    // Constructor with raw parameters (composition)
    public Komputer(int id, String nama, int harga, int stok,
                    // Motherboard params
                    int mbId, String mbNama, int mbHarga, int mbStok,
                    String mbNoPart, String mbManufaktur, String mbKondisi,
                    String mbSocket, int mbDDR, String mbChipset,

                    // Processor params
                    int pId, String pNama, int pHarga, int pStok,
                    String pNoPart, String pManufaktur, String pKondisi,
                    String pSocket, int pCore, int pThread, int pTDP,

                    // RAM params
                    int rId, String rNama, int rHarga, int rStok,
                    String rNoPart, String rManufaktur, String rKondisi,
                    int rDDR, int rMemory, int rSpeed,

                    // GPU params
                    int gId, String gNama, int gHarga, int gStok,
                    String gNoPart, String gManufaktur, String gKondisi,
                    int gMemory, int gTDP, int gPcie) {
        super(id, nama, harga, stok);

        this.motherboard = new Motherboard(mbId, mbNama, mbHarga, mbStok,
                                           mbNoPart, mbManufaktur, mbKondisi,
                                           mbSocket, mbDDR, mbChipset);

        this.processor = new Processor(pId, pNama, pHarga, pStok,
                                       pNoPart, pManufaktur, pKondisi,
                                       pSocket, pCore, pThread, pTDP);

        this.ram = new Ram(rId, rNama, rHarga, rStok,
                           rNoPart, rManufaktur, rKondisi,
                           rDDR, rMemory, rSpeed);

        this.gpu = new GPU(gId, gNama, gHarga, gStok,
                           gNoPart, gManufaktur, gKondisi,
                           gMemory, gTDP, gPcie);
    }

    // Getters only (no setters, Komputer fully owns its components)
    public Motherboard getMotherboard() { return motherboard; }
    public Processor getProcessor() { return processor; }
    public Ram getRam() { return ram; }
    public GPU getGPU() { return gpu; }
}
