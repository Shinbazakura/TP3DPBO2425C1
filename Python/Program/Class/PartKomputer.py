from Class.Barang import Barang

class PartKomputer(Barang):
    def __init__(self, id=0, nama="", harga=0, stok=0, no_part="", manufaktur="", kondisi=""):
        super().__init__(id, nama, harga, stok)
        self._no_part = no_part
        self._manufaktur = manufaktur
        self._kondisi = kondisi

    # Getter and Setter for no_part
    def get_no_part(self):
        return self._no_part

    def set_no_part(self, value):
        self._no_part = value

    # Getter and Setter for manufaktur
    def get_manufaktur(self):
        return self._manufaktur

    def set_manufaktur(self, value):
        self._manufaktur = value

    # Getter and Setter for kondisi
    def get_kondisi(self):
        return self._kondisi

    def set_kondisi(self, value):
        self._kondisi = value
