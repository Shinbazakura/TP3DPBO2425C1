#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

#include "Class/Komputer.cpp"   // Komputer includes or forward-declares other classes

void printMotherboardTable(const std::vector<Motherboard> &list);
void printProcessorTable(const std::vector<Processor> &list);
void printRamTable(const std::vector<Ram> &list);
void printGPUTable(const std::vector<GPU> &list);
void printKomputerTable(const std::vector<Komputer> &list);
void printAllKomputer(std::vector<Komputer> &list);

int main() {
    // --- Vector for Motherboards ---
    std::vector<Motherboard> motherboards;
    motherboards.push_back(Motherboard(
        101, "ASUS Prime B550", 2000000, 5,
        "MB001", "ASUS", "Baru",
        "AM4", 4, "B550"
    ));
    motherboards.push_back(Motherboard(
        102, "ASUS Prime H510M-K R2.0", 1500000, 3,
        "MB002", "ASUS", "Bekas",
        "LGA 1200", 4, "H510M"
    ));

    // --- Vector for Processors ---
    std::vector<Processor> processors;
    processors.push_back(Processor(
        201, "Ryzen 7 5800X", 4500000, 8,
        "CPU001", "AMD", "Baru",
        "AM4", 8, 16, 105
    ));
    processors.push_back(Processor(
        202, "Intel i7-10700K", 5000000, 6,
        "CPU002", "Intel", "Baru",
        "LGA1200", 8, 16, 125
    ));

    // --- Vector for RAMs ---
    std::vector<Ram> rams;
    rams.push_back(Ram(
        301, "Corsair Vengeance", 1200000, 20,
        "RAM001", "Corsair", "Baru",
        4, 16, 3200
    ));
    rams.push_back(Ram(
        302, "Kingston HyperX", 1100000, 15,
        "RAM002", "Kingston", "Baru",
        4, 8, 2666
    ));

    // --- Vector for GPUs ---
    std::vector<GPU> gpus;
    gpus.push_back(GPU(
        401, "RTX 3060 Ti", 7000000, 4,
        "GPU001", "NVIDIA", "Baru",
        8, 200, 4
    ));
    gpus.push_back(GPU(
        402, "RX 6600 XT", 6000000, 5,
        "GPU002", "AMD", "Baru",
        8, 160, 4
    ));

    // --- Vector for Komputers (aggregate parts) ---
    std::vector<Komputer> komputers;
    komputers.push_back(Komputer(
        1, "Gaming PC 1", 15000000, 2,
        motherboards[0], processors[0], rams[0], gpus[0]
    ));
    komputers.push_back(Komputer(
        2, "Gaming PC 2", 12000000, 1,
        motherboards[1], processors[1], rams[1], gpus[1]
    ));

    std::cout << "List Motherboard" << std::endl;
    printMotherboardTable(motherboards);
    std::cout << "List Processor" << std::endl;
    printProcessorTable(processors);
    std::cout << "List Ram" << std::endl;
    printRamTable(rams);
    std::cout << "List GPU" << std::endl;
    printGPUTable(gpus);
    std::cout << "List Komputer" << std::endl;
    // printKomputerTable(komputers);
    printAllKomputer(komputers);

    // --- Add more Motherboards ---
    motherboards.push_back(Motherboard(
        103, "Gigabyte X570 Aorus Elite", 3500000, 4,
        "MB003", "Gigabyte", "Baru",
        "AM4", 4, "X570"
    ));
    motherboards.push_back(Motherboard(
        104, "ASRock B660M Pro RS", 2200000, 6,
        "MB004", "ASRock", "Baru",
        "LGA1700", 4, "B660"
    ));

    // --- Add more Processors ---
    processors.push_back(Processor(
        203, "Ryzen 5 5600X", 3000000, 10,
        "CPU003", "AMD", "Baru",
        "AM4", 6, 12, 65
    ));
    processors.push_back(Processor(
        204, "Intel i5-12400F", 2700000, 12,
        "CPU004", "Intel", "Baru",
        "LGA1700", 6, 12, 65
    ));

    // --- Add more RAMs ---
    rams.push_back(Ram(
        303, "G.Skill Trident Z", 1800000, 8,
        "RAM003", "G.Skill", "Baru",
        2, 16, 3600
    ));
    rams.push_back(Ram(
        304, "Team T-Force Delta", 1600000, 10,
        "RAM004", "TeamGroup", "Baru",
        2, 8, 3200
    ));

    // --- Add more GPUs ---
    gpus.push_back(GPU(
        403, "RTX 3070", 10000000, 3,
        "GPU003", "NVIDIA", "Baru",
        8, 220, 3
    ));
    gpus.push_back(GPU(
        404, "RX 6800", 9500000, 2,
        "GPU004", "AMD", "Baru",
        16, 250, 3
    ));

    // --- Add more Komputers ---
    komputers.push_back(Komputer(
        3, "Creator PC 1", 18000000, 1,
        motherboards[2], processors[2], rams[2], gpus[2]
    ));
    komputers.push_back(Komputer(
        4, "Creator PC 2", 20000000, 1,
        motherboards[3], processors[3], rams[3], gpus[3]
    ));

    std::cout << "Setelah ditambah data" << std::endl;

    std::cout << "List Motherboard" << std::endl;
    printMotherboardTable(motherboards);
    std::cout << "List Processor" << std::endl;
    printProcessorTable(processors);
    std::cout << "List Ram" << std::endl;
    printRamTable(rams);
    std::cout << "List GPU" << std::endl;
    printGPUTable(gpus);
    std::cout << "List Komputer" << std::endl;
    // printKomputerTable(komputers);
    printAllKomputer(komputers);


    return 0;
}

