#include "student_functions.h"

#include <stdexcept>

torch::Tensor normalize(torch::Tensor input) {
    // TODO:
    // 1. verifier que le tenseur est sur CUDA ;
    // 2. verifier qu'il est 2D ;
    // 3. appeler normalize_cuda(input).
    if (!input.is_cuda()) {
        throw std::runtime_error("normalize expects a CUDA tensor");
    }

    if (input.dim() != 2) {
        throw std::runtime_error("normalize expects a 2D tensor");
    }

    return normalize_cuda(input);
}

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("normalize", &normalize, "Normalize a CUDA tensor");
}
