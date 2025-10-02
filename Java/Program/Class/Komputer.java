package Class;

public class Komputer extends Barang {
    private Motherboard motherboard;
    private Processor processor;
    private Ram ram;
    private GPU gpu;

    public Komputer() {
        super();
    }

    public Komputer(int id, String nama, int harga, int stok,
                    Motherboard motherboard, Processor processor,
                    Ram ram, GPU gpu) {
        super(id, nama, harga, stok);
        this.motherboard = motherboard;
        this.processor = processor;
        this.ram = ram;
        this.gpu = gpu;
    }

    public Motherboard getMotherboard() { return motherboard; }
    public void setMotherboard(Motherboard motherboard) { this.motherboard = motherboard; }

    public Processor getProcessor() { return processor; }
    public void setProcessor(Processor processor) { this.processor = processor; }

    public Ram getRam() { return ram; }
    public void setRam(Ram ram) { this.ram = ram; }

    public GPU getGPU() { return gpu; }
    public void setGPU(GPU gpu) { this.gpu = gpu; }
}
