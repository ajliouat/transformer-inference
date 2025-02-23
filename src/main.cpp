#include "inference_engine.h"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " --config <config_file>" << std::endl;
        return 1;
    }

    std::string config_file = argv[2];
    InferenceEngine engine(config_file);
    engine.run();

    return 0;
}