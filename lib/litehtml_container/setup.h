/**
 * litehtmlgtk-rs
 * Copyright (C) 2024 Andrei-Costin Zisu
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <litehtml/litehtml.h>
#include <memory>

namespace setup {

struct context_struct {
    std::shared_ptr<litehtml::document> owning_ptr;
};

void *setup_litehtml(const char *master_stylesheet, const char *document_string,
                     void *callbacks_instance);

int render(void *bla_pointer, int max_width);

void draw(void *bla_pointer);

} // namespace setup