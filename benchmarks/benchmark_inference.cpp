#include "inference_engine.h"
#include <chrono>

void benchmarkInference() {
    InferenceEngine engine("configs/config.yaml");
    auto start = std::chrono::high_resolution_clock::now();
    engine.run();
    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::cout << "Inference completed in " << duration.count() << " ms" << std::endl;
}

int main() {
    benchmarkInference();
    return 0;
}