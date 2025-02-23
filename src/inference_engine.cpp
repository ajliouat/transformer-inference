#include "inference_engine.h"
#include "utils.h"
#include <yaml-cpp/yaml.h>

InferenceEngine::InferenceEngine(const std::string& config_file) {
    YAML::Node config = YAML::LoadFile(config_file);
    model_path = config["model_path"].as<std::string>();
    batch_size = config["batch_size"].as<int>();
    use_fp16 = config["use_fp16"].as<bool>();
    use_int8 = config["use_int8"].as<bool>();
    dynamic_batching = config["dynamic_batching"].as<bool>();
    attention_pattern = config["attention_pattern"].as<std::string>();
}

void InferenceEngine::run() {
    // Load model
    loadModel(model_path);

    // Apply optimizations
    if (use_fp16) applyFP16();
    if (use_int8) applyINT8();
    if (dynamic_batching) enableDynamicBatching();
    if (attention_pattern == "custom") applyCustomAttention();

    // Run inference
    std::cout << "Running inference..." << std::endl;
}