#include "FileProcessor.hpp"

FileProcessor::FileProcessor(const std::string &filename, const std::string &s1, const std::string &s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

FileProcessor::~FileProcessor() {}

// Method to replace all occurrences of s1 by s2 in content
std::string FileProcessor::replace(const std::string &content, const std::string &s1, const std::string &s2) const {
    std::string result = content;
    size_t pos = 0;
    while ((pos = result.find(s1, pos)) != std::string::npos) {
        result.erase(pos, s1.length());
        result.insert(pos, s2);
        pos += s2.length(); // Move past the inserted string
    }
    return result;
}

// Method to process the file
void FileProcessor::processFile() const {
std::ifstream inputFile(_filename.c_str());
if (!inputFile.is_open())
{
    std::cerr << "Error: could not open file " << _filename << std::endl;
    return;
}
std::ofstream outputFile((_filename + ".replace").c_str());
if(!outputFile .is_open())
{
    std::cerr << "Error: could not create file " << _filename << ".replace" << std::endl;
    return;
}
std::string line;
while (std::getline(inputFile, line))
{
    outputFile << replace(line, _s1, _s2) << std::endl;
}
inputFile.close();
outputFile.close();
}