#include <iostream>
#include <string>
#include "PartKomputer.cpp"

class GPU : public PartKomputer {
private:
    int memory;
    int TDP;
    int pcieGen;

public:
    GPU()
        : PartKomputer() {
        memory = 0;
        TDP = 0;
        pcieGen = 0;
    }

    GPU(
        int id,
        std::string nama,
        int harga,
        int stok,
        std::string noPart,
        std::string manufaktur,
        std::string kondisi,
        int memory,
        int TDP,
        int pcieGen
    )
    : PartKomputer(id, nama, harga, stok, noPart, manufaktur, kondisi)
    {
        this->memory  = memory;
        this->TDP     = TDP;
        this->pcieGen = pcieGen;
    }


    void setMemory(int memory) { this->memory = memory; }
    int getMemory() { return memory; }

    void setTDP(int TDP) { this->TDP = TDP; }
    int getTDP() { return TDP; }

    void setPcieGen(int pcieGen) { this->pcieGen = pcieGen; }
    int getPcieGen() { return pcieGen; }
};