// ================= Motherboard =================
void printMotherboardTable(const std::vector<Motherboard> &list) {
    if (list.empty()) {
        std::cout << "Tidak ada data Motherboard.\n";
        return;
    }

    size_t wId=2,wNama=4,wHarga=5,wStok=4,wNoPart=7,wManufaktur=10,wKondisi=7,wSocket=6,wDDR=3,wChipset=7;

    for (auto mb : list) {
        wId=std::max(wId,std::to_string(mb.getId()).size());
        wNama=std::max(wNama,mb.getNama().size());
        wHarga=std::max(wHarga,std::to_string(mb.getHarga()).size());
        wStok=std::max(wStok,std::to_string(mb.getStok()).size());
        wNoPart=std::max(wNoPart,mb.getNoPart().size());
        wManufaktur=std::max(wManufaktur,mb.getManufaktur().size());
        wKondisi=std::max(wKondisi,mb.getKondisi().size());
        wSocket=std::max(wSocket,mb.getSocket().size());
        wDDR=std::max(wDDR,std::to_string(mb.getDDRVer()).size());
        wChipset=std::max(wChipset,mb.getChipset().size());
    }

    auto sep=[&](size_t w){ std::cout<<"+"<<std::string(w+2,'-'); };

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wSocket); sep(wDDR); sep(wChipset); std::cout<<"+\n";

    std::cout<<"| "<<std::left
             <<std::setw(wId)<<"ID"<<" | "
             <<std::setw(wNama)<<"Nama"<<" | "
             <<std::setw(wHarga)<<"Harga"<<" | "
             <<std::setw(wStok)<<"Stok"<<" | "
             <<std::setw(wNoPart)<<"NoPart"<<" | "
             <<std::setw(wManufaktur)<<"Manufaktur"<<" | "
             <<std::setw(wKondisi)<<"Kondisi"<<" | "
             <<std::setw(wSocket)<<"Socket"<<" | "
             <<std::setw(wDDR)<<"DDR"<<" | "
             <<std::setw(wChipset)<<"Chipset"<<" |\n";

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wSocket); sep(wDDR); sep(wChipset); std::cout<<"+\n";

    for(auto mb:list){
        std::cout<<"| "<<std::left
                 <<std::setw(wId)<<mb.getId()<<" | "
                 <<std::setw(wNama)<<mb.getNama()<<" | "
                 <<std::setw(wHarga)<<mb.getHarga()<<" | "
                 <<std::setw(wStok)<<mb.getStok()<<" | "
                 <<std::setw(wNoPart)<<mb.getNoPart()<<" | "
                 <<std::setw(wManufaktur)<<mb.getManufaktur()<<" | "
                 <<std::setw(wKondisi)<<mb.getKondisi()<<" | "
                 <<std::setw(wSocket)<<mb.getSocket()<<" | "
                 <<std::setw(wDDR)<<mb.getDDRVer()<<" | "
                 <<std::setw(wChipset)<<mb.getChipset()<<" |\n";
    }

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wSocket); sep(wDDR); sep(wChipset); std::cout<<"+\n";
}

