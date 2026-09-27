#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUPrefixSum_SystemResources.hpp"
#include "UnityEngine/Rendering/zzzz__GPUPrefixSum_SystemResources_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GPUPrefixSum_SystemResources.LoadKernels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GPUPrefixSum_SystemResources::*)()>(&::GlobalNamespace::GPUPrefixSum_SystemResources::LoadKernels)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb193dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_SystemResources>(),
                        {"LoadKernels", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GPUPrefixSum_SystemResources::LoadKernels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GPUPrefixSum_SystemResources>(),
                        {"LoadKernels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "computeAsset", ty: "::UnityW<::UnityEngine::ComputeShader>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelCalculateLevelDispatchArgsFromConst", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelCalculateLevelDispatchArgsFromBuffer", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelPrefixSumOnGroup", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelPrefixSumOnGroupExclusive", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelPrefixSumNextInput", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelPrefixSumResolveParent", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "kernelPrefixSumResolveParentExclusive", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GPUPrefixSum_SystemResources::GPUPrefixSum_SystemResources(::UnityW<::UnityEngine::ComputeShader>  computeAsset, int32_t  kernelCalculateLevelDispatchArgsFromConst, int32_t  kernelCalculateLevelDispatchArgsFromBuffer, int32_t  kernelPrefixSumOnGroup, int32_t  kernelPrefixSumOnGroupExclusive, int32_t  kernelPrefixSumNextInput, int32_t  kernelPrefixSumResolveParent, int32_t  kernelPrefixSumResolveParentExclusive) noexcept  {
this->computeAsset = computeAsset;
this->kernelCalculateLevelDispatchArgsFromConst = kernelCalculateLevelDispatchArgsFromConst;
this->kernelCalculateLevelDispatchArgsFromBuffer = kernelCalculateLevelDispatchArgsFromBuffer;
this->kernelPrefixSumOnGroup = kernelPrefixSumOnGroup;
this->kernelPrefixSumOnGroupExclusive = kernelPrefixSumOnGroupExclusive;
this->kernelPrefixSumNextInput = kernelPrefixSumNextInput;
this->kernelPrefixSumResolveParent = kernelPrefixSumResolveParent;
this->kernelPrefixSumResolveParentExclusive = kernelPrefixSumResolveParentExclusive;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GPUPrefixSum_SystemResources::GPUPrefixSum_SystemResources()   {
}
