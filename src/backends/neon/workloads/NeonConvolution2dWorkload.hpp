//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <backendsCommon/Workload.hpp>

#include <arm_compute/runtime/IFunction.h>
#include <arm_compute/runtime/Tensor.h>
#include <arm_compute/runtime/MemoryManagerOnDemand.h>

#include <memory>

namespace armnn
{

arm_compute::Status NeonConvolution2dWorkloadValidate(const TensorInfo& input,
    const TensorInfo& output,
    const Convolution2dDescriptor& descriptor,
    const TensorInfo& weights,
    const Optional<TensorInfo>& biases);

class NeonConvolution2dWorkload : public BaseWorkload<Convolution2dQueueDescriptor>
{
public:
    using BaseWorkload<Convolution2dQueueDescriptor>::m_Data;

    NeonConvolution2dWorkload(const Convolution2dQueueDescriptor& descriptor, const WorkloadInfo& info,
                              std::shared_ptr<arm_compute::MemoryManagerOnDemand>& memoryManager);

    void Execute() const override;

private:
    std::unique_ptr<arm_compute::IFunction> m_ConvolutionLayer;

    std::unique_ptr<arm_compute::Tensor> m_KernelTensor;
    std::unique_ptr<arm_compute::Tensor> m_BiasTensor;

    void FreeUnusedTensors();

};

} //namespace armnn
