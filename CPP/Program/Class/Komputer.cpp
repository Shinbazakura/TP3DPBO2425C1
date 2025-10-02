#include <iostream>
#include <string>
#include "Barang.cpp"
#include "Motherboard.cpp"
#include "Processor.cpp"
#include "Ram.cpp"
#include "GPU.cpp"

class Komputer : public Barang {
private:
    Motherboard motherboard;
    Processor processor;
    Ram ram;
    GPU gpu;

public:
    Komputer()
        : Barang() {
    }

    Komputer(int id, std::string nama, int harga, int stok,
             Motherboard motherboard,
             Processor processor,
             Ram ram,
             GPU gpu)
        : Barang(id, nama, harga, stok) {
        this->motherboard = motherboard;
        this->processor = processor;
        this->ram = ram;
        this->gpu = gpu;
    }

    void setMotherboard(Motherboard mb) { this->motherboard = mb; }
    Motherboard getMotherboard() { return motherboard; }

    void setProcessor(Processor p) { this->processor = p; }
    Processor getProcessor() { return processor; }

    void setRam(Ram r) { this->ram = r; }
    Ram getRam() { return ram; }

    void setGPU(GPU g) { this->gpu = g; }
    GPU getGPU() { return gpu; }
};
 