//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#include "LayerSupportBase.hpp"

#include <armnn/Exceptions.hpp>

namespace
{

bool DefaultLayerSupport(const char* func,
                         const char* file,
                         unsigned int line,
                         armnn::Optional<std::string&> reasonIfUnsupported)
{
    // NOTE: We only need to return the reason if the optional parameter is not empty
    if (reasonIfUnsupported)
    {
        std::stringstream message;
        message << func << " is not implemented [" << file << ":" << line << "]";

        reasonIfUnsupported.value() = message.str();
    }

    return false;
}

} // anonymous namespace

namespace armnn
{

bool LayerSupportBase::IsActivationSupported(const TensorInfo& input,
                                             const TensorInfo& output,
                                             const ActivationDescriptor& descriptor,
                                             Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsAdditionSupported(const TensorInfo& input0,
                                           const TensorInfo& input1,
                                           const TensorInfo& output,
                                           Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsBatchNormalizationSupported(const TensorInfo& input,
                                                     const TensorInfo& output,
                                                     const TensorInfo& mean,
                                                     const TensorInfo& var,
                                                     const TensorInfo& beta,
                                                     const TensorInfo& gamma,
                                                     const BatchNormalizationDescriptor& descriptor,
                                                     Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsBatchToSpaceNdSupported(const TensorInfo& input,
                                                 const TensorInfo& output,
                                                 const BatchToSpaceNdDescriptor& descriptor,
                                                 Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsConstantSupported(const TensorInfo& output,
                                           Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsConvertFp16ToFp32Supported(const TensorInfo& input,
                                                    const TensorInfo& output,
                                                    Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsConvertFp32ToFp16Supported(const TensorInfo& input,
                                                    const TensorInfo& output,
                                                    Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsConvolution2dSupported(const TensorInfo& input,
                                                const TensorInfo& output,
                                                const Convolution2dDescriptor& descriptor,
                                                const TensorInfo& weights,
                                                const Optional<TensorInfo>& biases,
                                                Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsDebugSupported(const TensorInfo& input,
                                        const TensorInfo& output,
                                        const DebugDescriptor& descriptor,
                                        Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsDepthwiseConvolutionSupported(const TensorInfo& input,
                                                       const TensorInfo& output,
                                                       const DepthwiseConvolution2dDescriptor& descriptor,
                                                       const TensorInfo& weights,
                                                       const Optional<TensorInfo>& biases,
                                                       Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsDivisionSupported(const TensorInfo& input0,
                                           const TensorInfo& input1,
                                           const TensorInfo& output,
                                           Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsEqualSupported(const armnn::TensorInfo& input0,
                                        const armnn::TensorInfo& input1,
                                        const armnn::TensorInfo& output,
                                        armnn::Optional<std::string &> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsFakeQuantizationSupported(const TensorInfo& input,
                                                   const FakeQuantizationDescriptor& descriptor,
                                                   Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsFloorSupported(const TensorInfo& input,
                                        const TensorInfo& output,
                                        Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsFullyConnectedSupported(const TensorInfo& input,
                                                 const TensorInfo& output,
                                                 const TensorInfo& weights,
                                                 const TensorInfo& biases,
                                                 const FullyConnectedDescriptor& descriptor,
                                                 Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsGatherSupported(const armnn::TensorInfo& input0,
                                         const armnn::TensorInfo& input1,
                                         const armnn::TensorInfo& output,
                                         armnn::Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsGreaterSupported(const TensorInfo& input0,
                                          const TensorInfo& input1,
                                          const TensorInfo& output,
                                          Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsInputSupported(const TensorInfo& input,
                                        Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsL2NormalizationSupported(const TensorInfo& input,
                                                  const TensorInfo& output,
                                                  const L2NormalizationDescriptor& descriptor,
                                                  Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsLstmSupported(const TensorInfo& input,
                                       const TensorInfo& outputStateIn,
                                       const TensorInfo& cellStateIn,
                                       const TensorInfo& scratchBuffer,
                                       const TensorInfo& outputStateOut,
                                       const TensorInfo& cellStateOut,
                                       const TensorInfo& output,
                                       const LstmDescriptor& descriptor,
                                       const TensorInfo& inputToForgetWeights,
                                       const TensorInfo& inputToCellWeights,
                                       const TensorInfo& inputToOutputWeights,
                                       const TensorInfo& recurrentToForgetWeights,
                                       const TensorInfo& recurrentToCellWeights,
                                       const TensorInfo& recurrentToOutputWeights,
                                       const TensorInfo& forgetGateBias,
                                       const TensorInfo& cellBias,
                                       const TensorInfo& outputGateBias,
                                       const TensorInfo* inputToInputWeights,
                                       const TensorInfo* recurrentToInputWeights,
                                       const TensorInfo* cellToInputWeights,
                                       const TensorInfo* inputGateBias,
                                       const TensorInfo* projectionWeights,
                                       const TensorInfo* projectionBias,
                                       const TensorInfo* cellToForgetWeights,
                                       const TensorInfo* cellToOutputWeights,
                                       Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsMaximumSupported(const TensorInfo& input0,
                                          const TensorInfo& input1,
                                          const TensorInfo& output,
                                          Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsMeanSupported(const TensorInfo& input,
                                       const TensorInfo& output,
                                       const MeanDescriptor& descriptor,
                                       Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsMemCopySupported(const armnn::TensorInfo& input,
                                          const armnn::TensorInfo& output,
                                          armnn::Optional<std::string &> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsMergerSupported(const std::vector<const TensorInfo*> inputs,
                                         const TensorInfo& output,
                                         const OriginsDescriptor& descriptor,
                                         Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsMinimumSupported(const TensorInfo& input0,
                                          const TensorInfo& input1,
                                          const TensorInfo& output,
                                          Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsMultiplicationSupported(const TensorInfo& input0,
                                                 const TensorInfo& input1,
                                                 const TensorInfo& output,
                                                 Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsNormalizationSupported(const TensorInfo& input,
                                                const TensorInfo& output,
                                                const NormalizationDescriptor& descriptor,
                                                Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsOutputSupported(const TensorInfo& output,
                                         Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsPadSupported(const TensorInfo& input,
                                      const TensorInfo& output,
                                      const PadDescriptor& descriptor,
                                      Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsPermuteSupported(const TensorInfo& input,
                                          const TensorInfo& output,
                                          const PermuteDescriptor& descriptor,
                                          Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsPooling2dSupported(const TensorInfo& input,
                                            const TensorInfo& output,
                                            const Pooling2dDescriptor& descriptor,
                                            Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsPreCompiledSupported(const TensorInfo& input,
                                              const PreCompiledDescriptor& descriptor,
                                              Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsReshapeSupported(const TensorInfo& input,
                                          const ReshapeDescriptor& descriptor,
                                          Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsResizeBilinearSupported(const TensorInfo& input,
                                                 const TensorInfo& output,
                                                 Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsRsqrtSupported(const TensorInfo &input,
                                        const TensorInfo &output,
                                        Optional<std::string &> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsSoftmaxSupported(const TensorInfo& input,
                                          const TensorInfo& output,
                                          const SoftmaxDescriptor& descriptor,
                                          Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsSpaceToBatchNdSupported(const TensorInfo& input,
                                                 const TensorInfo& output,
                                                 const SpaceToBatchNdDescriptor& descriptor,
                                                 Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsSplitterSupported(const TensorInfo& input,
                                           const ViewsDescriptor& descriptor,
                                           Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsStridedSliceSupported(const TensorInfo& input,
                                               const TensorInfo& output,
                                               const StridedSliceDescriptor& descriptor,
                                               Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

bool LayerSupportBase::IsSubtractionSupported(const TensorInfo& input0,
                                              const TensorInfo& input1,
                                              const TensorInfo& output,
                                              Optional<std::string&> reasonIfUnsupported) const
{
    return DefaultLayerSupport(__func__, __FILE__, __LINE__, reasonIfUnsupported);
}

} // namespace armnn