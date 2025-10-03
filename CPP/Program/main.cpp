#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

#include "Class/Komputer.cpp"   // Komputer includes or forward-declares other classes

void printAllKomputer(std::vector<Komputer> &list);

int main() {
    std::vector<Komputer> komputers;
    komputers.push_back(Komputer(
        1, "Gaming PC 1", 15000000, 2,
        // Motherboard
        101, "ASUS Prime B550", 2000000, 5,
        "MB001", "ASUS", "Baru", "AM4", 4, "B550",
        // Processor
        201, "Ryzen 7 5800X", 4500000, 8,
        "CPU001", "AMD", "Baru", "AM4", 8, 16, 105,
        // RAM
        301, "Corsair Vengeance", 1200000, 20,
        "RAM001", "Corsair", "Baru", 4, 16, 3200,
        // GPU
        401, "RTX 3060 Ti", 7000000, 4,
        "GPU001", "NVIDIA", "Baru", 8, 200, 4
    ));

    komputers.push_back(Komputer(
        2, "Gaming PC 2", 12000000, 1,
        // Motherboard
        102, "ASUS Prime H510M-K R2.0", 1500000, 3,
        "MB002", "ASUS", "Bekas", "LGA 1200", 4, "H510M",
        // Processor
        202, "Intel i7-10700K", 5000000, 6,
        "CPU002", "Intel", "Baru", "LGA1200", 8, 16, 125,
        // RAM
        302, "Kingston HyperX", 1100000, 15,
        "RAM002", "Kingston", "Baru", 4, 8, 2666,
        // GPU
        402, "RX 6600 XT", 6000000, 5,
        "GPU002", "AMD", "Baru", 8, 160, 4
    ));
    

    std::cout << "List Komputer" << std::endl;
    // printKomputerTable(komputers);
    printAllKomputer(komputers);

    // --- Add more Komputers (composition style) ---
    komputers.push_back(Komputer(
        3, "Creator PC 1", 18000000, 1,
        // Motherboard
        103, "Gigabyte X570 Aorus Elite", 3500000, 4,
        "MB003", "Gigabyte", "Baru", "AM4", 4, "X570",
        // Processor
        203, "Ryzen 5 5600X", 3000000, 10,
        "CPU003", "AMD", "Baru", "AM4", 6, 12, 65,
        // RAM
        303, "G.Skill Trident Z", 1800000, 8,
        "RAM003", "G.Skill", "Baru", 2, 16, 3600,
        // GPU
        403, "RTX 3070", 10000000, 3,
        "GPU003", "NVIDIA", "Baru", 8, 220, 3
    ));

    komputers.push_back(Komputer(
        4, "Creator PC 2", 20000000, 1,
        // Motherboard
        104, "ASRock B660M Pro RS", 2200000, 6,
        "MB004", "ASRock", "Baru", "LGA1700", 4, "B660",
        // Processor
        204, "Intel i5-12400F", 2700000, 12,
        "CPU004", "Intel", "Baru", "LGA1700", 6, 12, 65,
        // RAM
        304, "Team T-Force Delta", 1600000, 10,
        "RAM004", "TeamGroup", "Baru", 2, 8, 3200,
        // GPU
        404, "RX 6800", 9500000, 2,
        "GPU004", "AMD", "Baru", 16, 250, 3
    ));


    std::cout << "Setelah ditambah data" << std::endl;
    std::cout << "List Komputer" << std::endl;
    // printKomputerTable(komputers);
    printAllKomputer(komputers);


    return 0;
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
