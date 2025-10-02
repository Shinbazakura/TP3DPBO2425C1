package Class;

public class Barang {
    private int id;
    private String nama;
    private int harga;
    private int stok;

    // Constructor tanpa parameter
    public Barang() {
        this.id = 0;
        this.nama = "";
        this.harga = 0;
        this.stok = 0;
    }

    // Constructor dengan parameter
    public Barang(int id, String nama, int harga, int stok) {
        this.id = id;
        this.nama = nama;
        this.harga = harga;
        this.stok = stok;
    }

    // Getter and Setter for id
    public int getId() { return id; }
    public void setId(int id) { this.id = id; }

    // Getter and Setter for nama
    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    // Getter and Setter for harga
    public int getHarga() { return harga; }
    public void setHarga(int harga) { this.harga = harga; }

    // Getter and Setter for stok
    public int getStok() { return stok; }
    public void setStok(int stok) { this.stok = stok; }
}
