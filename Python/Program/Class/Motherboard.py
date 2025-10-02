from Class.PartKomputer import PartKomputer

class Motherboard(PartKomputer):
    def __init__(self, id=0, nama="", harga=0, stok=0,
                 no_part="", manufaktur="", kondisi="",
                 socket="", ddr_ver=0, chipset=""):
        super().__init__(id, nama, harga, stok, no_part, manufaktur, kondisi)
        self._socket = socket
        self._ddr_ver = ddr_ver
        self._chipset = chipset

    def set_socket(self, socket):
        self._socket = socket

    def get_socket(self):
        return self._socket

    def set_ddr_ver(self, ddr_ver):
        self._ddr_ver = ddr_ver

    def get_ddr_ver(self):
        return self._ddr_ver

    def set_chipset(self, chipset):
        self._chipset = chipset

    def get_chipset(self):
        return self._chipset
