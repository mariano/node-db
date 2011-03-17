// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#include "./connection.h"

node_db::Connection::Connection()
    :quoteString('\''),
    quoteField('`'),
    quoteTable('`'),
    port(3306),
    opened(false) {
}

node_db::Connection::~Connection() {
}

std::string node_db::Connection::getHostname() const {
    return this->hostname;
}

void node_db::Connection::setHostname(const std::string& hostname) {
    this->hostname = hostname;
}

std::string node_db::Connection::getUser() const {
    return this->user;
}

void node_db::Connection::setUser(const std::string& user) {
    this->user = user;
}

std::string node_db::Connection::getPassword() const {
    return this->password;
}

void node_db::Connection::setPassword(const std::string& password) {
    this->password = password;
}

std::string node_db::Connection::getDatabase() const {
    return this->database;
}

void node_db::Connection::setDatabase(const std::string& database) {
    this->database = database;
}

uint32_t node_db::Connection::getPort() const {
    return this->port;
}

void node_db::Connection::setPort(uint32_t port) {
    this->port = port;
}

bool node_db::Connection::isOpened() const {
    return this->opened;
}
