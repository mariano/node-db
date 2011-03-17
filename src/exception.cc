// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#include "./exception.h"

node_db::Exception::Exception(const char* message) : exception(),
    message(message) {
}

const char* node_db::Exception::what() const throw() {
    return this->message;
}
