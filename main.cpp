#include <vector>
#include <string>

class ReimeiLoaf {
public:
    ReimeiLoaf(int id, const std::string& data): id(id), data(data) {}

    int getID()const {return id;}


private:
    int id;
    std::string data;
};

class ReimeiSheet {
public:
    ReimeiSheet(const std::string& digital_signature, std::string& data);
};