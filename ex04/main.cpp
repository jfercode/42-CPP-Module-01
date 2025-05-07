/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaferna2 < jaferna2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:23:43 by jaferna2          #+#    #+#             */
/*   Updated: 2025/05/07 18:42:12 by jaferna2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <string>
#include <fstream>

bool    fileExists( const std::string &fileName)
{
    std::ifstream file(fileName.c_str());
    return (file.good());
}

std::string     replaceString(const std::string &line,
                    const std::string &s1, const std::string &s2)
{
    std::string newLine;
    std::string::size_type pos;
    std::string::size_type found;

    pos = 0;
    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        newLine.append(line.substr(pos, found - pos));
        newLine.append(s2);
        pos = found + s1.length();
    }
    newLine.append(line.substr(pos));
    return (newLine);
}

bool    readAndReplaceFile(const std::string &fN, const std::string &fNR,
                    const std::string &s1, const std::string &s2)
{
    std::ifstream   inFile(fN.c_str());
    std::ofstream   outFile(fNR.c_str());
    std::string     line;

    if (!inFile || !outFile)
        return  (false);
    while (std::getline(inFile, line))
    {
        std::string modifiedLine = replaceString(line, s1, s2);
        outFile << modifiedLine << std::endl;
    }
    return (true);
}

int     main ( int argc, char **argv)
{
    std::string fileName;
    std::string s1;
    std::string s2;
    std::string fileNameReplace;

    if (argc != 4)
        std::cout << "Invalid parameters!" << std::endl;
    else
    {
        fileName = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        if (fileExists(fileName))
        {
            fileNameReplace = fileName + ".replace";
            if (!readAndReplaceFile(fileName,fileNameReplace, s1, s2))
                return (std::cout << "Failed " 
                                  << fileNameReplace << " creation" 
                                  << std::endl, 1);
        }
        else
            std::cout << "File " << fileName << "doesn´t exists !" << std::endl;
    }
    return (0);
}
