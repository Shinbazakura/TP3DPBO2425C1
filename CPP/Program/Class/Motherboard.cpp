#pragma once

#include <iostream>
#include <string>
#include "PartKomputer.cpp"

class Motherboard : public PartKomputer {
private:
    std::string socket;
    int DDR_Ver;
    std::string chipset;

public:
    Motherboard()
        : PartKomputer() {
        socket = "";
        DDR_Ver = 0;
        chipset = "";
    }

    Motherboard(
    int id,
    std::string nama,
    int harga,
    int stok,
    std::string noPart,
    std::string manufaktur,
    std::string kondisi,
    std::string socket,
    int DDR_Ver,
    std::string chipset
    )
    : PartKomputer(id, nama, harga, stok, noPart, manufaktur, kondisi)
    {
        this->socket  = socket;
        this->DDR_Ver = DDR_Ver;
        this->chipset = chipset;
    }

    void setSocket(std::string socket) { this->socket = socket; }
    std::string getSocket() { return socket; }

    void setDDRVer(int DDR_Ver) { this->DDR_Ver = DDR_Ver; }
    int getDDRVer() { return DDR_Ver; }

    void setChipset(std::string chipset) { this->chipset = chipset; }
    std::string getChipset() { return chipset; }
};
