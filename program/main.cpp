#include <iostream>
#include <vector>

class File {
    private:
        std::string _url = "";
    public:
        void setUrl(std::string url) {
            _url = url;
        }
        std::string getUrl() {
            return _url;
        }
};

class Item {
    private:
        int _quantity = 0;
        std::string _name = "";
        std::vector<File> _file = {};
    public:
        void setQuantity(int quantity) {
            _quantity = quantity;
        }
        int getQuantity() {
            return _quantity;
        }
        void setName(std::string name) {
            _name = name;
        }
        std::string getName() {
            return _name;
        }
        void setFile(File url) {
            _file.push_back(url);
        }
        std::vector<File> getFile() {
            return _file;
        }
};

class Book: public Item {
    private:
        int _isbn = 0;
    public:
        void setIsbn(int isbn) {
            _isbn = isbn;
        }
        int getIsbn() {
            return _isbn;
        }
};

class Component: public Item {
    private:
        int _voltage = 0;
    public:
        void setVoltage(int voltage) {
            _voltage = voltage;
        }
        int getVoltage() {
            return _voltage;
        }
};

int main() {
    std::cout << "Inicio!" << std::endl;

    Book* book = new Book();
    book->setIsbn(1234);
    book->setQuantity(1);

    File* file = new File();
    file->setUrl("google.com");
    book->setFile(*file);

    std:: cout << book->getIsbn() << std::endl;

    std::cout << "Fim!" << std::endl;

    return 0;
}
