#include <iostream>
#include <vector>

class File {
    private:
        std::string _url;
    public:
        File():_url("") {}
        File(std::string url) {
            _url = url;
        }
        std::string getUrl() {
            return _url;
        }
};

class Item {
    private:
        std::string _name;
        std::vector<File> _file;

    protected:
        int _quantity;

    public:

        enum ItemType {
            BOOK,
            COMPONENT
        };

        ItemType _type;

        Item(ItemType t): _type(t) { }

        Item(ItemType t, int quantity): _type(t), _quantity(quantity) { }

        Item(std::string name, ItemType t) : _name(name), _type(t) { }

        virtual void setQuantity(int quantity) = 0;

        virtual int getQuantity() = 0;

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

        ItemType getType() {
            return _type;
        }

};

class Book: public Item {
    private:
        int _isbn;

    public:
        Book(): Item(BOOK, 1) {}

        void setIsbn(int isbn) {
            _isbn = isbn;
        }
        int getIsbn() {
            return _isbn;
        }

        void setQuantity(int quantity){
            std::cout << "Erro";
        }

        int getQuantity() {
            return 1;
        }
};

class Component: public Item {
    private:
        int _voltage;

    public:
        Component(): Item(COMPONENT) {}

        void setVoltage(int voltage) {
            _voltage = voltage;
        }
        int getVoltage() {
            return _voltage;
        }

        void setQuantity(int quantity){
            _quantity = quantity;
        }

        int getQuantity() {
            return _quantity;
        }
};

class System {
    private:
        std::vector<Item*> _items;

    public:
        void addBook(int isbn, std::string link) {

            Book* book = new Book();
            book->setIsbn(isbn);
            book->setFile(File(link));
            _items.push_back(book);

        }
        void addComponent(int voltage, std::string link) {

            Component* component = new Component();
            component->setVoltage(voltage);
            component->setFile(File(link));

            _items.push_back(component);

        }

};

int main() {
    std::cout << "Inicio" << std::endl;

    std::cout << "Fim!" << std::endl;

    return 0;
}
