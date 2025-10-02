import Class.Motherboard;
import Class.Processor;
import Class.Ram;
import Class.GPU;
import Class.Komputer;

import java.util.List;

public class Utils {

    // ================= Motherboard =================
    public static void printMotherboardTable(List<Motherboard> list) {
        if (list.isEmpty()) {
            System.out.println("Tidak ada data Motherboard.");
            return;
        }

        int wId = 2, wNama = 4, wHarga = 5, wStok = 4, wNoPart = 7, wManufaktur = 10,
            wKondisi = 7, wSocket = 6, wDDR = 3, wChipset = 7;

        for (Motherboard mb : list) {
            wId = Math.max(wId, String.valueOf(mb.getId()).length());
            wNama = Math.max(wNama, mb.getNama().length());
            wHarga = Math.max(wHarga, String.valueOf(mb.getHarga()).length());
            wStok = Math.max(wStok, String.valueOf(mb.getStok()).length());
            wNoPart = Math.max(wNoPart, mb.getNoPart().length());
            wManufaktur = Math.max(wManufaktur, mb.getManufaktur().length());
            wKondisi = Math.max(wKondisi, mb.getKondisi().length());
            wSocket = Math.max(wSocket, mb.getSocket().length());
            wDDR = Math.max(wDDR, String.valueOf(mb.getDDRVer()).length());
            wChipset = Math.max(wChipset, mb.getChipset().length());
        }

        String sep = "+" + "-".repeat(wId + 2) + "+" + "-".repeat(wNama + 2) + "+"
                   + "-".repeat(wHarga + 2) + "+" + "-".repeat(wStok + 2) + "+"
                   + "-".repeat(wNoPart + 2) + "+" + "-".repeat(wManufaktur + 2) + "+"
                   + "-".repeat(wKondisi + 2) + "+" + "-".repeat(wSocket + 2) + "+"
                   + "-".repeat(wDDR + 2) + "+" + "-".repeat(wChipset + 2) + "+";

        System.out.println(sep);

        System.out.printf("| %-"+wId+"s | %-"+wNama+"s | %-"+wHarga+"s | %-"+wStok+"s | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wSocket+"s | %-"+wDDR+"s | %-"+wChipset+"s |\n",
                "ID", "Nama", "Harga", "Stok", "NoPart", "Manufaktur", "Kondisi", "Socket", "DDR", "Chipset");

        System.out.println(sep);

        for (Motherboard mb : list) {
            System.out.printf("| %-"+wId+"d | %-"+wNama+"s | %-"+wHarga+"d | %-"+wStok+"d | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wSocket+"s | %-"+wDDR+"d | %-"+wChipset+"s |\n",
                    mb.getId(), mb.getNama(), mb.getHarga(), mb.getStok(),
                    mb.getNoPart(), mb.getManufaktur(), mb.getKondisi(),
                    mb.getSocket(), mb.getDDRVer(), mb.getChipset());
        }

        System.out.println(sep);
    }

    // ================= Processor =================
    public static void printProcessorTable(List<Processor> list) {
        if (list.isEmpty()) {
            System.out.println("Tidak ada data Processor.");
            return;
        }

        int wId = 2, wNama = 4, wHarga = 5, wStok = 4, wNoPart = 7, wManufaktur = 10,
            wKondisi = 7, wSocket = 6, wCore = 4, wThread = 6, wTDP = 3;

        for (Processor p : list) {
            wId = Math.max(wId, String.valueOf(p.getId()).length());
            wNama = Math.max(wNama, p.getNama().length());
            wHarga = Math.max(wHarga, String.valueOf(p.getHarga()).length());
            wStok = Math.max(wStok, String.valueOf(p.getStok()).length());
            wNoPart = Math.max(wNoPart, p.getNoPart().length());
            wManufaktur = Math.max(wManufaktur, p.getManufaktur().length());
            wKondisi = Math.max(wKondisi, p.getKondisi().length());
            wSocket = Math.max(wSocket, p.getSocket().length());
            wCore = Math.max(wCore, String.valueOf(p.getCore()).length());
            wThread = Math.max(wThread, String.valueOf(p.getThread()).length());
            wTDP = Math.max(wTDP, String.valueOf(p.getTDP()).length());
        }

        String sep = "+" + "-".repeat(wId + 2) + "+" + "-".repeat(wNama + 2) + "+"
                   + "-".repeat(wHarga + 2) + "+" + "-".repeat(wStok + 2) + "+"
                   + "-".repeat(wNoPart + 2) + "+" + "-".repeat(wManufaktur + 2) + "+"
                   + "-".repeat(wKondisi + 2) + "+" + "-".repeat(wSocket + 2) + "+"
                   + "-".repeat(wCore + 2) + "+" + "-".repeat(wThread + 2) + "+"
                   + "-".repeat(wTDP + 2) + "+";

        System.out.println(sep);

        System.out.printf("| %-"+wId+"s | %-"+wNama+"s | %-"+wHarga+"s | %-"+wStok+"s | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wSocket+"s | %-"+wCore+"s | %-"+wThread+"s | %-"+wTDP+"s |\n",
                "ID", "Nama", "Harga", "Stok", "NoPart", "Manufaktur", "Kondisi", "Socket", "Core", "Thread", "TDP");

        System.out.println(sep);

        for (Processor p : list) {
            System.out.printf("| %-"+wId+"d | %-"+wNama+"s | %-"+wHarga+"d | %-"+wStok+"d | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wSocket+"s | %-"+wCore+"d | %-"+wThread+"d | %-"+wTDP+"d |\n",
                    p.getId(), p.getNama(), p.getHarga(), p.getStok(),
                    p.getNoPart(), p.getManufaktur(), p.getKondisi(),
                    p.getSocket(), p.getCore(), p.getThread(), p.getTDP());
        }

        System.out.println(sep);
    }

