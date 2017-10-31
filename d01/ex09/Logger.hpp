/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:01:55 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 21:06:19 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>

class Logger{
private:
    std::string _fileName;
    void logToConsole(std::string str);
    void logToFile(std::string str);
    std::string makeLogEntry(std::string message);

public:
    Logger(std::string fileName);
    ~Logger();
    void log(std::string const & dest, std::string const & message);
};

#endif
