// Copyright 2011 Mariano Iglesias <mgiglesias@gmail.com>
#include "./result.h"

node_db::Result::Column::~Column() {
}

bool node_db::Result::Column::isBinary() const {
    return false;
}

node_db::Result::~Result() {
}
