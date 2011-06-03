// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#include "./exception.h"

node_db::Exception::Exception(const char* message) : exception(),
    message(message) {
}

node_db::Exception::Exception(const std::string& message) : exception(),
    message(message.c_str()) {
}

const char* node_db::Exception::what() const throw() {
    return this->message;
}
