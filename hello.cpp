/* To compile:
./emsdk/upstream/emscripten/emcc hello.cpp -o hello.js -s WASM=1 -s NO_EXIT_RUNTIME=1 --bind -s MODULARIZE=1 -s EXPORT_ES6=1
*/

#include <string>

#include <emscripten/bind.h>

std::string sayHello() {
    return "Hello from WebAssembly!";
}

EMSCRIPTEN_BINDINGS(hello_module) {
    emscripten::function("sayHello", &sayHello);
}
