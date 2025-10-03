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
    // Default constructor
    Komputer()
        : Barang(),
          motherboard(),
          processor(),
          ram(),
          gpu() {}

    // Constructor with raw parameters (composition)
    Komputer(int id, std::string nama, int harga, int stok,
             // Motherboard params
             int mbId, std::string mbNama, int mbHarga, int mbStok,
             std::string mbNoPart, std::string mbManufaktur, std::string mbKondisi,
             std::string mbSocket, int mbDDR, std::string mbChipset,

             // Processor params
             int pId, std::string pNama, int pHarga, int pStok,
             std::string pNoPart, std::string pManufaktur, std::string pKondisi,
             std::string pSocket, int pCore, int pThread, int pTDP,

             // RAM params
             int rId, std::string rNama, int rHarga, int rStok,
             std::string rNoPart, std::string rManufaktur, std::string rKondisi,
             int rDDR, int rMemory, int rSpeed,

             // GPU params
             int gId, std::string gNama, int gHarga, int gStok,
             std::string gNoPart, std::string gManufaktur, std::string gKondisi,
             int gMemory, int gTDP, int gPcie)
        : Barang(id, nama, harga, stok),
          motherboard(mbId, mbNama, mbHarga, mbStok,
                      mbNoPart, mbManufaktur, mbKondisi,
                      mbSocket, mbDDR, mbChipset),
          processor(pId, pNama, pHarga, pStok,
                    pNoPart, pManufaktur, pKondisi,
                    pSocket, pCore, pThread, pTDP),
          ram(rId, rNama, rHarga, rStok,
              rNoPart, rManufaktur, rKondisi,
              rDDR, rMemory, rSpeed),
          gpu(gId, gNama, gHarga, gStok,
              gNoPart, gManufaktur, gKondisi,
              gMemory, gTDP, gPcie) {}

    // Getters only (no setters, because composition means Komputer owns them)
    Motherboard getMotherboard() { return motherboard; }
    Processor getProcessor() { return processor; }
    Ram getRam() { return ram; }
    GPU getGPU() { return gpu; }
};
