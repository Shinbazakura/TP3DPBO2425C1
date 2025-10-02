from Class.PartKomputer import PartKomputer

class Processor(PartKomputer):
    def __init__(self, id=0, nama="", harga=0, stok=0,
                 no_part="", manufaktur="", kondisi="",
                 socket="", core=0, thread=0, tdp=0):
        super().__init__(id, nama, harga, stok, no_part, manufaktur, kondisi)
        self._socket = socket
        self._core = core
        self._thread = thread
        self._tdp = tdp

    def set_socket(self, socket):
        self._socket = socket

    def get_socket(self):
        return self._socket

    def set_core(self, core):
        self._core = core

    def get_core(self):
        return self._core

    def set_thread(self, thread):
        self._thread = thread

    def get_thread(self):
        return self._thread

    def set_tdp(self, tdp):
        self._tdp = tdp

    def get_tdp(self):
        return self._tdp
