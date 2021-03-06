#pragma once

#include <stdint.h>
#include <vector>

#include "../base/types.h"
#include "../remote_process/MemoryRegion.h"


namespace pkn
{
    struct Input
    {
        rptr_t base;
        size_t size;
    };
    using Output = erptr_t;

    using Inputs = std::vector<Input>;
    using Outputs = std::vector<Output>;

    struct DefaultRegionFilter
    {
        bool operator()(const MemoryRegion &region)
        {
            return true;
        }
    };
    using seek_results_t = Outputs;
    using seek_result_t = Output;
}
