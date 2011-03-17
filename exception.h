// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#ifndef EXCEPTION_H_
#define EXCEPTION_H_

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

#endif  // EXCEPTION_H_
