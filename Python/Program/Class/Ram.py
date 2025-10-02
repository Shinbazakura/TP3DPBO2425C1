from Class.PartKomputer import PartKomputer

class Ram(PartKomputer):
    def __init__(self, id=0, nama="", harga=0, stok=0,
                 no_part="", manufaktur="", kondisi="",
                 ddr_ver=0, memory=0, speed=0):
        super().__init__(id, nama, harga, stok, no_part, manufaktur, kondisi)
        self._ddr_ver = ddr_ver
        self._memory = memory
        self._speed = speed

    def set_ddr_ver(self, ddr_ver):
        self._ddr_ver = ddr_ver

    def get_ddr_ver(self):
        return self._ddr_ver

    def set_memory(self, memory):
        self._memory = memory

    def get_memory(self):
        return self._memory

    def set_speed(self, speed):
        self._speed = speed

    def get_speed(self):
        return self._speed
