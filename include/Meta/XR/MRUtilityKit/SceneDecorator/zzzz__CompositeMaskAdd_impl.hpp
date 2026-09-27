#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/CompositeMaskAdd.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::SampleMask)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9f51288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f51450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f51458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>& Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::__cordl_internal_get_maskLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskLayers;
}
constexpr ::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer> const& Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::__cordl_internal_get_maskLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maskLayers;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::__cordl_internal_set_maskLayers(::ArrayW<::GlobalNamespace::CompositeMaskAdd_MaskLayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maskLayers = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd* Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::CompositeMaskAdd::CompositeMaskAdd()   {
}
