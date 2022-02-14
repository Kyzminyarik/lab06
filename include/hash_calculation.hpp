// Copyright 2021 Your Name <your_email>

#ifndef INCLUDE_EXAMPLE_HPP_
#define INCLUDE_EXAMPLE_HPP_

#include <atomic>
#include <csignal>
#include <ctime>
#include <future>
#include <string>
#include "../third-party/PicoSHA2/picosha2.h"
#include <json_creator.hpp>
#include <logging.hpp>

void hash_calc(const std::string& path, size_t num_of_threads, size_t rotation);

#endif // INCLUDE_EXAMPLE_HPP_