// ================= Processor =================
void printProcessorTable(const std::vector<Processor> &list) {
    if (list.empty()) {
        std::cout << "Tidak ada data Processor.\n";
        return;
    }

    size_t wId=2,wNama=4,wHarga=5,wStok=4,wNoPart=7,wManufaktur=10,wKondisi=7,wSocket=6,wCore=4,wThread=6,wTDP=3;

    for(auto p:list){
        wId=std::max(wId,std::to_string(p.getId()).size());
        wNama=std::max(wNama,p.getNama().size());
        wHarga=std::max(wHarga,std::to_string(p.getHarga()).size());
        wStok=std::max(wStok,std::to_string(p.getStok()).size());
        wNoPart=std::max(wNoPart,p.getNoPart().size());
        wManufaktur=std::max(wManufaktur,p.getManufaktur().size());
        wKondisi=std::max(wKondisi,p.getKondisi().size());
        wSocket=std::max(wSocket,p.getSocket().size());
        wCore=std::max(wCore,std::to_string(p.getCore()).size());
        wThread=std::max(wThread,std::to_string(p.getThread()).size());
        wTDP=std::max(wTDP,std::to_string(p.getTDP()).size());
    }

    auto sep=[&](size_t w){ std::cout<<"+"<<std::string(w+2,'-'); };
    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wSocket); sep(wCore); sep(wThread); sep(wTDP); std::cout<<"+\n";

    std::cout<<"| "<<std::left
             <<std::setw(wId)<<"ID"<<" | "
             <<std::setw(wNama)<<"Nama"<<" | "
             <<std::setw(wHarga)<<"Harga"<<" | "
             <<std::setw(wStok)<<"Stok"<<" | "
             <<std::setw(wNoPart)<<"NoPart"<<" | "
             <<std::setw(wManufaktur)<<"Manufaktur"<<" | "
             <<std::setw(wKondisi)<<"Kondisi"<<" | "
             <<std::setw(wSocket)<<"Socket"<<" | "
             <<std::setw(wCore)<<"Core"<<" | "
             <<std::setw(wThread)<<"Thread"<<" | "
             <<std::setw(wTDP)<<"TDP"<<" |\n";

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wSocket); sep(wCore); sep(wThread); sep(wTDP); std::cout<<"+\n";

    for(auto p:list){
        std::cout<<"| "<<std::left
                 <<std::setw(wId)<<p.getId()<<" | "
                 <<std::setw(wNama)<<p.getNama()<<" | "
                 <<std::setw(wHarga)<<p.getHarga()<<" | "
                 <<std::setw(wStok)<<p.getStok()<<" | "
                 <<std::setw(wNoPart)<<p.getNoPart()<<" | "
                 <<std::setw(wManufaktur)<<p.getManufaktur()<<" | "
                 <<std::setw(wKondisi)<<p.getKondisi()<<" | "
                 <<std::setw(wSocket)<<p.getSocket()<<" | "
                 <<std::setw(wCore)<<p.getCore()<<" | "
                 <<std::setw(wThread)<<p.getThread()<<" | "
                 <<std::setw(wTDP)<<p.getTDP()<<" |\n";
    }

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wSocket); sep(wCore); sep(wThread); sep(wTDP); std::cout<<"+\n";
}

