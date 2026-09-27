#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CompositeMaskMul.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskMul_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::SampleMask)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f517f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f51928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>& Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::__cordl_internal_get_maskLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskLayers;
}
constexpr ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer> const& Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::__cordl_internal_get_maskLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskLayers;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::__cordl_internal_set_maskLayers(::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskLayers = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul* Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskMul::CompositeMaskMul()   {
}
