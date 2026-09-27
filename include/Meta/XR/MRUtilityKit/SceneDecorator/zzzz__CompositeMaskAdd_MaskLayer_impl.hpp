#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CompositeMaskAdd_MaskLayer.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CompositeMaskAdd_MaskLayer.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::CompositeMaskAdd_MaskLayer::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::GlobalNamespace::CompositeMaskAdd_MaskLayer::SampleMask)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f513b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CompositeMaskAdd_MaskLayer>(),
                        {"SampleMask", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::CompositeMaskAdd_MaskLayer::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CompositeMaskAdd_MaskLayer>(),
                        {"SampleMask", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::SceneDecorator::Candidate>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, c);
}
// Ctor Parameters [CppParam { name: "mask", ty: "::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputLimitMin", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputLimitMax", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputOffset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CompositeMaskAdd_MaskLayer::CompositeMaskAdd_MaskLayer(::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>  mask, float_t  outputScale, float_t  outputLimitMin, float_t  outputLimitMax, float_t  outputOffset) noexcept  {
this->mask = mask;
this->outputScale = outputScale;
this->outputLimitMin = outputLimitMin;
this->outputLimitMax = outputLimitMax;
this->outputOffset = outputOffset;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeMaskAdd_MaskLayer::CompositeMaskAdd_MaskLayer()   {
}
