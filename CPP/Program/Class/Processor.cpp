#include <iostream>
#include <string>
#include "PartKomputer.cpp"

class Processor : public PartKomputer {
private:
    std::string socket;
    int core;
    int thread;
    int TDP;

public:
    Processor()
        : PartKomputer() {
        socket = "";
        core = 0;
        thread = 0;
        TDP = 0;
    }

    Processor(
        int id,
        std::string nama,
        int harga,
        int stok,
        std::string noPart,
        std::string manufaktur,
        std::string kondisi,
        std::string socket,
        int core,
        int thread,
        int TDP
    )
    : PartKomputer(id, nama, harga, stok, noPart, manufaktur, kondisi)
    {
        this->socket = socket;
        this->core   = core;
        this->thread = thread;
        this->TDP    = TDP;
    }


    void setSocket(std::string socket) { this->socket = socket; }
    std::string getSocket() { return socket; }

    void setCore(int core) { this->core = core; }
    int getCore() { return core; }

    void setThread(int thread) { this->thread = thread; }
    int getThread() { return thread; }

    void setTDP(int TDP) { this->TDP = TDP; }
    int getTDP() { return TDP; }
};