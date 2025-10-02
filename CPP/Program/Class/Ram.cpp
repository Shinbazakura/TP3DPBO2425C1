#include <iostream>
#include <string>
#include "PartKomputer.cpp"

class Ram : public PartKomputer {
private:
    int DDR_Ver;
    int memory;
    int speed;

public:
    Ram()
        : PartKomputer() {
        DDR_Ver = 0;
        memory = 0;
        speed = 0;
    }

    Ram(
        int id,
        std::string nama,
        int harga,
        int stok,
        std::string noPart,
        std::string manufaktur,
        std::string kondisi,
        int DDR_Ver,
        int memory,
        int speed
    )
    : PartKomputer(id, nama, harga, stok, noPart, manufaktur, kondisi)
    {
        this->DDR_Ver = DDR_Ver;
        this->memory  = memory;
        this->speed   = speed;
    }


    void setDDRVer(int DDR_Ver) { this->DDR_Ver = DDR_Ver; }
    int getDDRVer() { return DDR_Ver; }

    void setMemory(int memory) { this->memory = memory; }
    int getMemory() { return memory; }

    void setSpeed(int speed) { this->speed = speed; }
    int getSpeed() { return speed; }
};
