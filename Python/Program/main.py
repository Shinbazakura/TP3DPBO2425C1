from Class.Komputer import Komputer

def print_all_komputer(komputers):
    if not komputers:
        print("Tidak ada data Komputer.")
        return

    for idx, k in enumerate(komputers, start=1):
        print("=============================")
        print(f"Komputer #{idx}")
        print(f"ID      : {k.get_id()}")
        print(f"Nama    : {k.get_nama()}")
        print(f"Harga   : {k.get_harga()}")
        print(f"Stok    : {k.get_stok()}")

        print("\n-- Motherboard --")
        mb = k.get_motherboard()
        print(f"NoPart      : {mb.get_no_part()}")
        print(f"Nama        : {mb.get_nama()}")
        print(f"Manufaktur  : {mb.get_manufaktur()}")
        print(f"Kondisi     : {mb.get_kondisi()}")
        print(f"Socket      : {mb.get_socket()}")
        print(f"DDR_Ver     : {mb.get_ddr_ver()}")
        print(f"Chipset     : {mb.get_chipset()}")

        print("\n-- Processor --")
        pr = k.get_processor()
        print(f"NoPart      : {pr.get_no_part()}")
        print(f"Nama        : {pr.get_nama()}")
        print(f"Manufaktur  : {pr.get_manufaktur()}")
        print(f"Kondisi     : {pr.get_kondisi()}")
        print(f"Socket      : {pr.get_socket()}")
        print(f"Core        : {pr.get_core()}")
        print(f"Thread      : {pr.get_thread()}")
        print(f"TDP         : {pr.get_tdp()}")

        print("\n-- RAM --")
        rm = k.get_ram()
        print(f"NoPart      : {rm.get_no_part()}")
        print(f"Nama        : {rm.get_nama()}")
        print(f"Manufaktur  : {rm.get_manufaktur()}")
        print(f"Kondisi     : {rm.get_kondisi()}")
        print(f"DDR_Ver     : {rm.get_ddr_ver()}")
        print(f"Memory      : {rm.get_memory()} GB")
        print(f"Speed       : {rm.get_speed()} MHz")

        print("\n-- GPU --")
        gp = k.get_gpu()
        print(f"NoPart      : {gp.get_no_part()}")
        print(f"Nama        : {gp.get_nama()}")
        print(f"Manufaktur  : {gp.get_manufaktur()}")
        print(f"Kondisi     : {gp.get_kondisi()}")
        print(f"Memory      : {gp.get_memory()} GB")
        print(f"TDP         : {gp.get_tdp()} W")
        print(f"PCIe Gen    : {gp.get_pcie_gen()}")

        print("=============================\n")


def main():
    komputers = []

    # --- Initial Komputers ---
    komputers.append(Komputer(
        1, "Gaming PC 1", 15000000, 2,
        # Motherboard
        101, "ASUS Prime B550", 2000000, 5,
        "MB001", "ASUS", "Baru", "AM4", 4, "B550",
        # Processor
        201, "Ryzen 7 5800X", 4500000, 8,
        "CPU001", "AMD", "Baru", "AM4", 8, 16, 105,
        # RAM
        301, "Corsair Vengeance", 1200000, 20,
        "RAM001", "Corsair", "Baru", 4, 16, 3200,
        # GPU
        401, "RTX 3060 Ti", 7000000, 4,
        "GPU001", "NVIDIA", "Baru", 8, 200, 4
    ))

    komputers.append(Komputer(
        2, "Gaming PC 2", 12000000, 1,
        # Motherboard
        102, "ASUS Prime H510M-K R2.0", 1500000, 3,
        "MB002", "ASUS", "Bekas", "LGA 1200", 4, "H510M",
        # Processor
        202, "Intel i7-10700K", 5000000, 6,
        "CPU002", "Intel", "Baru", "LGA1200", 8, 16, 125,
        # RAM
        302, "Kingston HyperX", 1100000, 15,
        "RAM002", "Kingston", "Baru", 4, 8, 2666,
        # GPU
        402, "RX 6600 XT", 6000000, 5,
        "GPU002", "AMD", "Baru", 8, 160, 4
    ))

    print("List Komputer")
    print_all_komputer(komputers)

    # --- Add more Komputers ---
    komputers.append(Komputer(
        3, "Creator PC 1", 18000000, 1,
        # Motherboard
        103, "Gigabyte X570 Aorus Elite", 3500000, 4,
        "MB003", "Gigabyte", "Baru", "AM4", 4, "X570",
        # Processor
        203, "Ryzen 5 5600X", 3000000, 10,
        "CPU003", "AMD", "Baru", "AM4", 6, 12, 65,
        # RAM
        303, "G.Skill Trident Z", 1800000, 8,
        "RAM003", "G.Skill", "Baru", 2, 16, 3600,
        # GPU
        403, "RTX 3070", 10000000, 3,
        "GPU003", "NVIDIA", "Baru", 8, 220, 3
    ))

    komputers.append(Komputer(
        4, "Creator PC 2", 20000000, 1,
        # Motherboard
        104, "ASRock B660M Pro RS", 2200000, 6,
        "MB004", "ASRock", "Baru", "LGA1700", 4, "B660",
        # Processor
        204, "Intel i5-12400F", 2700000, 12,
        "CPU004", "Intel", "Baru", "LGA1700", 6, 12, 65,
        # RAM
        304, "Team T-Force Delta", 1600000, 10,
        "RAM004", "TeamGroup", "Baru", 2, 8, 3200,
        # GPU
        404, "RX 6800", 9500000, 2,
        "GPU004", "AMD", "Baru", 16, 250, 3
    ))

    print("Setelah ditambah data")
    print("List Komputer")
    print_all_komputer(komputers)


if __name__ == "__main__":
    main()