// ================= Ram =================
void printRamTable(const std::vector<Ram> &list){
    if(list.empty()){ std::cout<<"Tidak ada data RAM.\n"; return; }

    size_t wId=2,wNama=4,wHarga=5,wStok=4,wNoPart=7,wManufaktur=10,wKondisi=7,wDDR=3,wMemory=6,wSpeed=5;

    for(auto r:list){
        wId=std::max(wId,std::to_string(r.getId()).size());
        wNama=std::max(wNama,r.getNama().size());
        wHarga=std::max(wHarga,std::to_string(r.getHarga()).size());
        wStok=std::max(wStok,std::to_string(r.getStok()).size());
        wNoPart=std::max(wNoPart,r.getNoPart().size());
        wManufaktur=std::max(wManufaktur,r.getManufaktur().size());
        wKondisi=std::max(wKondisi,r.getKondisi().size());
        wDDR=std::max(wDDR,std::to_string(r.getDDRVer()).size());
        wMemory=std::max(wMemory,std::to_string(r.getMemory()).size());
        wSpeed=std::max(wSpeed,std::to_string(r.getSpeed()).size());
    }

    auto sep=[&](size_t w){ std::cout<<"+"<<std::string(w+2,'-'); };
    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wDDR); sep(wMemory); sep(wSpeed); std::cout<<"+\n";

    std::cout<<"| "<<std::left
             <<std::setw(wId)<<"ID"<<" | "
             <<std::setw(wNama)<<"Nama"<<" | "
             <<std::setw(wHarga)<<"Harga"<<" | "
             <<std::setw(wStok)<<"Stok"<<" | "
             <<std::setw(wNoPart)<<"NoPart"<<" | "
             <<std::setw(wManufaktur)<<"Manufaktur"<<" | "
             <<std::setw(wKondisi)<<"Kondisi"<<" | "
             <<std::setw(wDDR)<<"DDR"<<" | "
             <<std::setw(wMemory)<<"Memory"<<" | "
             <<std::setw(wSpeed)<<"Speed"<<" |\n";

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wDDR); sep(wMemory); sep(wSpeed); std::cout<<"+\n";

    for(auto r:list){
        std::cout<<"| "<<std::left
                 <<std::setw(wId)<<r.getId()<<" | "
                 <<std::setw(wNama)<<r.getNama()<<" | "
                 <<std::setw(wHarga)<<r.getHarga()<<" | "
                 <<std::setw(wStok)<<r.getStok()<<" | "
                 <<std::setw(wNoPart)<<r.getNoPart()<<" | "
                 <<std::setw(wManufaktur)<<r.getManufaktur()<<" | "
                 <<std::setw(wKondisi)<<r.getKondisi()<<" | "
                 <<std::setw(wDDR)<<r.getDDRVer()<<" | "
                 <<std::setw(wMemory)<<r.getMemory()<<" | "
                 <<std::setw(wSpeed)<<r.getSpeed()<<" |\n";
    }

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wDDR); sep(wMemory); sep(wSpeed); std::cout<<"+\n";
}

