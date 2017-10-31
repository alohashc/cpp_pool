/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:02:07 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 21:04:21 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <ctime>

Logger::Logger(std::string fileName):_fileName(fileName){
}

Logger::~Logger(){
}

void Logger::logToConsole(std::string str) {
    std::cout << str << std::endl;
}

void Logger::logToFile(std::string str) {
    std::ofstream ofs(_fileName);
    if (!ofs)
    {
        std::cerr << "Error: file not created" << std::endl;
        exit(1);
    }
    ofs << str << std::endl;
}

std::string Logger::makeLogEntry(std::string message) {
    time_t now = time(0);
    std::string currTime = ctime(&now);
    message = currTime + " " + message;
    return (message);
}

void Logger::log(std::string const &dest, std::string const &message) {
    std::string msg = makeLogEntry(message);
    std::string arrName[2] = {"console", "file"};

    void (Logger::*arrPtr[2])(std::string) = {
            &Logger::logToConsole,
            &Logger::logToFile
    };
    for (int i = 0; i < 2; ++i) {
        if (arrName[i] == dest)
            (this->*arrPtr[i])(msg);
    }
}
