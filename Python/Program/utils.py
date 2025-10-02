def print_separator(widths):
    line = "+"
    for w in widths:
        line += "-" * (w + 2) + "+"
    print(line)

def format_row(values, widths):
    row = "|"
    for value, w in zip(values, widths):
        row += " " + str(value).ljust(w) + " |"
    print(row)

# ================= Barang =================
def print_barang_table(barangs):
    if not barangs:
        print("Tidak ada data Barang.")
        return

    headers = ["ID", "Nama", "Harga", "Stok"]
    widths = [len(h) for h in headers]

    # compute max width
    for b in barangs:
        widths[0] = max(widths[0], len(str(b.get_id())))
        widths[1] = max(widths[1], len(b.get_nama()))
        widths[2] = max(widths[2], len(str(b.get_harga())))
        widths[3] = max(widths[3], len(str(b.get_stok())))

    # print table
    print_separator(widths)
    format_row(headers, widths)
    print_separator(widths)
    for b in barangs:
        format_row([b.get_id(), b.get_nama(), b.get_harga(), b.get_stok()], widths)
    print_separator(widths)


# ================= PartKomputer =================
def print_partkomputer_table(parts):
    if not parts:
        print("Tidak ada data PartKomputer.")
        return

    headers = ["ID", "Nama", "Harga", "Stok", "NoPart", "Manufaktur", "Kondisi"]
    widths = [len(h) for h in headers]

    for p in parts:
        widths[0] = max(widths[0], len(str(p.get_id())))
        widths[1] = max(widths[1], len(p.get_nama()))
        widths[2] = max(widths[2], len(str(p.get_harga())))
        widths[3] = max(widths[3], len(str(p.get_stok())))
        widths[4] = max(widths[4], len(p.get_no_part()))
        widths[5] = max(widths[5], len(p.get_manufaktur()))
        widths[6] = max(widths[6], len(p.get_kondisi()))

    print_separator(widths)
    format_row(headers, widths)
    print_separator(widths)
    for p in parts:
        format_row([p.get_id(), p.get_nama(), p.get_harga(), p.get_stok(),
                    p.get_no_part(), p.get_manufaktur(), p.get_kondisi()], widths)
    print_separator(widths)


# ================= Motherboard =================
def print_motherboard_table(mbs):
    if not mbs:
        print("Tidak ada data Motherboard.")
        return

    headers = ["ID","Nama","Harga","Stok","NoPart","Manufaktur","Kondisi","Socket","DDR","Chipset"]
    widths = [len(h) for h in headers]

    for mb in mbs:
        widths[0] = max(widths[0], len(str(mb.get_id())))
        widths[1] = max(widths[1], len(mb.get_nama()))
        widths[2] = max(widths[2], len(str(mb.get_harga())))
        widths[3] = max(widths[3], len(str(mb.get_stok())))
        widths[4] = max(widths[4], len(mb.get_no_part()))
        widths[5] = max(widths[5], len(mb.get_manufaktur()))
        widths[6] = max(widths[6], len(mb.get_kondisi()))
        widths[7] = max(widths[7], len(mb.get_socket()))
        widths[8] = max(widths[8], len(str(mb.get_ddr_ver())))
        widths[9] = max(widths[9], len(mb.get_chipset()))

    print_separator(widths)
    format_row(headers, widths)
    print_separator(widths)
    for mb in mbs:
        format_row([mb.get_id(), mb.get_nama(), mb.get_harga(), mb.get_stok(),
                    mb.get_no_part(), mb.get_manufaktur(), mb.get_kondisi(),
                    mb.get_socket(), mb.get_ddr_ver(), mb.get_chipset()], widths)
    print_separator(widths)


