/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 19:05:18 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 19:40:46 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void strReplace(std::string fileName, std::string s1, std::string s2)
{
    std::cout << fileName << std::endl;
    if (s1.size() <= 0 || s2.size() <= 0)
    {
        std::cerr << "Error: string s1 or s2 is EMPTY " << std::endl;
        exit(1);
    }
    std::ifstream ifs(fileName);
    if (!ifs)
    {
        std::cerr << "Error: file not open" << std::endl;
        exit(1);
    }
    std::ofstream ofs(fileName + ".replace");
    if (!ofs)
    {
        std::cerr << "Error: file not created" << std::endl;
        exit(1);
    }
    std::string line;
    size_t pos;

    while (std::getline(ifs, line))
    {
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, s1.size(), s2);
            pos += s2.size();
        }
	    ofs << line << std::endl;
    }
}

int main(int ac, char **av) {

    if (ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        strReplace(filename, s1, s2);
    }
    else
        std::cout << "usage: filename string1 string2" << std::endl;
    return 0;
}
