#include <iostream>
#include <fstream>

#define ERROR_ARGC "Error: replace: wrong number of parameters"
#define ERROR_NULL "Error: replace: parameter can't be empty"
#define ERROR_OPEN "Error: replace: Can't open the file"

int main(int argc, char **argv)
{
    std::ifstream ifs;
    std::ofstream ofs;
    std::string filename;
    std::string tmp;

    if (argc != 4)
    {
        std::cerr << ERROR_ARGC << std::endl;
        return(1);
    }
    for(int i = 1; i < 4; i++)
    {
        std::string tmp = argv[i];
        if (!tmp.size())
        {
            std::cerr << ERROR_NULL << std::endl;
            return (1);
        }
    }
    ifs.open(argv[1]);
    if (ifs.fail())
    {
        std::cerr << ERROR_OPEN << std::endl;
        return (1);
    }
    filename = argv[1];
    filename.replace(filename.size(), 9, ".replace");
    ofs.open(filename);
    filename = argv[2];
    while (std::getline(ifs, tmp))
    {
        while (tmp.find(argv[2]) != std::string::npos)
            tmp.replace(tmp.find(argv[2]), filename.size(), argv[3]);
        ofs << tmp << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);
}