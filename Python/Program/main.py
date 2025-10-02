from Class.Motherboard import Motherboard
from Class.Processor import Processor
from Class.Ram import Ram
from Class.GPU import GPU
from Class.Komputer import Komputer
from utils import *

def main():
    # --- List for Motherboards ---
    motherboards = [
        Motherboard(101, "ASUS Prime B550", 2000000, 5,
                    "MB001", "ASUS", "Baru", "AM4", 4, "B550"),
        Motherboard(102, "ASUS Prime H510M-K R2.0", 1500000, 3,
                    "MB002", "ASUS", "Bekas", "LGA 1200", 4, "H510M")
    ]

    # --- List for Processors ---
    processors = [
        Processor(201, "Ryzen 7 5800X", 4500000, 8,
                  "CPU001", "AMD", "Baru", "AM4", 8, 16, 105),
        Processor(202, "Intel i7-10700K", 5000000, 6,
                  "CPU002", "Intel", "Baru", "LGA1200", 8, 16, 125)
    ]

    # --- List for RAMs ---
    rams = [
        Ram(301, "Corsair Vengeance", 1200000, 20,
            "RAM001", "Corsair", "Baru", 4, 16, 3200),
        Ram(302, "Kingston HyperX", 1100000, 15,
            "RAM002", "Kingston", "Baru", 4, 8, 2666)
    ]

    # --- List for GPUs ---
    gpus = [
        GPU(401, "RTX 3060 Ti", 7000000, 4,
            "GPU001", "NVIDIA", "Baru", 8, 200, 4),
        GPU(402, "RX 6600 XT", 6000000, 5,
            "GPU002", "AMD", "Baru", 8, 160, 4)
    ]

    # --- List for Komputers (aggregate parts) ---
    komputers = [
        Komputer(1, "Gaming PC 1", 15000000, 2,
                 motherboards[0], processors[0], rams[0], gpus[0]),
        Komputer(2, "Gaming PC 2", 12000000, 1,
                 motherboards[1], processors[1], rams[1], gpus[1])
    ]

    print("List Motherboard")
    print_motherboard_table(motherboards)
    print("List Processor")
    print_processor_table(processors)
    print("List Ram")
    print_ram_table(rams)
    print("List GPU")
    print_gpu_table(gpus)
    print("List Komputer")
    print_all_komputer(komputers)

    # --- Add more Motherboards ---
    motherboards.extend([
        Motherboard(103, "Gigabyte X570 Aorus Elite", 3500000, 4,
                    "MB003", "Gigabyte", "Baru", "AM4", 4, "X570"),
        Motherboard(104, "ASRock B660M Pro RS", 2200000, 6,
                    "MB004", "ASRock", "Baru", "LGA1700", 4, "B660")
    ])

    # --- Add more Processors ---
    processors.extend([
        Processor(203, "Ryzen 5 5600X", 3000000, 10,
                  "CPU003", "AMD", "Baru", "AM4", 6, 12, 65),
        Processor(204, "Intel i5-12400F", 2700000, 12,
                  "CPU004", "Intel", "Baru", "LGA1700", 6, 12, 65)
    ])

    # --- Add more RAMs ---
    rams.extend([
        Ram(303, "G.Skill Trident Z", 1800000, 8,
            "RAM003", "G.Skill", "Baru", 2, 16, 3600),
        Ram(304, "Team T-Force Delta", 1600000, 10,
            "RAM004", "TeamGroup", "Baru", 2, 8, 3200)
    ])

    # --- Add more GPUs ---
    gpus.extend([
        GPU(403, "RTX 3070", 10000000, 3,
            "GPU003", "NVIDIA", "Baru", 8, 220, 3),
        GPU(404, "RX 6800", 9500000, 2,
            "GPU004", "AMD", "Baru", 16, 250, 3)
    ])

    # --- Add more Komputers ---
    komputers.extend([
        Komputer(3, "Creator PC 1", 18000000, 1,
                 motherboards[2], processors[2], rams[2], gpus[2]),
        Komputer(4, "Creator PC 2", 20000000, 1,
                 motherboards[3], processors[3], rams[3], gpus[3])
    ])

    print("Setelah ditambah data")
    print("List Motherboard")
    print_motherboard_table(motherboards)
    print("List Processor")
    print_processor_table(processors)
    print("List Ram")
    print_ram_table(rams)
    print("List GPU")
    print_gpu_table(gpus)
    print("List Komputer")
    print_all_komputer(komputers)


if __name__ == "__main__":
    main()
