#ifndef FILEPROCESSOR_HPP
#define FILEPROCESSOR_HPP
#include <string>
#include <fstream>
#include <iostream>

class FileProcessor
{
public:
    FileProcessor(const std::string &filename, const std::string &s1, const std::string &s2);
    ~FileProcessor();
    void processFile() const;

private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
    std::string replace(const std::string &content, const std::string &s1, const std::string &s2) const;
};

#endif