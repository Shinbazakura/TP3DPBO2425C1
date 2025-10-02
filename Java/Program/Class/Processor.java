package Class;

public class Processor extends PartKomputer {
    private String socket;
    private int core;
    private int thread;
    private int TDP;

    public Processor() {
        super();
        this.socket = "";
        this.core = 0;
        this.thread = 0;
        this.TDP = 0;
    }

    public Processor(int id, String nama, int harga, int stok,
                     String noPart, String manufaktur, String kondisi,
                     String socket, int core, int thread, int TDP) {
        super(id, nama, harga, stok, noPart, manufaktur, kondisi);
        this.socket = socket;
        this.core = core;
        this.thread = thread;
        this.TDP = TDP;
    }

    public String getSocket() { return socket; }
    public void setSocket(String socket) { this.socket = socket; }

    public int getCore() { return core; }
    public void setCore(int core) { this.core = core; }

    public int getThread() { return thread; }
    public void setThread(int thread) { this.thread = thread; }

    public int getTDP() { return TDP; }
    public void setTDP(int TDP) { this.TDP = TDP; }
}
