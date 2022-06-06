//
// Created by henri on 30/05/2022.
//

#ifndef PROGRAM_FILE_H
#define PROGRAM_FILE_H

#include <string>

class File {
    private:
        std::string _url;
    public:
        File():_url("") {}
        File(std::string url) {
            _url = url;
        }
        std::string getUrl();
};


#endif //PROGRAM_FILE_H