# ================= Processor =================
def print_processor_table(procs):
    if not procs:
        print("Tidak ada data Processor.")
        return

    headers = ["ID","Nama","Harga","Stok","NoPart","Manufaktur","Kondisi","Socket","Core","Thread","TDP"]
    widths = [len(h) for h in headers]

    for pr in procs:
        widths[0] = max(widths[0], len(str(pr.get_id())))
        widths[1] = max(widths[1], len(pr.get_nama()))
        widths[2] = max(widths[2], len(str(pr.get_harga())))
        widths[3] = max(widths[3], len(str(pr.get_stok())))
        widths[4] = max(widths[4], len(pr.get_no_part()))
        widths[5] = max(widths[5], len(pr.get_manufaktur()))
        widths[6] = max(widths[6], len(pr.get_kondisi()))
        widths[7] = max(widths[7], len(pr.get_socket()))
        widths[8] = max(widths[8], len(str(pr.get_core())))
        widths[9] = max(widths[9], len(str(pr.get_thread())))
        widths[10] = max(widths[10], len(str(pr.get_tdp())))

    print_separator(widths)
    format_row(headers, widths)
    print_separator(widths)
    for pr in procs:
        format_row([pr.get_id(), pr.get_nama(), pr.get_harga(), pr.get_stok(),
                    pr.get_no_part(), pr.get_manufaktur(), pr.get_kondisi(),
                    pr.get_socket(), pr.get_core(), pr.get_thread(), pr.get_tdp()], widths)
    print_separator(widths)


# ================= Ram =================
def print_ram_table(rams):
    if not rams:
        print("Tidak ada data RAM.")
        return

    headers = ["ID","Nama","Harga","Stok","NoPart","Manufaktur","Kondisi","DDR","Memory","Speed"]
    widths = [len(h) for h in headers]

    for r in rams:
        widths[0] = max(widths[0], len(str(r.get_id())))
        widths[1] = max(widths[1], len(r.get_nama()))
        widths[2] = max(widths[2], len(str(r.get_harga())))
        widths[3] = max(widths[3], len(str(r.get_stok())))
        widths[4] = max(widths[4], len(r.get_no_part()))
        widths[5] = max(widths[5], len(r.get_manufaktur()))
        widths[6] = max(widths[6], len(r.get_kondisi()))
        widths[7] = max(widths[7], len(str(r.get_ddr_ver())))
        widths[8] = max(widths[8], len(str(r.get_memory())))
        widths[9] = max(widths[9], len(str(r.get_speed())))

    print_separator(widths)
    format_row(headers, widths)
    print_separator(widths)
    for r in rams:
        format_row([r.get_id(), r.get_nama(), r.get_harga(), r.get_stok(),
                    r.get_no_part(), r.get_manufaktur(), r.get_kondisi(),
                    r.get_ddr_ver(), r.get_memory(), r.get_speed()], widths)
    print_separator(widths)


# ================= GPU =================
def print_gpu_table(gpus):
    if not gpus:
        print("Tidak ada data GPU.")
        return

    headers = ["ID","Nama","Harga","Stok","NoPart","Manufaktur","Kondisi","Memory","TDP","PCIeGen"]
    widths = [len(h) for h in headers]

    for g in gpus:
        widths[0] = max(widths[0], len(str(g.get_id())))
        widths[1] = max(widths[1], len(g.get_nama()))
        widths[2] = max(widths[2], len(str(g.get_harga())))
        widths[3] = max(widths[3], len(str(g.get_stok())))
        widths[4] = max(widths[4], len(g.get_no_part()))
        widths[5] = max(widths[5], len(g.get_manufaktur()))
        widths[6] = max(widths[6], len(g.get_kondisi()))
        widths[7] = max(widths[7], len(str(g.get_memory())))
        widths[8] = max(widths[8], len(str(g.get_tdp())))
        widths[9] = max(widths[9], len(str(g.get_pcie_gen())))

    print_separator(widths)
    format_row(headers, widths)
    print_separator(widths)
    for g in gpus:
        format_row([g.get_id(), g.get_nama(), g.get_harga(), g.get_stok(),
                    g.get_no_part(), g.get_manufaktur(), g.get_kondisi(),
                    g.get_memory(), g.get_tdp(), g.get_pcie_gen()], widths)
    print_separator(widths)

def print_all_komputer(komputer_list):
    if not komputer_list:
        print("Tidak ada data Komputer.")
        return

    for idx, k in enumerate(komputer_list, start=1):
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
