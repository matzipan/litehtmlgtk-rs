# litehtmlgtk-rs

Render HTML content in-process using native GTK.

This library uses litehtml to perform HTML layout and uses GTK Scene Graph Kit (GSK) to perform GPU-accelerated
rendering.

The most popular way to render HTML in the GTK world is to use `webkit2gtk`. But WebKit is designed for browsers. For
example, WebKit it includes javascript. WebKit also has a multi-process architecture. For a browser this is a
desireable functionality. But this means that interactions with the rendered content need to cross a process boundary.
Furthermore, it is designed to take over the mouse events coming to the widget. This makes it difficult to implement
cases like embedding multiple HTML views inside a GTK `ListView`.

## Status

This library can perform rendering of text inside an HTML page. More complex render nodes, such as images, are not
implemented yet.

Accessibility and text selection does not work.

Make sure to initialize the git submodules:

```shell
git submodule init
git submodule update
```

## Build requirements

`CLANG_LIB_PATH` needs to be set in the environment.

In flatpak this might look like `/usr/lib/sdk/llvm16/lib/clang/16`.

In Fedora this might look like `/usr/lib/clang/16`.

## License

Copyright 2016-2021 Andrei-Costin Zisu.

This software is licensed under the GNU General Public License (version 3).
See the LICENSE file in this distribution.