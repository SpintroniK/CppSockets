/*
 * main.cpp
 *
 *  Created on: 28 Dec 2017
 *      Author: jeremy
 */

#include "CppSockets.hpp"

#include <thread>
#include <chrono>

int main(int argc, char** argv)
{

	using namespace Sockets;
	using namespace std::chrono_literals;
	using namespace std::this_thread;

	ServerSocket s(8080);

	std::string str;

	s >> str;

	str += " reply";

	s << str;

	return 0;
}

