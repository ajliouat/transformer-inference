# API Reference

## InferenceEngine
- `InferenceEngine(const std::string& config_file)`: Constructor.
- `void run()`: Runs inference.

## KernelFusion
- `void applyFP16()`: Applies FP16 kernel fusion.
- `void applyINT8()`: Applies INT8 kernel fusion.

## DynamicBatching
- `void enableDynamicBatching()`: Enables dynamic batching.

## CustomAttention
- `void applyCustomAttention()`: Applies custom attention patterns.

## Quantization
- `void applyINT8()`: Applies INT8 quantization.