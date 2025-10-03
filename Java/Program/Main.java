import Class.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        List<Komputer> komputers = new ArrayList<>();

        komputers.add(new Komputer(
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

        komputers.add(new Komputer(
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

        System.out.println("List Komputer");
        printAllKomputer(komputers);

        // --- Add more Komputers (composition style) ---
        komputers.add(new Komputer(
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

        komputers.add(new Komputer(
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

        System.out.println("Setelah ditambah data");
        System.out.println("List Komputer");
        printAllKomputer(komputers);
    }

    // Equivalent of printAllKomputer in C++
    public static void printAllKomputer(List<Komputer> list) {
        if (list.isEmpty()) {
            System.out.println("Tidak ada data Komputer.");
            return;
        }

        int idx = 1;
        for (Komputer k : list) {
            System.out.println("=============================");
            System.out.println("Komputer #" + idx++);
            System.out.println("ID      : " + k.getId());
            System.out.println("Nama    : " + k.getNama());
            System.out.println("Harga   : " + k.getHarga());
            System.out.println("Stok    : " + k.getStok());

            System.out.println("\n-- Motherboard --");
            Motherboard mb = k.getMotherboard();
            System.out.println("NoPart      : " + mb.getNoPart());
            System.out.println("Nama        : " + mb.getNama());
            System.out.println("Manufaktur  : " + mb.getManufaktur());
            System.out.println("Kondisi     : " + mb.getKondisi());
            System.out.println("Socket      : " + mb.getSocket());
            System.out.println("DDR_Ver     : " + mb.getDDRVer());
            System.out.println("Chipset     : " + mb.getChipset());

            System.out.println("\n-- Processor --");
            Processor pr = k.getProcessor();
            System.out.println("NoPart      : " + pr.getNoPart());
            System.out.println("Nama        : " + pr.getNama());
            System.out.println("Manufaktur  : " + pr.getManufaktur());
            System.out.println("Kondisi     : " + pr.getKondisi());
            System.out.println("Socket      : " + pr.getSocket());
            System.out.println("Core        : " + pr.getCore());
            System.out.println("Thread      : " + pr.getThread());
            System.out.println("TDP         : " + pr.getTDP());

            System.out.println("\n-- RAM --");
            Ram rm = k.getRam();
            System.out.println("NoPart      : " + rm.getNoPart());
            System.out.println("Nama        : " + rm.getNama());
            System.out.println("Manufaktur  : " + rm.getManufaktur());
            System.out.println("Kondisi     : " + rm.getKondisi());
            System.out.println("DDR_Ver     : " + rm.getDDRVer());
            System.out.println("Memory      : " + rm.getMemory() + " GB");
            System.out.println("Speed       : " + rm.getSpeed() + " MHz");

            System.out.println("\n-- GPU --");
            GPU gp = k.getGPU();
            System.out.println("NoPart      : " + gp.getNoPart());
            System.out.println("Nama        : " + gp.getNama());
            System.out.println("Manufaktur  : " + gp.getManufaktur());
            System.out.println("Kondisi     : " + gp.getKondisi());
            System.out.println("Memory      : " + gp.getMemory() + " GB");
            System.out.println("TDP         : " + gp.getTDP() + " W");
            System.out.println("PCIe Gen    : " + gp.getPcieGen());

            System.out.println("=============================\n");
        }
    }
}