// ================= GPU =================
void printGPUTable(const std::vector<GPU> &list){
    if(list.empty()){ std::cout<<"Tidak ada data GPU.\n"; return; }

    size_t wId=2,wNama=4,wHarga=5,wStok=4,wNoPart=7,wManufaktur=10,wKondisi=7,wMemory=6,wTDP=3,wPcie=7;

    for(auto g:list){
        wId=std::max(wId,std::to_string(g.getId()).size());
        wNama=std::max(wNama,g.getNama().size());
        wHarga=std::max(wHarga,std::to_string(g.getHarga()).size());
        wStok=std::max(wStok,std::to_string(g.getStok()).size());
        wNoPart=std::max(wNoPart,g.getNoPart().size());
        wManufaktur=std::max(wManufaktur,g.getManufaktur().size());
        wKondisi=std::max(wKondisi,g.getKondisi().size());
        wMemory=std::max(wMemory,std::to_string(g.getMemory()).size());
        wTDP=std::max(wTDP,std::to_string(g.getTDP()).size());
        wPcie=std::max(wPcie,std::to_string(g.getPcieGen()).size());
    }

    auto sep=[&](size_t w){ std::cout<<"+"<<std::string(w+2,'-'); };
    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wMemory); sep(wTDP); sep(wPcie); std::cout<<"+\n";

    std::cout<<"| "<<std::left
             <<std::setw(wId)<<"ID"<<" | "
             <<std::setw(wNama)<<"Nama"<<" | "
             <<std::setw(wHarga)<<"Harga"<<" | "
             <<std::setw(wStok)<<"Stok"<<" | "
             <<std::setw(wNoPart)<<"NoPart"<<" | "
             <<std::setw(wManufaktur)<<"Manufaktur"<<" | "
             <<std::setw(wKondisi)<<"Kondisi"<<" | "
             <<std::setw(wMemory)<<"Memory"<<" | "
             <<std::setw(wTDP)<<"TDP"<<" | "
             <<std::setw(wPcie)<<"PCIeGen"<<" |\n";

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wMemory); sep(wTDP); sep(wPcie); std::cout<<"+\n";

    for(auto g:list){
        std::cout<<"| "<<std::left
                 <<std::setw(wId)<<g.getId()<<" | "
                 <<std::setw(wNama)<<g.getNama()<<" | "
                 <<std::setw(wHarga)<<g.getHarga()<<" | "
                 <<std::setw(wStok)<<g.getStok()<<" | "
                 <<std::setw(wNoPart)<<g.getNoPart()<<" | "
                 <<std::setw(wManufaktur)<<g.getManufaktur()<<" | "
                 <<std::setw(wKondisi)<<g.getKondisi()<<" | "
                 <<std::setw(wMemory)<<g.getMemory()<<" | "
                 <<std::setw(wTDP)<<g.getTDP()<<" | "
                 <<std::setw(wPcie)<<g.getPcieGen()<<" |\n";
    }

    sep(wId); sep(wNama); sep(wHarga); sep(wStok); sep(wNoPart); sep(wManufaktur);
    sep(wKondisi); sep(wMemory); sep(wTDP); sep(wPcie); std::cout<<"+\n";
}

void printKomputerTable(const std::vector<Komputer> &list) {
    if (list.empty()) {
        std::cout << "Tidak ada data Komputer.\n";
        return;
    }

    // ==== Hitung lebar kolom dinamis ====
    size_t wId = 2, wNama = 6, wHarga = 5, wStok = 4;
    size_t wMB = 11, wCPU = 11, wRAM = 7, wGPU = 7;

    for (auto k : list) {
        wId   = std::max(wId,   std::to_string(k.getId()).size());
        wNama = std::max(wNama, k.getNama().size());
        wHarga= std::max(wHarga,std::to_string(k.getHarga()).size());
        wStok = std::max(wStok, std::to_string(k.getStok()).size());
        wMB   = std::max(wMB,   k.getMotherboard().getNama().size());
        wCPU  = std::max(wCPU,  k.getProcessor().getNama().size());
        wRAM  = std::max(wRAM,  k.getRam().getNama().size());
        wGPU  = std::max(wGPU,  k.getGPU().getNama().size());
    }

    // ==== Cetak header ====
    auto sep = [&](size_t w){ std::cout << '+' << std::string(w + 2, '-'); };
    sep(wId); sep(wNama); sep(wHarga); sep(wStok);
    sep(wMB); sep(wCPU); sep(wRAM); sep(wGPU);
    std::cout << "+\n";

    std::cout << "| " << std::left
              << std::setw(wId)   << "ID"    << " | "
              << std::setw(wNama) << "Nama"  << " | "
              << std::setw(wHarga)<< "Harga" << " | "
              << std::setw(wStok) << "Stok"  << " | "
              << std::setw(wMB)   << "Motherboard" << " | "
              << std::setw(wCPU)  << "Processor"   << " | "
              << std::setw(wRAM)  << "RAM"         << " | "
              << std::setw(wGPU)  << "GPU"         << " |\n";

    sep(wId); sep(wNama); sep(wHarga); sep(wStok);
    sep(wMB); sep(wCPU); sep(wRAM); sep(wGPU);
    std::cout << "+\n";

    // ==== Cetak isi tabel ====
    for (auto k : list) {
        std::cout << "| " << std::left
                  << std::setw(wId)   << k.getId()           << " | "
                  << std::setw(wNama) << k.getNama()         << " | "
                  << std::setw(wHarga)<< k.getHarga()        << " | "
                  << std::setw(wStok) << k.getStok()         << " | "
                  << std::setw(wMB)   << k.getMotherboard().getNama() << " | "
                  << std::setw(wCPU)  << k.getProcessor().getNama()   << " | "
                  << std::setw(wRAM)  << k.getRam().getNama()         << " | "
                  << std::setw(wGPU)  << k.getGPU().getNama()         << " |\n";
    }

    // Garis penutup
    sep(wId); sep(wNama); sep(wHarga); sep(wStok);
    sep(wMB); sep(wCPU); sep(wRAM); sep(wGPU);
    std::cout << "+\n";
}

