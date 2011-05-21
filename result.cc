// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#include "./result.h"

node_db::Result::Column::~Column() {
}

bool node_db::Result::Column::isBinary() const {
    return false;
}

uint64_t node_db::Result::count() const throw(Exception&) {
    throw node_db::Exception("Not implemented");
}

node_db::Result::~Result() {
}
