#include "inference_engine.h"
#include <cassert>

void testInferenceEngine() {
    InferenceEngine engine("configs/config.yaml");
    engine.run();
    assert(true); // Placeholder for actual tests
}

int main() {
    testInferenceEngine();
    return 0;
}