void printAllKomputer(std::vector<Komputer> &list) {
    if (list.empty()) {
        std::cout << "Tidak ada data Komputer.\n";
        return;
    }

    int idx = 1;
    for (Komputer &k : list) {
        std::cout << "=============================\n";
        std::cout << "Komputer #" << idx++ << "\n";
        std::cout << "ID      : " << k.getId() << "\n";
        std::cout << "Nama    : " << k.getNama() << "\n";
        std::cout << "Harga   : " << k.getHarga() << "\n";
        std::cout << "Stok    : " << k.getStok() << "\n";

        std::cout << "\n-- Motherboard --\n";
        Motherboard mb = k.getMotherboard();
        std::cout << "NoPart      : " << mb.getNoPart() << "\n";
        std::cout << "Nama        : " << mb.getNama() << "\n";
        std::cout << "Manufaktur  : " << mb.getManufaktur() << "\n";
        std::cout << "Kondisi     : " << mb.getKondisi() << "\n";
        std::cout << "Socket      : " << mb.getSocket() << "\n";
        std::cout << "DDR_Ver     : " << mb.getDDRVer() << "\n";
        std::cout << "Chipset     : " << mb.getChipset() << "\n";

        std::cout << "\n-- Processor --\n";
        Processor pr = k.getProcessor();
        std::cout << "NoPart      : " << pr.getNoPart() << "\n";
        std::cout << "Nama        : " << pr.getNama() << "\n";
        std::cout << "Manufaktur  : " << pr.getManufaktur() << "\n";
        std::cout << "Kondisi     : " << pr.getKondisi() << "\n";
        std::cout << "Socket      : " << pr.getSocket() << "\n";
        std::cout << "Core        : " << pr.getCore() << "\n";
        std::cout << "Thread      : " << pr.getThread() << "\n";
        std::cout << "TDP         : " << pr.getTDP() << "\n";

        std::cout << "\n-- RAM --\n";
        Ram rm = k.getRam();
        std::cout << "NoPart      : " << rm.getNoPart() << "\n";
        std::cout << "Nama        : " << rm.getNama() << "\n";
        std::cout << "Manufaktur  : " << rm.getManufaktur() << "\n";
        std::cout << "Kondisi     : " << rm.getKondisi() << "\n";
        std::cout << "DDR_Ver     : " << rm.getDDRVer() << "\n";
        std::cout << "Memory      : " << rm.getMemory() << " GB\n";
        std::cout << "Speed       : " << rm.getSpeed() << " MHz\n";

        std::cout << "\n-- GPU --\n";
        GPU gp = k.getGPU();
        std::cout << "NoPart      : " << gp.getNoPart() << "\n";
        std::cout << "Nama        : " << gp.getNama() << "\n";
        std::cout << "Manufaktur  : " << gp.getManufaktur() << "\n";
        std::cout << "Kondisi     : " << gp.getKondisi() << "\n";
        std::cout << "Memory      : " << gp.getMemory() << " GB\n";
        std::cout << "TDP         : " << gp.getTDP() << " W\n";
        std::cout << "PCIe Gen    : " << gp.getPcieGen() << "\n";

        std::cout << "=============================\n\n";
    }
}
