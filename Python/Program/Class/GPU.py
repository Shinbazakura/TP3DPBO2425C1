from Class.PartKomputer import PartKomputer

class GPU(PartKomputer):
    def __init__(self, id=0, nama="", harga=0, stok=0,
                 no_part="", manufaktur="", kondisi="",
                 memory=0, tdp=0, pcie_gen=0):
        super().__init__(id, nama, harga, stok, no_part, manufaktur, kondisi)
        self._memory = memory
        self._tdp = tdp
        self._pcie_gen = pcie_gen

    def set_memory(self, memory):
        self._memory = memory

    def get_memory(self):
        return self._memory

    def set_tdp(self, tdp):
        self._tdp = tdp

    def get_tdp(self):
        return self._tdp

    def set_pcie_gen(self, pcie_gen):
        self._pcie_gen = pcie_gen

    def get_pcie_gen(self):
        return self._pcie_gen