    // ================= Ram =================
    public static void printRamTable(List<Ram> list) {
        if (list.isEmpty()) {
            System.out.println("Tidak ada data RAM.");
            return;
        }

        int wId = 2, wNama = 4, wHarga = 5, wStok = 4, wNoPart = 7, wManufaktur = 10,
            wKondisi = 7, wDDR = 3, wMemory = 6, wSpeed = 5;

        for (Ram r : list) {
            wId = Math.max(wId, String.valueOf(r.getId()).length());
            wNama = Math.max(wNama, r.getNama().length());
            wHarga = Math.max(wHarga, String.valueOf(r.getHarga()).length());
            wStok = Math.max(wStok, String.valueOf(r.getStok()).length());
            wNoPart = Math.max(wNoPart, r.getNoPart().length());
            wManufaktur = Math.max(wManufaktur, r.getManufaktur().length());
            wKondisi = Math.max(wKondisi, r.getKondisi().length());
            wDDR = Math.max(wDDR, String.valueOf(r.getDDRVer()).length());
            wMemory = Math.max(wMemory, String.valueOf(r.getMemory()).length());
            wSpeed = Math.max(wSpeed, String.valueOf(r.getSpeed()).length());
        }

        String sep = "+" + "-".repeat(wId + 2) + "+" + "-".repeat(wNama + 2) + "+"
                   + "-".repeat(wHarga + 2) + "+" + "-".repeat(wStok + 2) + "+"
                   + "-".repeat(wNoPart + 2) + "+" + "-".repeat(wManufaktur + 2) + "+"
                   + "-".repeat(wKondisi + 2) + "+" + "-".repeat(wDDR + 2) + "+"
                   + "-".repeat(wMemory + 2) + "+" + "-".repeat(wSpeed + 2) + "+";

        System.out.println(sep);

        System.out.printf("| %-"+wId+"s | %-"+wNama+"s | %-"+wHarga+"s | %-"+wStok+"s | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wDDR+"s | %-"+wMemory+"s | %-"+wSpeed+"s |\n",
                "ID", "Nama", "Harga", "Stok", "NoPart", "Manufaktur", "Kondisi", "DDR", "Memory", "Speed");

        System.out.println(sep);

        for (Ram r : list) {
            System.out.printf("| %-"+wId+"d | %-"+wNama+"s | %-"+wHarga+"d | %-"+wStok+"d | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wDDR+"d | %-"+wMemory+"d | %-"+wSpeed+"d |\n",
                    r.getId(), r.getNama(), r.getHarga(), r.getStok(),
                    r.getNoPart(), r.getManufaktur(), r.getKondisi(),
                    r.getDDRVer(), r.getMemory(), r.getSpeed());
        }

        System.out.println(sep);
    }

    // ================= GPU =================
    public static void printGPUTable(List<GPU> list) {
        if (list.isEmpty()) {
            System.out.println("Tidak ada data GPU.");
            return;
        }

        int wId = 2, wNama = 4, wHarga = 5, wStok = 4, wNoPart = 7, wManufaktur = 10,
            wKondisi = 7, wMemory = 6, wTDP = 3, wPcieGen = 7;

        for (GPU g : list) {
            wId = Math.max(wId, String.valueOf(g.getId()).length());
            wNama = Math.max(wNama, g.getNama().length());
            wHarga = Math.max(wHarga, String.valueOf(g.getHarga()).length());
            wStok = Math.max(wStok, String.valueOf(g.getStok()).length());
            wNoPart = Math.max(wNoPart, g.getNoPart().length());
            wManufaktur = Math.max(wManufaktur, g.getManufaktur().length());
            wKondisi = Math.max(wKondisi, g.getKondisi().length());
            wMemory = Math.max(wMemory, String.valueOf(g.getMemory()).length());
            wTDP = Math.max(wTDP, String.valueOf(g.getTDP()).length());
            wPcieGen = Math.max(wPcieGen, String.valueOf(g.getPcieGen()).length());
        }

        String sep = "+" + "-".repeat(wId + 2) + "+" + "-".repeat(wNama + 2) + "+"
                   + "-".repeat(wHarga + 2) + "+" + "-".repeat(wStok + 2) + "+"
                   + "-".repeat(wNoPart + 2) + "+" + "-".repeat(wManufaktur + 2) + "+"
                   + "-".repeat(wKondisi + 2) + "+" + "-".repeat(wMemory + 2) + "+"
                   + "-".repeat(wTDP + 2) + "+" + "-".repeat(wPcieGen + 2) + "+";

        System.out.println(sep);

        System.out.printf("| %-"+wId+"s | %-"+wNama+"s | %-"+wHarga+"s | %-"+wStok+"s | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wMemory+"s | %-"+wTDP+"s | %-"+wPcieGen+"s |\n",
                "ID", "Nama", "Harga", "Stok", "NoPart", "Manufaktur", "Kondisi", "Memory", "TDP", "PcieGen");

        System.out.println(sep);

        for (GPU g : list) {
            System.out.printf("| %-"+wId+"d | %-"+wNama+"s | %-"+wHarga+"d | %-"+wStok+"d | %-"+wNoPart+"s | %-"+wManufaktur+"s | %-"+wKondisi+"s | %-"+wMemory+"d | %-"+wTDP+"d | %-"+wPcieGen+"d |\n",
                    g.getId(), g.getNama(), g.getHarga(), g.getStok(),
                    g.getNoPart(), g.getManufaktur(), g.getKondisi(),
                    g.getMemory(), g.getTDP(), g.getPcieGen());
        }

        System.out.println(sep);
    }

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
