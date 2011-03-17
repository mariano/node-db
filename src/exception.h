// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#ifndef SRC_NODE_DB_EXCEPTION_H_
#define SRC_NODE_DB_EXCEPTION_H_

#include <exception>

namespace node_db {
class Exception : public std::exception {
    public:
        explicit Exception(const char* message);
        const char* what() const throw();
    protected:
        const char* message;
};
}

#endif  // SRC_NODE_DB_EXCEPTION_H_
