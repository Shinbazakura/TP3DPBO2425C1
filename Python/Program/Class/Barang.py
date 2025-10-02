class Barang:
    def __init__(self, id=0, nama="", harga=0, stok=0):
        self._id = id
        self._nama = nama
        self._harga = harga
        self._stok = stok

    # Getter and Setter for id
    def get_id(self):
        return self._id

    def set_id(self, value):
        self._id = value

    # Getter and Setter for nama
    def get_nama(self):
        return self._nama

    def set_nama(self, value):
        self._nama = value

    # Getter and Setter for harga
    def get_harga(self):
        return self._harga

    def set_harga(self, value):
        self._harga = value

    # Getter and Setter for stok
    def get_stok(self):
        return self._stok

    def set_stok(self, value):
        self._stok = value
