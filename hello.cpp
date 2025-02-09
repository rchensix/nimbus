#include <string>

#include <emscripten/bind.h>

std::string sayHello() {
    return "Hello from WebAssembly!";
}

EMSCRIPTEN_BINDINGS(hello_module) {
    emscripten::function("sayHello", &sayHello);
}
