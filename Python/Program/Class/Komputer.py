from Class.Barang import Barang
from Class.Motherboard import Motherboard
from Class.Processor import Processor
from Class.Ram import Ram
from Class.GPU import GPU

class Komputer(Barang):
    def __init__(self, id=0, nama="", harga=0, stok=0,
                 # Motherboard params
                 mb_id=0, mb_nama="", mb_harga=0, mb_stok=0,
                 mb_no_part="", mb_manufaktur="", mb_kondisi="",
                 mb_socket="", mb_ddr=0, mb_chipset="",

                 # Processor params
                 p_id=0, p_nama="", p_harga=0, p_stok=0,
                 p_no_part="", p_manufaktur="", p_kondisi="",
                 p_socket="", p_core=0, p_thread=0, p_tdp=0,

                 # RAM params
                 r_id=0, r_nama="", r_harga=0, r_stok=0,
                 r_no_part="", r_manufaktur="", r_kondisi="",
                 r_ddr=0, r_memory=0, r_speed=0,

                 # GPU params
                 g_id=0, g_nama="", g_harga=0, g_stok=0,
                 g_no_part="", g_manufaktur="", g_kondisi="",
                 g_memory=0, g_tdp=0, g_pcie=0):
        super().__init__(id, nama, harga, stok)

        # Composition: Komputer owns these components
        self.motherboard = Motherboard(mb_id, mb_nama, mb_harga, mb_stok,
                                       mb_no_part, mb_manufaktur, mb_kondisi,
                                       mb_socket, mb_ddr, mb_chipset)
        self.processor = Processor(p_id, p_nama, p_harga, p_stok,
                                   p_no_part, p_manufaktur, p_kondisi,
                                   p_socket, p_core, p_thread, p_tdp)
        self.ram = Ram(r_id, r_nama, r_harga, r_stok,
                       r_no_part, r_manufaktur, r_kondisi,
                       r_ddr, r_memory, r_speed)
        self.gpu = GPU(g_id, g_nama, g_harga, g_stok,
                       g_no_part, g_manufaktur, g_kondisi,
                       g_memory, g_tdp, g_pcie)

    # Getters only (no setters → composition = owned by Komputer)
    def get_motherboard(self) -> Motherboard:
        return self.motherboard

    def get_processor(self) -> Processor:
        return self.processor

    def get_ram(self) -> Ram:
        return self.ram

    def get_gpu(self) -> GPU:
        return self.gpu
