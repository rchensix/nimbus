import Module from './hello.js';

async function init() {
    try {
        const instance = await Module();
        const result = instance.sayHello();
        document.getElementById('output').textContent = result;
    } catch (error) {
        console.error('Failed to initialize WASM module:', error);
        document.getElementById('output').textContent = 'Error loading WebAssembly module';
    }
}

init();
