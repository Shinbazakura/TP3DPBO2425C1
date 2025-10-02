from Class.Barang import Barang
from Class.Motherboard import Motherboard
from Class.Processor import Processor
from Class.Ram import Ram
from Class.GPU import GPU

class Komputer(Barang):
    def __init__(self, id=0, nama="", harga=0, stok=0,
                 motherboard=None, processor=None, ram=None, gpu=None):
        super().__init__(id, nama, harga, stok)
        self.motherboard = motherboard if motherboard else Motherboard()
        self.processor = processor if processor else Processor()
        self.ram = ram if ram else Ram()
        self.gpu = gpu if gpu else GPU()

    # Setter & Getter Motherboard
    def set_motherboard(self, mb: Motherboard):
        self.motherboard = mb

    def get_motherboard(self) -> Motherboard:
        return self.motherboard

    # Setter & Getter Processor
    def set_processor(self, p: Processor):
        self.processor = p

    def get_processor(self) -> Processor:
        return self.processor

    # Setter & Getter RAM
    def set_ram(self, r: Ram):
        self.ram = r

    def get_ram(self) -> Ram:
        return self.ram

    # Setter & Getter GPU
    def set_gpu(self, g: GPU):
        self.gpu = g

    def get_gpu(self) -> GPU:
        return self.gpu
