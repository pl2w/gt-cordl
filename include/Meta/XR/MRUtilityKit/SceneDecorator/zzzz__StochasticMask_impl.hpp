#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/StochasticMask.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__CompositeMaskAdd_MaskLayer_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask2D_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__StochasticMask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Candidate_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask.SampleMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::SampleMask)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9f524b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::*)(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate)>(&::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f52588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(),
                    {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::*)()>(&::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9f52590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CompositeMaskAdd_MaskLayer& Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::__cordl_internal_get_probabilitySource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilitySource;
}
constexpr ::GlobalNamespace::CompositeMaskAdd_MaskLayer const& Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::__cordl_internal_get_probabilitySource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probabilitySource;
}
constexpr void Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::__cordl_internal_set_probabilitySource(::GlobalNamespace::CompositeMaskAdd_MaskLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probabilitySource = value;
}
inline float_t Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::SampleMask(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, c);
}
inline bool Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::Check(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline void Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask* Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::StochasticMask::StochasticMask()   {
}
