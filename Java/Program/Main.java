import Class.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {

        // --- List for Motherboards ---
        List<Motherboard> motherboards = new ArrayList<>();
        motherboards.add(new Motherboard(101, "ASUS Prime B550", 2000000, 5,
                "MB001", "ASUS", "Baru", "AM4", 4, "B550"));
        motherboards.add(new Motherboard(102, "ASUS Prime H510M-K R2.0", 1500000, 3,
                "MB002", "ASUS", "Bekas", "LGA 1200", 4, "H510M"));

        // --- List for Processors ---
        List<Processor> processors = new ArrayList<>();
        processors.add(new Processor(201, "Ryzen 7 5800X", 4500000, 8,
                "CPU001", "AMD", "Baru", "AM4", 8, 16, 105));
        processors.add(new Processor(202, "Intel i7-10700K", 5000000, 6,
                "CPU002", "Intel", "Baru", "LGA1200", 8, 16, 125));

        // --- List for RAMs ---
        List<Ram> rams = new ArrayList<>();
        rams.add(new Ram(301, "Corsair Vengeance", 1200000, 20,
                "RAM001", "Corsair", "Baru", 4, 16, 3200));
        rams.add(new Ram(302, "Kingston HyperX", 1100000, 15,
                "RAM002", "Kingston", "Baru", 4, 8, 2666));

        // --- List for GPUs ---
        List<GPU> gpus = new ArrayList<>();
        gpus.add(new GPU(401, "RTX 3060 Ti", 7000000, 4,
                "GPU001", "NVIDIA", "Baru", 8, 200, 4));
        gpus.add(new GPU(402, "RX 6600 XT", 6000000, 5,
                "GPU002", "AMD", "Baru", 8, 160, 4));

        // --- List for Komputers ---
        List<Komputer> komputers = new ArrayList<>();
        komputers.add(new Komputer(1, "Gaming PC 1", 15000000, 2,
                motherboards.get(0), processors.get(0), rams.get(0), gpus.get(0)));
        komputers.add(new Komputer(2, "Gaming PC 2", 12000000, 1,
                motherboards.get(1), processors.get(1), rams.get(1), gpus.get(1)));

        System.out.println("List Motherboard");
        Utils.printMotherboardTable(motherboards);

        System.out.println("List Processor");
        Utils.printProcessorTable(processors);

        System.out.println("List Ram");
        Utils.printRamTable(rams);

        System.out.println("List GPU");
        Utils.printGPUTable(gpus);

        System.out.println("List Komputer");
        Utils.printAllKomputer(komputers);

        // --- Add more Motherboards ---
        motherboards.add(new Motherboard(103, "Gigabyte X570 Aorus Elite", 3500000, 4,
                "MB003", "Gigabyte", "Baru", "AM4", 4, "X570"));
        motherboards.add(new Motherboard(104, "ASRock B660M Pro RS", 2200000, 6,
                "MB004", "ASRock", "Baru", "LGA1700", 4, "B660"));

        // --- Add more Processors ---
        processors.add(new Processor(203, "Ryzen 5 5600X", 3000000, 10,
                "CPU003", "AMD", "Baru", "AM4", 6, 12, 65));
        processors.add(new Processor(204, "Intel i5-12400F", 2700000, 12,
                "CPU004", "Intel", "Baru", "LGA1700", 6, 12, 65));

        // --- Add more RAMs ---
        rams.add(new Ram(303, "G.Skill Trident Z", 1800000, 8,
                "RAM003", "G.Skill", "Baru", 2, 16, 3600));
        rams.add(new Ram(304, "Team T-Force Delta", 1600000, 10,
                "RAM004", "TeamGroup", "Baru", 2, 8, 3200));

        // --- Add more GPUs ---
        gpus.add(new GPU(403, "RTX 3070", 10000000, 3,
                "GPU003", "NVIDIA", "Baru", 8, 220, 3));
        gpus.add(new GPU(404, "RX 6800", 9500000, 2,
                "GPU004", "AMD", "Baru", 16, 250, 3));

        // --- Add more Komputers ---
        komputers.add(new Komputer(3, "Creator PC 1", 18000000, 1,
                motherboards.get(2), processors.get(2), rams.get(2), gpus.get(2)));
        komputers.add(new Komputer(4, "Creator PC 2", 20000000, 1,
                motherboards.get(3), processors.get(3), rams.get(3), gpus.get(3)));

        System.out.println("Setelah ditambah data");

        System.out.println("List Motherboard");
        Utils.printMotherboardTable(motherboards);

        System.out.println("List Processor");
        Utils.printProcessorTable(processors);

        System.out.println("List Ram");
        Utils.printRamTable(rams);

        System.out.println("List GPU");
        Utils.printGPUTable(gpus);

        System.out.println("List Komputer");
        Utils.printAllKomputer(komputers);

    }
}
