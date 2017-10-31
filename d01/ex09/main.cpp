/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alohashc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 21:09:44 by alohashc          #+#    #+#             */
/*   Updated: 2017/10/31 21:09:48 by alohashc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int main() {
    Logger logger("log.txt");

    logger.log("console", "Create file");
    logger.log("file", "Create file 2");
    logger.log("console", "Delete file");
    logger.log("file", "Delete file2");
    return 0;
}
